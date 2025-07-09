
    #include "Controllers/ROS2Controller.h"

    // --- Standard Includes ---
    #include "Kismet/GameplayStatics.h"
    #include "Async/Async.h"
    #include "Components/SceneCaptureComponent2D.h"
    #include "Engine/TextureRenderTarget2D.h"
    #include "TimerManager.h"
    #include "RHICommandList.h"
    #include "RenderingThread.h"
    #include "Camera/CameraComponent.h"

    // --- ROS 2 Includes ---
    #include "ROS2NodeComponent.h"
    #include "ROS2Publisher.h"
    #include "ROS2Subscriber.h"
    #include "rclcUtilities.h"

    #include "Msgs/ROS2GenericMsg.h"
    #include "Msgs/ROS2TFMsg.h"        
    #include "Msgs/ROS2TFStamped.h"    
    #include "Msgs/ROS2PoseStamped.h"  
    #include "Msgs/ROS2Odom.h"
    #include "Msgs/ROS2Point.h"        
    #include "Msgs/ROS2Img.h"
    #include "Msgs/ROS2Float64.h"
    #include "Msgs/ROS2Twist.h"
    #include "Msgs/ROS2Str.h"
    #include "Msgs/ROS2Empty.h"
    #include "Msgs/ROS2TF.h"          
    #include "Msgs/ROS2Header.h"      
    #include "Msgs/ROS2Time.h"        
    #include "Msgs/ROS2Pose.h"        
    #include "Msgs/ROS2Quat.h"        

    // C-Struct Headers (Needed for utility function inputs & low-level assignment)
    #include "geometry_msgs/msg/transform_stamped.h"
    #include "geometry_msgs/msg/point.h"
    #include "geometry_msgs/msg/quaternion.h"
    #include "rosidl_runtime_c/string_functions.h" // For string assign/init/fini

    // --- Generic Unreal Includes (no QuadSimCore dependencies) ---
    #include "GameFramework/Pawn.h"
    #include "Components/ActorComponent.h"
    #include "Msgs/ROS2Vec3Stamped.h"



    AROS2Controller::AROS2Controller()
    {
        PrimaryActorTick.bCanEverTick = false;
        Node = CreateDefaultSubobject<UROS2NodeComponent>(TEXT("ROS2NodeComponent"));
        SceneCapture = CreateDefaultSubobject<USceneCaptureComponent2D>(TEXT("SceneCapture"));
        RenderTargets.SetNum(2);
    }

    void AROS2Controller::BeginPlay()
    {
        Super::BeginPlay();

        // --- Pawn Validation ---
        APawn* Pawn = Cast<APawn>(GetAttachParentActor());
        if (!IsValid(Pawn))
        {
            UE_LOG(LogTemp, Error, TEXT("AROS2Controller::BeginPlay - Owning Pawn not found! Aborting."));
            return;
        }
        
        // Check for camera component for image capture
        UActorComponent* CameraComponent = Pawn->GetComponentByClass(UCameraComponent::StaticClass());
        bool bCanCaptureImages = IsValid(CameraComponent);
        if (!bCanCaptureImages)
        {
            UE_LOG(LogTemp, Warning, TEXT("AROS2Controller::BeginPlay - No camera component found. Image capture will be disabled."));
        }

        // --- Node Initialization ---
        FString UniqueNodeName = NodeName;
        if (Pawn) UniqueNodeName = NodeName + TEXT("_") + Pawn->GetFName().ToString();
        UE_LOG(LogTemp, Warning, TEXT("AROS2Controller: Initializing ROS2 Node '%s' in namespace '%s'"), *UniqueNodeName, *Namespace);
        Node->Name = UniqueNodeName;
        Node->Namespace = Namespace;
        Node->Init();

        // --- Setup Publishers ---
        UE_LOG(LogTemp, Log, TEXT("Setting up Publisher: %s"), *OdometryTopicName);
        ROS2_CREATE_LOOP_PUBLISHER_WITH_QOS( Node, this, OdometryTopicName, UROS2Publisher::StaticClass(), UROS2OdomMsg::StaticClass(), OdometryFrequencyHz, &AROS2Controller::UpdateOdometryMessage, UROS2QoS::Default, OdometryPublisher);
        UE_LOG(LogTemp, Log, TEXT("Setting up Publisher: %s"), *PositionGoalTopicName);
        ROS2_CREATE_LOOP_PUBLISHER_WITH_QOS( Node, this, PositionGoalTopicName, UROS2Publisher::StaticClass(), UROS2PointMsg::StaticClass(), GoalFrequenzyHz, &AROS2Controller::UpdateGoalPositionMessage, UROS2QoS::Default, GoalPosition);
        if (bCanCaptureImages) {
            UE_LOG(LogTemp, Log, TEXT("Setting up Publisher: %s"), *ImageTopicName);
            ROS2_CREATE_LOOP_PUBLISHER_WITH_QOS( Node, this, ImageTopicName, UROS2Publisher::StaticClass(), UROS2ImgMsg::StaticClass(), ImageFrequencyHz, &AROS2Controller::UpdateImageMessage, UROS2QoS::SensorData, ImagePublisher);
        }
        UE_LOG(LogTemp, Log, TEXT("Setting up Publisher: %s"), *CollisionTopicName);
        ROS2_CREATE_LOOP_PUBLISHER_WITH_QOS( Node, this, CollisionTopicName, UROS2Publisher::StaticClass(), UROS2Float64Msg::StaticClass(), 10, &AROS2Controller::UpdateCollisionMessage, UROS2QoS::Default, CollisionPublisher);

        // TF Publisher (**USING CORRECT CLASS NAME**)
        UE_LOG(LogTemp, Log, TEXT("Setting up Publisher: %s"), *TFTopicName);
        ROS2_CREATE_LOOP_PUBLISHER_WITH_QOS(
          Node, this, TFTopicName, UROS2Publisher::StaticClass(),
          UROS2TFMsgMsg::StaticClass(), // *** Use the actual class name from ROS2TFMsg.h ***
          TFFrequencyHz, &AROS2Controller::UpdateTFMessage, UROS2QoS::Default, TfPublisher);

        // --- Setup Obstacle Manager ---
        SetupObstacleManager();

        // --- Setup Subscribers ---
        UE_LOG(LogTemp, Log, TEXT("Setting up Subscriber: %s"), *ObstacleTopicName);
        ROS2_CREATE_SUBSCRIBER(Node,this,ObstacleTopicName,UROS2Float64Msg::StaticClass(),&AROS2Controller::HandleObstacleMessage);
        UE_LOG(LogTemp, Log, TEXT("Setting up Subscriber: %s"), *CmdVelTopicName);
        ROS2_CREATE_SUBSCRIBER( Node, this, CmdVelTopicName, UROS2TwistMsg::StaticClass(), &AROS2Controller::HandleVelocityCommand);
        UE_LOG(LogTemp, Log, TEXT("Setting up Subscriber: %s"), *ResetTopicName);
        ROS2_CREATE_SUBSCRIBER( Node, this, ResetTopicName, UROS2EmptyMsg::StaticClass(), &AROS2Controller::HandleResetCommand);
        UE_LOG(LogTemp, Log, TEXT("Setting up Subscriber: %s"), *HoverTopicName);
        ROS2_CREATE_SUBSCRIBER( Node, this, HoverTopicName, UROS2Float64Msg::StaticClass(), &AROS2Controller::HandleHoverCommand);
        UE_LOG(LogTemp, Log, TEXT("Setting up Subscriber: %s"), *AttitudeEulerTopicName);
        ROS2_CREATE_SUBSCRIBER(Node,this,AttitudeEulerTopicName,UROS2Vec3StampedMsg::StaticClass(),&AROS2Controller::HandleAttitudeEuler);
        UE_LOG(LogTemp, Log, TEXT("Setting up Subscriber: %s"), *ImuTopicName);
        ROS2_CREATE_SUBSCRIBER(Node, this, ImuTopicName, UROS2ImuMsg::StaticClass(), &AROS2Controller::HandleImuData);
        // --- Image Capture Initialization ---
        if (bCanCaptureImages) {
            InitializeImageCapture();
            if (ImageFrequencyHz > 0 && GetWorld()) {
                GetWorld()->GetTimerManager().SetTimer(CaptureTimerHandle, this, &AROS2Controller::CaptureImage, 1.0f / ImageFrequencyHz, true);
            }
        }

        UE_LOG(LogTemp, Warning, TEXT("AROS2Controller initialization complete for %s."), *Pawn->GetName());
    }

    void AROS2Controller::EndPlay(const EEndPlayReason::Type EndPlayReason)
    {
        if (GetWorld()) // Check if World is valid
        {
            GetWorld()->GetTimerManager().ClearTimer(CaptureTimerHandle);
        }

        Super::EndPlay(EndPlayReason);
        UE_LOG(LogTemp, Warning, TEXT("AROS2Controller EndPlay called."));
    }

void AROS2Controller::HandleImuData(const UROS2GenericMsg* InMsg)
    {
        APawn* Pawn = Cast<APawn>(GetAttachParentActor());
        UActorComponent* DroneController = Pawn ? Pawn->GetComponentByClass(UActorComponent::StaticClass()) : nullptr;
        if (!InMsg)
        {
            UE_LOG(LogTemp, Error, TEXT("HandleImuData: InMsg is null"));
            return;
        }

        const UROS2ImuMsg* ImuMsgWrapper = Cast<UROS2ImuMsg>(InMsg);
        if (!ImuMsgWrapper)
        {
            UE_LOG(LogTemp, Error, TEXT("HandleImuData: Cast to UROS2ImuMsg failed"));
            return;
        }

        FROSImu ImuData;
        ImuMsgWrapper->GetMsg(ImuData);

        // Convert radians/s to degrees/s
        const FVector AngularVelocityRad = ImuData.AngularVelocity;
        const FVector AngularVelocityDeg = FMath::RadiansToDegrees(AngularVelocityRad);

        // Optional: log it
        UE_LOG(LogTemp, Log, TEXT("IMU Angular Velocity [deg/s]: X=%.2f Y=%.2f Z=%.2f"),
            AngularVelocityDeg.X,
            AngularVelocityDeg.Y,
            AngularVelocityDeg.Z);

        // Send yaw rate command to drone controller via generic interface
        UE_LOG(LogTemp, Log, TEXT("ROS2Controller: Received yaw rate command: %.2f deg/s"), AngularVelocityDeg.Z);
        
    }

    void AROS2Controller::SetupObstacleManager()
    {
        // Skip obstacle manager setup - this should be handled by the main simulation
        // ROS2Controller just publishes/subscribes to obstacle data
        UE_LOG(LogTemp, Log, TEXT("ROS2Controller: Obstacle manager setup skipped - handled by main simulation"));
        ObstacleManagerInstance = nullptr;
    }

    void AROS2Controller::HandleHoverCommand(const UROS2GenericMsg* InMsg)
    {
        if (!InMsg) { UE_LOG(LogTemp, Error, TEXT("HandleHoverMessage: InMsg is null")); return; }
        const UROS2Float64Msg* Float64MsgWrapper = Cast<UROS2Float64Msg>(InMsg); 
        FROSFloat64 HoverData; 
        Float64MsgWrapper->GetMsg(HoverData);
        const int32 HoverHeight = FMath::RoundToInt(HoverData.Data);
        UE_LOG(LogTemp, Log, TEXT("Received Hover Height: %d"), HoverHeight);

        APawn* Pawn = Cast<APawn>(GetAttachParentActor());
        if (!Pawn) { UE_LOG(LogTemp, Error, TEXT("HandleHoverCommand: Owning Pawn invalid")); return; }
        UActorComponent* DroneController = Pawn->GetComponentByClass(UActorComponent::StaticClass());
        if (!IsValid(DroneController)) { UE_LOG(LogTemp, Warning, TEXT("HandleHoverCommand: DroneController invalid")); return; }
        UE_LOG(LogTemp, Log, TEXT("ROS2Controller: Hover command received - Height: %.2f"), (float)HoverHeight);
        // Send hover command to QuadPawn
        FString Command = FString::Printf(TEXT("SetExternalHoverHeight %.2f"), (float)HoverHeight);
        Pawn->CallFunctionByNameWithArguments(*Command, *GLog, nullptr, true);
    }

    void AROS2Controller::HandleAttitudeEuler(const UROS2GenericMsg* InMsg)
    {
        APawn* Pawn = Cast<APawn>(GetAttachParentActor());
        UActorComponent* DroneController = Pawn->GetComponentByClass(UActorComponent::StaticClass());

        if (!InMsg)
        {
            UE_LOG(LogTemp, Error, TEXT("HandleAttitudeEulerStamped: InMsg is null"));
            return;
        }

        const UROS2Vec3StampedMsg* Vec3StampedMsg = Cast<UROS2Vec3StampedMsg>(InMsg);
        if (!Vec3StampedMsg)
        {
            UE_LOG(LogTemp, Error, TEXT("HandleAttitudeEulerStamped: Cast failed"));
            return;
        }

        FROSVec3Stamped StampedData;
        Vec3StampedMsg->GetMsg(StampedData);

        float RollDeg =  FMath::RadiansToDegrees(StampedData.Vector.X);
        float PitchDeg = FMath::RadiansToDegrees(StampedData.Vector.Y);
        float YawDeg =   FMath::RadiansToDegrees(StampedData.Vector.Z);

        UE_LOG(LogTemp, Log, TEXT("ROS2Controller: Attitude command - Roll: %.2f, Pitch: %.2f, Yaw: %.2f"), RollDeg, PitchDeg, YawDeg);
        // Send attitude command to QuadPawn
        FVector EulerAngles = FVector(RollDeg, PitchDeg, YawDeg);
        FString Command = FString::Printf(TEXT("SetExternalAttitudeCommand (%s)"), *EulerAngles.ToString());
        Pawn->CallFunctionByNameWithArguments(*Command, *GLog, nullptr, true);
    }

    void AROS2Controller::HandleObstacleMessage(const UROS2GenericMsg* InMsg)
    {
        if (!InMsg) { UE_LOG(LogTemp, Error, TEXT("HandleObstacleMessage: InMsg is null")); return; }
        const UROS2Float64Msg* Float64MsgWrapper = Cast<UROS2Float64Msg>(InMsg); 
        if (!Float64MsgWrapper) { UE_LOG(LogTemp, Error, TEXT("HandleObstacleMessage: Invalid msg type")); return; }

        if (!IsValid(ObstacleManagerInstance)) { UE_LOG(LogTemp, Error, TEXT("HandleObstacleMessage: ObstacleManager invalid")); return; }

        FROSFloat64 ObstacleData; 
        Float64MsgWrapper->GetMsg(ObstacleData);
        const int32 ObstacleCount = FMath::RoundToInt(ObstacleData.Data);
        LastReceivedObstacleCount = ObstacleCount; 

        UE_LOG(LogTemp, Log, TEXT("Received obstacle count: %d"), ObstacleCount);
        // Obstacle creation not available from generic system - logged only
        
    }

    void AROS2Controller::HandleVelocityCommand(const UROS2GenericMsg* InMsg)
    {

        if (!InMsg) { UE_LOG(LogTemp, Error, TEXT("HandleVelocityCommand: InMsg is null")); return; }
        const UROS2TwistMsg* TwistMsgWrapper = Cast<UROS2TwistMsg>(InMsg);
        if (!TwistMsgWrapper) { UE_LOG(LogTemp, Error, TEXT("HandleVelocityCommand: Invalid msg type")); return; }

        APawn* Pawn = Cast<APawn>(GetAttachParentActor());
        if (!Pawn) { UE_LOG(LogTemp, Error, TEXT("HandleVelocityCommand: Owning Pawn invalid")); return; }
        UActorComponent* DroneController = Pawn->GetComponentByClass(UActorComponent::StaticClass());
        if (!IsValid(DroneController)) { UE_LOG(LogTemp, Warning, TEXT("HandleVelocityCommand: DroneController invalid")); return; }

        FROSTwist TwistData;
        TwistMsgWrapper->GetMsg(TwistData);

        const float M_TO_CM = 100.f;
        const float TargetLinearXVelocity_cms = TwistData.Linear.X * M_TO_CM;
        const float TargetLinearYVelocity_cms = TwistData.Linear.Y * M_TO_CM; // Use Y if needed in future
        const float TargetLinearZVelocity_cms = TwistData.Linear.Z * M_TO_CM; // Use Z if needed in future

        FVector DesiredVelocityVector = FVector(TargetLinearXVelocity_cms, TargetLinearYVelocity_cms, TargetLinearZVelocity_cms);
        const float TargetAngularZ_radps = TwistData.Angular.Z;
        UE_LOG(LogTemp, Log, TEXT("ROS2Controller: Velocity command - Linear: %s, Angular Z: %.2f"), *DesiredVelocityVector.ToString(), TargetAngularZ_radps);
        
        // Send command to QuadPawn via interface (using CallFunctionByNameWithArguments)
        FVector AngularVelocityVector = FVector(0.0f, 0.0f, TargetAngularZ_radps);
        FString Command = FString::Printf(TEXT("SetExternalVelocityCommand (%s) (%s)"), 
            *DesiredVelocityVector.ToString(), 
            *AngularVelocityVector.ToString());
        Pawn->CallFunctionByNameWithArguments(*Command, *GLog, nullptr, true);

    }

    void AROS2Controller::HandleResetCommand(const UROS2GenericMsg* InMsg)
    {
        UE_LOG(LogTemp, Warning, TEXT("AROS2Controller: Processing 'reset' command (received Empty message)..."));

        APawn* Pawn = Cast<APawn>(GetAttachParentActor());
        if (!Pawn) { UE_LOG(LogTemp, Error, TEXT("HandleResetCommand: Owning Pawn invalid")); return; }
        UActorComponent* DroneController = Pawn->GetComponentByClass(UActorComponent::StaticClass());
        if (!IsValid(DroneController)) { UE_LOG(LogTemp, Warning, TEXT("HandleResetCommand: DroneController invalid! Cannot reset.")); return; }

        UE_LOG(LogTemp, Log, TEXT("ROS2Controller: Reset command received"));
        // Send reset command to QuadPawn
        Pawn->CallFunctionByNameWithArguments(TEXT("ResetDroneFromExternal"), *GLog, nullptr, true);
        UE_LOG(LogTemp, Warning, TEXT("AROS2Controller: Reset command processed"));
    }

    void AROS2Controller::UpdateGoalPositionMessage(UROS2GenericMsg* InMessage)
    {
        if (!InMessage) return;

        FROSPoint GoalData;
        // Goal position not available from generic system - use default
        const FVector GoalLocation = FVector::ZeroVector;
        
        GoalData.X = GoalLocation.X;
        GoalData.Y = GoalLocation.Y;
        GoalData.Z = GoalLocation.Z;
        
        if(UROS2PointMsg* GoalMsg = Cast<UROS2PointMsg>(InMessage))
        {
            GoalMsg->SetMsg(GoalData);
        }
        else { UE_LOG(LogTemp, Error, TEXT("UpdateGoalPositionMessage: Failed cast to UROS2PointMsg")); }
    }

    void AROS2Controller::UpdateCollisionMessage(UROS2GenericMsg* InMessage)
    {
        APawn* Pawn = Cast<APawn>(GetAttachParentActor());
        if (!Pawn || !InMessage) return;
        UROS2Float64Msg* Msg = Cast<UROS2Float64Msg>(InMessage);
        if (!Msg) return;
        FROSFloat64 CollisionData;
        // Get collision state from QuadPawn interface
        bool bCollisionState = false;
        if (UFunction* CollisionFunc = Pawn->FindFunction(TEXT("GetDroneCollisionState")))
        {
            Pawn->ProcessEvent(CollisionFunc, &bCollisionState);
        }
        CollisionData.Data = bCollisionState ? 1.0 : 0.0;
        Msg->SetMsg(CollisionData);
    }

    void AROS2Controller::UpdateOdometryMessage(UROS2GenericMsg* InMessage)
    {
        APawn* Pawn = Cast<APawn>(GetAttachParentActor());
        if (!Pawn || !InMessage || !IsValid(OdometryPublisher)) return;
        UActorComponent* DroneController = Pawn->GetComponentByClass(UActorComponent::StaticClass());
        if (!IsValid(DroneController)) return;

        FROSOdom OdometryData;

        // Header
        FTimespan Time = FDateTime::UtcNow().GetTimeOfDay();
        OdometryData.Header.Stamp.Sec = static_cast<int32>(Time.GetTotalSeconds());
        OdometryData.Header.Stamp.Nanosec = static_cast<uint32>(Time.GetFractionNano());
        OdometryData.Header.FrameId = TEXT("odom");       // Pose is relative to the odom frame
        OdometryData.ChildFrameId = TEXT("base_link"); // Twist is relative to the base_link frame

        // Pose (in Odom Frame) - Convert CM to M
        const FVector WorldPositionCm = Pawn->GetActorLocation();
        const FQuat WorldOrientationQuat = Pawn->GetActorQuat(); // Get actor orientation
        const float CM_TO_M = 0.01f;

        OdometryData.Pose.Pose.Position.X = WorldPositionCm.X * CM_TO_M;
        OdometryData.Pose.Pose.Position.Y = WorldPositionCm.Y * CM_TO_M;
        OdometryData.Pose.Pose.Position.Z = WorldPositionCm.Z * CM_TO_M;
        OdometryData.Pose.Pose.Orientation = WorldOrientationQuat; // Use the world orientation

        const FVector WorldLinearVelocityCmps = Pawn->GetVelocity(); // Get World Velocity
        const FRotator WorldRotation = Pawn->GetActorRotation();          // Get World Rotation

       const FVector LocalLinearVelocityCmps = WorldRotation.UnrotateVector(WorldLinearVelocityCmps);
        const FVector AngularVelocityRadps = FVector::ZeroVector; // Angular velocity not available from generic pawn

        // Populate Twist with LOCAL Linear Velocity (Convert CM/s to M/s)
        OdometryData.Twist.Twist.Linear.X = LocalLinearVelocityCmps.X * CM_TO_M;
        OdometryData.Twist.Twist.Linear.Y = LocalLinearVelocityCmps.Y * CM_TO_M;
        OdometryData.Twist.Twist.Linear.Z = LocalLinearVelocityCmps.Z * CM_TO_M; // Make sure Z is included if needed

        // Populate Twist with Angular Velocity (already local, rad/s)
        OdometryData.Twist.Twist.Angular.X = AngularVelocityRadps.X;
        OdometryData.Twist.Twist.Angular.Y = AngularVelocityRadps.Y;
        OdometryData.Twist.Twist.Angular.Z = AngularVelocityRadps.Z;

        // Set message data
        if (UROS2OdomMsg* OdometryMsg = Cast<UROS2OdomMsg>(InMessage))
        {
            OdometryMsg->SetMsg(OdometryData);
        }
        else { UE_LOG(LogTemp, Error, TEXT("UpdateOdometryMessage: Failed cast to UROS2OdomMsg")); }
    }

    void AROS2Controller::InitializeImageCapture()
    {
        APawn* Pawn = Cast<APawn>(GetAttachParentActor());
        if (!Pawn || !SceneCapture)
        {
            UE_LOG(LogTemp, Error, TEXT("Missing required components for image capture!"));
            return;
        }

        // Find camera component generically
        UCameraComponent* CameraComponent = Cast<UCameraComponent>(Pawn->GetComponentByClass(UCameraComponent::StaticClass()));
        if (!CameraComponent)
        {
            UE_LOG(LogTemp, Warning, TEXT("No camera component found - image capture disabled"));
            return;
        }

        if (!SceneCapture->IsAttachedTo(CameraComponent))
        {
            SceneCapture->AttachToComponent(CameraComponent,
                FAttachmentTransformRules::SnapToTargetIncludingScale);
        }
        SceneCapture->RegisterComponent();
        SceneCapture->HiddenActors.Add(Pawn);

        for (int32 i = 0; i < 2; ++i)
        {
            RenderTargets[i] = NewObject<UTextureRenderTarget2D>(this);
            RenderTargets[i]->InitCustomFormat(
                ImageResolution.X,
                ImageResolution.Y,
                PF_B8G8R8A8, 
                true  
            );
            RenderTargets[i]->TargetGamma = 2.2f;
            RenderTargets[i]->UpdateResourceImmediate(true);
        }

        SceneCapture->FOVAngle = CameraComponent->FieldOfView;
        SceneCapture->ShowFlags.SetTonemapper(true);
        SceneCapture->CaptureSource = SCS_FinalColorLDR;
        SceneCapture->bCaptureEveryFrame = false;
        SceneCapture->bAlwaysPersistRenderingState = true;
    }

    void AROS2Controller::CaptureImage()
    {
        if (!SceneCapture || bIsProcessingImage) return;
        APawn* Pawn = Cast<APawn>(GetAttachParentActor());
        if (!Pawn) return;

        // Find camera component generically
        UCameraComponent* CameraComponent = Cast<UCameraComponent>(Pawn->GetComponentByClass(UCameraComponent::StaticClass()));
        if (!CameraComponent) return;

        SceneCapture->SetWorldLocationAndRotation(
            CameraComponent->GetComponentLocation(),
            CameraComponent->GetComponentRotation()
        );

        const FVector CaptureLocation = CameraComponent->GetComponentLocation();
        const FRotator CameraFullRotation = CameraComponent->GetComponentRotation();

        const FRotator CaptureYawOnlyRotation = FRotator(0.0f, CameraFullRotation.Yaw, 0.0f);
        SceneCapture->SetWorldLocationAndRotation(CaptureLocation, CaptureYawOnlyRotation);
        
        CurrentRenderTargetIndex = (CurrentRenderTargetIndex + 1) % 2;
        UTextureRenderTarget2D* CurrentTarget = RenderTargets[CurrentRenderTargetIndex];
        
        SceneCapture->TextureTarget = CurrentTarget;
        SceneCapture->CaptureScene();

        FTextureRenderTargetResource* RTResource = CurrentTarget->GameThread_GetRenderTargetResource();
        if (!RTResource) return;

        bIsProcessingImage = true;
        
        ENQUEUE_RENDER_COMMAND(CaptureImageCommand)(
            [this, RTResource](FRHICommandListImmediate& RHICmdList)
            {
                TArray<FColor> Pixels;
                RHICmdList.ReadSurfaceData(
                    RTResource->GetRenderTargetTexture(),
                    FIntRect(0, 0, ImageResolution.X, ImageResolution.Y),
                    Pixels,
                    FReadSurfaceDataFlags(RCM_UNorm, CubeFace_MAX)
                );

                AsyncTask(ENamedThreads::GameThread, [this, Pixels]()
                {
                    ProcessCapturedImage(Pixels);
                });
            }
        );

        
    }

    void AROS2Controller::ProcessCapturedImage(const TArray<FColor>& Pixels)
    {
        if (Pixels.Num() == 0)
        {
            UE_LOG(LogTemp, Warning, TEXT("Failed to capture image data"));
            bIsProcessingImage = false;
            return;
        }

        FROSImg ImageMsg;
        ImageMsg.Height = ImageResolution.Y;
        ImageMsg.Width = ImageResolution.X;
        ImageMsg.Encoding = "bgr8";
        ImageMsg.Step = ImageResolution.X * 3;
        ImageMsg.Data.Reserve(Pixels.Num() * 3);

        for (const FColor& Pixel : Pixels)
        {
            ImageMsg.Data.Add(Pixel.B);  
            ImageMsg.Data.Add(Pixel.G);  
            ImageMsg.Data.Add(Pixel.R);  
        }

        if (IsValid(ImagePublisher) && IsValid(ImagePublisher->TopicMessage))
        {
            if (UROS2ImgMsg* Msg = Cast<UROS2ImgMsg>(ImagePublisher->TopicMessage))
            {
                Msg->SetMsg(ImageMsg);
                ImagePublisher->Publish();
            }
        }
        else 
        {
            UE_LOG(LogTemp, Error, TEXT("ImagePublisher invalid: %d, Msg: %d"), 
                IsValid(ImagePublisher), 
                (ImagePublisher ? IsValid(ImagePublisher->TopicMessage) : false));
        }

        bIsProcessingImage = false;
    }

    void AROS2Controller::UpdateImageMessage(UROS2GenericMsg* InMessage)
    {
    }
    // Accessor implementations for UI
    FVector AROS2Controller::GetCurrentGoalPosition() const
    {
        // Goal position not available from generic system
        return FVector::ZeroVector;
    }

    FString AROS2Controller::GetDroneID() const
    {
        APawn* Pawn = Cast<APawn>(GetAttachParentActor());
        return Pawn ? Pawn->GetName() : FString(TEXT("Unknown"));
    }

    void AROS2Controller::UpdateTFMessage(UROS2GenericMsg* InMsg)
    {
        // 1) Cast to the actual wrapper class name from ROS2TFMsg.h
        auto* TfMsg = Cast<UROS2TFMsgMsg>(InMsg); // *** Use UROS2TFMsgMsg ***
        if (!TfMsg) return;

        APawn* Pawn = Cast<APawn>(GetAttachParentActor());
        if (!IsValid(Pawn)) return;

        // 2) Build the ROS C-struct TransformStamped
        geometry_msgs__msg__TransformStamped tf_stamped;
        if (!geometry_msgs__msg__TransformStamped__init(&tf_stamped)) {
            UE_LOG(LogTemp, Error, TEXT("UpdateTFMessage: Failed to init TransformStamped C-struct"));
            return;
        }

        // Auto-cleanup for the C-struct
        struct FScopeFiniGuard {
            geometry_msgs__msg__TransformStamped* Ptr;
            FScopeFiniGuard(geometry_msgs__msg__TransformStamped* InPtr) : Ptr(InPtr) {}
            ~FScopeFiniGuard() { if(Ptr) geometry_msgs__msg__TransformStamped__fini(Ptr); }
        } TfGuard(&tf_stamped);

        // Populate Header
        FTimespan Time = FDateTime::UtcNow().GetTimeOfDay();
        tf_stamped.header.stamp.sec = static_cast<int32>(Time.GetTotalSeconds());
        tf_stamped.header.stamp.nanosec = static_cast<uint32>(Time.GetFractionNano());
        if (!rosidl_runtime_c__String__assign(&tf_stamped.header.frame_id, TCHAR_TO_UTF8(*FString("odom")))) {
           UE_LOG(LogTemp, Error, TEXT("UpdateTFMessage: Failed to assign header.frame_id")); return;
        }
        if (!rosidl_runtime_c__String__assign(&tf_stamped.child_frame_id, TCHAR_TO_UTF8(*FString("base_link")))) {
           UE_LOG(LogTemp, Error, TEXT("UpdateTFMessage: Failed to assign child_frame_id")); return;
        }

        // Populate Transform using Utility Function
        tf_stamped.transform = UROS2Utils::TransformUEToROS(Pawn->GetActorTransform());

        // 3) Convert C-struct into the UE FStruct wrapper using the CONFIRMED method
        FROSTFStamped ue_stamp;
        ue_stamp.SetFromROS2(tf_stamped); // This method name is confirmed from ROS2TFStamped.h

        // (Fini will be called by TfGuard)

        // 4) Prepare the main message FStruct
        FROSTFMsg ue_msg;
        ue_msg.Transforms.Add(ue_stamp);

        // 5) Call SetMsg on the correct wrapper object type
        // If the "Cannot convert FROSTFMsg to FROSTF" error still occurs HERE,
        // it indicates a deeper issue possibly within RCLUE's handling of UROS2TFMsgMsg.
        TfMsg->SetMsg(ue_msg);
    }
    void AROS2Controller::HandleGoalPose(const UROS2GenericMsg* InMsg)
    {
        auto* PoseWrap = Cast<UROS2PoseStampedMsg>(InMsg);
        if (!PoseWrap) return;

        // unwrap the ROS message
        FROSPoseStamped rosPose;
        PoseWrap->GetMsg(rosPose);

        // directly grab the UE FVector (no manual .X/.Y/.Z needed)
        FVector goal_loc = rosPose.Pose.Position;

        UE_LOG(LogTemp, Log, TEXT("New ROS goal at %s"), *goal_loc.ToString());

        // feed it to navigation component if available
        if (APawn* Pawn = Cast<APawn>(GetAttachParentActor()))
        {
            if (UActorComponent* NavComponent = Pawn->GetComponentByClass(UActorComponent::StaticClass()))
            {
                UE_LOG(LogTemp, Log, TEXT("ROS2Controller: Navigation component found, setting destination"));
            }
        }
    }

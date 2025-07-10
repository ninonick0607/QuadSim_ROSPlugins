// ROSFlightComponent.h

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ROS2NodeComponent.h"
#include "ROS2Publisher.h"
#include "ROS2Subscriber.h"
#include "ROS2ServiceServer.h"
#include "ROSFlightControllerSource.h"
#include "ROSFlightComponent.generated.h"

// Forward declarations
class UPrimitiveComponent;
class UROS2GenericMsg;
class UROS2GenericSrv;
class FSocket;
class FInternetAddr;

UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class UNREALROSFLIGHT_API UROSFlightComponent : public UActorComponent
{
    GENERATED_BODY()

public:
    UROSFlightComponent();
    void SetControllerSource(UObject* InControllerSource);

    // Networking Configuration
    UPROPERTY(EditAnywhere, Category = "ROSflight Networking")
    FString HostAddress = TEXT("127.0.0.1");

    UPROPERTY(EditAnywhere, Category = "ROSflight Networking")
    int32 Port = 14525;
    
    // Publishing Configuration
    UPROPERTY(EditAnywhere, Category = "ROSflight Publishing")
    bool bPublishSensorData = false;  // Set to false when using rosflight_sim's standalone_sensors

protected:
    virtual void BeginPlay() override;
    virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;
    virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

private:
    // ROS2 Topics - FIXED to match ROSFlight expectations
    UPROPERTY(EditAnywhere, Category="ROS2") FString WrenchTopic   = TEXT("/sim/wrench");  // Deprecated - we use /forces_and_moments now
    UPROPERTY(EditAnywhere, Category="ROS2") FString SimStateTopic = TEXT("/sim/truth_state");
    UPROPERTY(EditAnywhere, Category="ROS2") FString ImuTopic      = TEXT("/simulated_sensors/imu/data");
    UPROPERTY(EditAnywhere, Category="ROS2") FString CommandTopic  = TEXT("/command");
    UPROPERTY(EditAnywhere, Category="ROS2") FString MagTopic      = TEXT("/simulated_sensors/mag");
    UPROPERTY(EditAnywhere, Category="ROS2") FString BaroTopic     = TEXT("/simulated_sensors/baro");
    UPROPERTY(EditAnywhere, Category="ROS2") FString BatteryTopic  = TEXT("/simulated_sensors/battery");
    
    // Sensor Noise Parameters
    UPROPERTY(EditAnywhere, Category="Sensor Noise") float BiasTau = 300.0f;
    UPROPERTY(EditAnywhere, Category="Sensor Noise") FVector NoiseSigmaGyro = FVector(0.0004f);
    UPROPERTY(EditAnywhere, Category="Sensor Noise") FVector NoiseSigmaAccel = FVector(0.0025f);
    
    // Battery Simulation Parameters
    UPROPERTY(EditAnywhere, Category="Battery Sim") float BatteryVoltage = 22.2f;  // 6S battery
    UPROPERTY(EditAnywhere, Category="Battery Sim") float BatteryCapacity = 5000.0f;  // mAh
    
    // ROS Node and Publishers
    UPROPERTY() UROS2NodeComponent* Node = nullptr;
    UPROPERTY() UROS2Publisher* SimStatePub = nullptr;
    UPROPERTY() UROS2Publisher* ImuPub = nullptr;
    UPROPERTY() UROS2Publisher* CommandPub = nullptr;
    UPROPERTY() UROS2Publisher* MagPub = nullptr;
    UPROPERTY() UROS2Publisher* BaroPub = nullptr;
    UPROPERTY() UROS2Publisher* BatteryPub = nullptr;
    
    // Physics
    UPROPERTY() UPrimitiveComponent* Body = nullptr;
    
    // State Variables
    FVector PrevLinVel = FVector::ZeroVector;
    bool bFirstSample = true;
    FVector BiasGyro = FVector::ZeroVector;
    FVector BiasAccel = FVector::ZeroVector;
    FRandomStream RandStream;
    float BatteryCurrentDraw = 10.0f;
    
    // Controller Interface
    TScriptInterface<IROSFlightControllerSource> ControllerSource;
    
    // Networking
    FSocket* Socket = nullptr;
    TSharedPtr<FInternetAddr> RemoteAddr;

public:
    // Publishing Functions
    void PublishIMU();
    void PublishTruthState();
    void PublishMinimalSensors();
    void PublishCommands();
    
    // Callbacks
    UFUNCTION() void HandleWrenchMsg(const UROS2GenericMsg* InMsg);
    UFUNCTION() void HandleRunService(UROS2GenericSrv* InService);
    
private:
    // Utility Functions
    double SampleNormal();
    void StepGaussMarkov(FVector& Bias, const FVector& Sigma, float Dt);
    void ReceiveData();
    bool IsValidControllerSource() const;
    
    // Coordinate Conversions
    FVector UnrealToRos(const FVector& UnrealVec);
    FVector RosToUnreal(const FVector& RosVec);
    FQuat UnrealToRos(const FQuat& UnrealQuat);
};
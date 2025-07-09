# QuadSim_ROSPlugins

A comprehensive ROS2 communication bridge for quadcopter simulation in Unreal Engine 5, providing ROSFlight protocol support and realistic sensor simulation for the robotics ecosystem.

## Overview

QuadSim_ROSPlugins serves as an extension to the QuadSimPlugin, enabling seamless integration between high-fidelity Unreal Engine quadcopter simulations and the ROS2 robotics ecosystem. The plugin provides ROSFlight protocol support, realistic sensor simulation with noise modeling, and bidirectional communication for command and telemetry data.

## Key Features

### 🚁 ROSFlight Integration
- **ROSFlight Protocol Support**: Full implementation of ROSFlight communication protocol
- **MAVLink Communication**: UDP/MAVLink protocol support (default port 14525)
- **Flight Controller Interface**: Seamless integration with ROSFlight-based flight controllers
- **Command Processing**: Real-time flight command handling and execution

### 🔗 ROS2 Communication
- **Bidirectional Communication**: Full ROS2 publisher/subscriber support
- **Service Integration**: Parameter management and simulation control services
- **Transform Broadcasting**: Complete TF tree support for robotics applications
- **QoS Configuration**: Proper Quality of Service settings for reliable communication

### 📊 Realistic Sensor Simulation
- **IMU Simulation**: 6-DOF inertial measurement with configurable noise models
- **Magnetometer**: 3-axis magnetic field sensing with bias drift
- **Barometer**: Atmospheric pressure simulation with altitude correlation
- **Battery Monitoring**: Realistic battery state simulation
- **Camera Integration**: Image streaming with proper coordinate transformations

### 🎯 Advanced Features
- **Noise Modeling**: Gauss-Markov processes for realistic sensor noise
- **Coordinate Transformations**: Proper Unreal Engine (cm) to ROS (m) conversions
- **Unit Conversions**: Automatic handling of different measurement units
- **Bias Simulation**: Long-term sensor bias drift modeling

## Architecture

### Plugin Structure
```
QuadSim_ROSPlugins/
├── UnrealRosFlight/          # Main ROSFlight integration plugin
│   ├── Source/
│   │   ├── Public/
│   │   │   ├── ROSFlightComponent.h
│   │   │   ├── ROS2Controller.h
│   │   │   └── ROSFlightControllerSource.h
│   │   └── Private/
│   │       ├── ROSFlightComponent.cpp
│   │       ├── ROS2Controller.cpp
│   │       └── [Implementation files]
│   └── Config/
│       └── custom_msg_config.yaml
└── rclUE/                    # ROS2 communication library
    └── [Third-party ROS2-UE integration]
```

### Core Components

#### UROSFlightComponent
The main component managing ROSFlight integration:
- Handles sensor data collection and publishing
- Manages flight command reception and processing
- Provides interface between QuadSimPlugin and ROS2

#### AROS2Controller
High-level ROS2 communication manager:
- Topic management (publishers and subscribers)
- Service handling for parameter operations
- Transform broadcasting and coordinate systems

#### IROSFlightControllerSource
Interface for QuadSimPlugin integration:
- Loose coupling with QuadSimPlugin
- Optional dependency management
- Modular architecture support

## QuadSimPlugin Relationship

### Integration Pattern
QuadSim_ROSPlugins is designed as an **optional extension** to QuadSimPlugin:

```cpp
// Optional dependency resolution
if (QuadSimPlugin.Available) {
    // Full integration mode
    UseQuadSimControllerSource();
} else {
    // Standalone simulation mode
    UseInternalPhysicsSimulation();
}
```

### Communication Flow
1. **QuadSimPlugin** → Provides quadcopter physics and dynamics
2. **QuadSim_ROSPlugins** → Extends with ROS2 communication layer
3. **ROS2 Ecosystem** → Receives sensor data and sends commands
4. **ROSFlight Controller** → Processes flight commands and states

## ROS2 Topics and Services

### Published Topics (Sim → ROS2)
| Topic | Message Type | Description |
|-------|-------------|-------------|
| `/forces_and_moments` | `geometry_msgs/Wrench` | Physics forces for simulation |
| `/sim/truth_state` | `nav_msgs/Odometry` | Ground truth state data |
| `/simulated_sensors/imu/data` | `sensor_msgs/Imu` | IMU with noise modeling |
| `/simulated_sensors/mag` | `sensor_msgs/MagneticField` | Magnetometer readings |
| `/simulated_sensors/baro` | `sensor_msgs/FluidPressure` | Barometer data |
| `/simulated_sensors/battery` | `sensor_msgs/BatteryState` | Battery status |
| `/odom` | `nav_msgs/Odometry` | Odometry information |
| `/camera/image` | `sensor_msgs/Image` | Camera image stream |
| `/tf` | `tf2_msgs/TFMessage` | Transform tree |

### Subscribed Topics (ROS2 → Sim)
| Topic | Message Type | Description |
|-------|-------------|-------------|
| `/command` | `rosflight_msgs/Command` | Flight control commands |
| `/cmd_vel` | `geometry_msgs/Twist` | Velocity commands |
| `/goal_pose` | `geometry_msgs/PoseStamped` | Target position |
| `/reset` | `std_msgs/Empty` | Reset simulation |
| `/hover/height` | `std_msgs/Float32` | Hover height commands |

### Services
- **Parameter Management**: Get/set configuration parameters
- **Simulation Control**: Start/stop/reset simulation states
- **File Operations**: Configuration file management

## System Requirements

### Platform Support
- **Primary**: Ubuntu 20.04 + ROS2 Foxy + Unreal Engine 5.10
- **Experimental**: Ubuntu 22.04/24.04 + ROS2 Humble/Jazzy
- **Limitations**: Linux-only (Windows support under development)

### Dependencies
- **ROS2**: Foxy (primary) or Humble/Jazzy (experimental)
- **Unreal Engine**: 5.10 or later
- **rclUE**: Included third-party ROS2-UE communication library
- **FastRTPS**: For ROS2 DDS communication
- **ROSFlight**: For flight controller protocol support

## Installation and Setup

### 1. Prerequisites
```bash
# Install ROS2 Foxy
sudo apt install ros-foxy-desktop

# Install additional ROS2 packages
sudo apt install ros-foxy-tf2-tools ros-foxy-tf2-geometry-msgs

# Source ROS2 environment
source /opt/ros/foxy/setup.bash
```

### 2. Plugin Installation
```bash
# Clone into your Unreal Engine project's Plugins directory
cd /path/to/your/project/Plugins
git clone <repository-url> QuadSim_ROSPlugins

# Build ROS2 dependencies
cd QuadSim_ROSPlugins/rclUE
./setup.sh
```

### 3. Unreal Engine Setup
1. Open your Unreal Engine project
2. Enable the "QuadSim_ROSPlugin" in Plugin Manager
3. Restart Unreal Engine
4. Add ROSFlightComponent to your quadcopter actor

## Configuration

### Custom Message Configuration
Edit `UnrealRosFlight/Config/custom_msg_config.yaml`:
```yaml
custom_msgs:
  - pkg_name: "rosflight_msgs"
    msg_name: "Command"
    file_path: "rosflight_msgs/msg/Command.msg"
```

### ROS2 Package Dependencies
Modify `rclUE/ros2_custom_pkgs.repos` for additional ROS2 packages:
```yaml
repositories:
  rosflight:
    type: git
    url: https://github.com/rosflight/rosflight.git
    version: master
```

## Usage Example

### Basic Setup in Blueprint/C++
```cpp
// Add ROSFlightComponent to your quadcopter
auto ROSFlightComp = CreateDefaultSubobject<UROSFlightComponent>(TEXT("ROSFlightComponent"));

// Configure sensor publishing rates
ROSFlightComp->SetIMUPublishRate(100.0f);  // 100 Hz
ROSFlightComp->SetMagPublishRate(50.0f);   // 50 Hz
ROSFlightComp->SetBaroPublishRate(20.0f);  // 20 Hz

// Enable specific sensors
ROSFlightComp->EnableIMU(true);
ROSFlightComp->EnableMagnetometer(true);
ROSFlightComp->EnableBarometer(true);
```

### ROS2 Command Line Testing
```bash
# Subscribe to sensor data
ros2 topic echo /simulated_sensors/imu/data

# Send velocity command
ros2 topic pub /cmd_vel geometry_msgs/msg/Twist "{linear: {x: 1.0, y: 0.0, z: 0.0}}"

# Reset simulation
ros2 topic pub /reset std_msgs/msg/Empty "{}"
```

## Advanced Features

### Noise Modeling
The plugin implements sophisticated noise models for realistic sensor simulation:
- **White Noise**: Gaussian distributed random noise
- **Bias Drift**: Long-term sensor bias changes
- **Gauss-Markov**: Correlated noise processes
- **Temperature Effects**: Temperature-dependent bias variations

### Coordinate System Handling
Automatic coordinate transformations between:
- **Unreal Engine**: Left-handed, Z-up, centimeter units
- **ROS2**: Right-handed, Z-up, meter units
- **ROSFlight**: Flight controller coordinate conventions

### Performance Optimization
- **Configurable Rates**: Independent publishing rates for different sensors
- **Selective Publishing**: Enable/disable specific sensor streams
- **Efficient Transforms**: Optimized coordinate transformations
- **Memory Management**: Proper cleanup and resource management

## Development and Customization

### Adding Custom Sensors
1. Extend `UROSFlightComponent` with new sensor methods
2. Add corresponding ROS2 message publishers in `AROS2Controller`
3. Configure message types in `custom_msg_config.yaml`
4. Implement sensor-specific noise models

### Custom Message Types
1. Add message definitions to `ros2_custom_pkgs.repos`
2. Update `custom_msg_config.yaml` with new message configurations
3. Rebuild ROS2 dependencies using included tools
4. Implement publishers/subscribers in C++

### Integration with Other Flight Controllers
The plugin's modular architecture allows integration with other flight controller protocols:
1. Implement new controller interface (similar to `IROSFlightControllerSource`)
2. Add protocol-specific message handling
3. Configure appropriate ROS2 message types

## Troubleshooting

### Common Issues
1. **ROS2 Connection Problems**: Check ROS2 environment sourcing
2. **Message Type Errors**: Verify custom message generation
3. **Performance Issues**: Adjust sensor publishing rates
4. **Coordinate Problems**: Verify transform configurations

### Debug Tools
- **ROS2 Tools**: `ros2 topic list`, `ros2 topic echo`
- **Transform Debugging**: `ros2 run tf2_tools view_frames.py`
- **QoS Monitoring**: Built-in QoS reliability monitoring

## Contributing

### Development Setup
1. Fork the repository
2. Create feature branches for new functionality
3. Follow C++ and Blueprint coding standards
4. Test with multiple ROS2 distributions
5. Submit pull requests with comprehensive descriptions

### Code Style
- Follow Unreal Engine C++ coding standards
- Use proper ROS2 naming conventions
- Include comprehensive comments and documentation
- Implement proper error handling and logging

## License

This project is licensed under [License Type] - see the LICENSE file for details.

## Acknowledgments

- **Rapyuta Robotics**: For the rclUE ROS2-Unreal Engine integration library
- **ROSFlight Team**: For the ROSFlight protocol and ecosystem
- **ROS2 Community**: For the robust robotics communication framework
- **Unreal Engine**: For the high-fidelity simulation platform

## Support and Community

- **Issues**: Report bugs and request features via GitHub Issues
- **Documentation**: Comprehensive documentation available in `/docs`
- **Examples**: Sample projects and tutorials in `/examples`
- **Community**: Join the ROS2 and Unreal Engine communities for support

---

*This plugin bridges the gap between high-fidelity Unreal Engine simulation and the ROS2 robotics ecosystem, enabling researchers and developers to test quadcopter algorithms in realistic simulation environments.*

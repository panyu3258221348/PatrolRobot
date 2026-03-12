# PatrolRobot

## 项目简介

PatrolRobot 是一个基于 ESP32 的智能巡逻机器人项目，具有以下功能：

-该项目使用的是esp32-s3为主控芯片，作为机器人下位机的控制器，有以下功能：
  - 控制电机运动 （可配置为普通直流电机或者无刷电机）
  - 读取传感器数据 （如果是直流电机则采集编码器，如果是无刷电机则采集无刷控制器的寄存器）
  - 与上位机通信（通过micro-ros,物理方式可选： wifi,串口）
  - 提供 Web 配置界面 （可以通过手机或者电脑浏览器配置机器人参数，网页调试打印数据）
  - 支持 OTA 升级 （通过配置网页，远程升级固件）
  - 支持制动回充功能 （需配合自动回充套装）


### 核心模块

- **Motor**：电机控制模块
- **Kinematics**：运动学计算模块
- **PidController**：PID 控制算法
- **CanDrive**：CAN 总线驱动
- **Eeprom**：EEPROM 数据存储
- **PS2X**：PS2 手柄控制
- **ota_service**：OTA 升级服务
- **web_config**：Web 配置界面

### 依赖库

```ini
lib_deps =
    https://github.com/fishros/Esp32McpwmMotor.git
    https://gitee.com/ohhuo/micro_ros_platformio.git
    https://github.com/fishros/Esp32PcntEncoder.git
    dfrobot/DFRobot_RTU@^1.0.3
    tockn/MPU6050_tockn@^1.5.2
    hideakitai/MPU9250@^0.4.8
    adafruit/Adafruit SSD1306@^2.5.11
    arminjo/PWMMotorControl@^2.1.0
    kroia/L298N_MotorDriver@^1.0.1
    bblanchon/ArduinoJson@6.21.3
```

## 快速开始

### 环境搭建

1. **安装 PlatformIO**
   - 推荐使用 VS Code + PlatformIO 扩展
   - 或使用 PlatformIO CLI

2. **克隆项目**
   ```bash
   git clone https://github.com/panyu3258221348/PatrolRobot.git
   cd PatrolRobot
   ```

3. **安装依赖**
   - PlatformIO 会自动安装 `platformio.ini` 中指定的依赖库

### 配置与编译

1. **修改配置**
   - 编辑 `platformio.ini` 文件，根据实际硬件调整配置
   - 调整电机参数、传感器引脚等

2. **编译项目**
   ```bash
   pio run
   ```

3. **上传固件**
   ```bash
   pio run -t upload
   ```


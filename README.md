# PatrolRobot

## 项目简介

PatrolRobot 是一个基于 ESP32 的智能巡逻机器人项目，具有以下功能：

- **电机控制**：支持 PWM 电机驱动和精确速度控制
- **运动学计算**：实现机器人的运动规划和控制
- **传感器集成**：支持 MPU6050/MPU9250 陀螺仪和加速度计
- **通信功能**：
  - RS485 通信
  - CAN 总线通信
  - Web 配置界面
  - OTA 远程升级
- **控制系统**：
  - PID 控制器
  - PS2 无线手柄控制
  - Micro ROS 支持

## 硬件平台

- **主控板**：ESP32-S3-DevKitC-1
- **电机驱动**：支持 PWM 电机和 L298N 电机驱动
- **传感器**：
  - MPU6050/MPU9250 惯性测量单元
  - 编码器（使用 ESP32 PCNT 功能）
- **通信模块**：
  - RS485 接口
  - CAN 总线接口
- **显示屏**：SSD1306 OLED 显示屏

## 软件架构

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

## 使用方法

### Web 配置

1. 机器人启动后会创建一个 WiFi 热点（默认名称：PatrolRobot）
2. 连接到该热点
3. 打开浏览器访问 `http://192.168.4.1`
4. 在 Web 界面中配置机器人参数

### PS2 手柄控制

1. 确保 PS2 手柄已与接收器配对
2. 按下手柄上的 START 键激活控制模式
3. 使用左摇杆控制机器人移动方向
4. 使用右摇杆控制机器人旋转

### RS485 通信

机器人支持通过 RS485 接口与其他设备通信，默认波特率为 9600。

### CAN 总线通信

机器人集成了 CAN 总线接口，可用于与其他 CAN 设备通信。

## 项目结构

```
├── include/          # 头文件目录
├── lib/             # 自定义库
│   ├── CanDrive/    # CAN 总线驱动
│   ├── Eeprom/      # EEPROM 存储
│   ├── Kinematics/  # 运动学计算
│   ├── Motor/       # 电机控制
│   ├── PS2X/        # PS2 手柄控制
│   ├── PidController/ # PID 控制器
│   ├── ota_service/ # OTA 升级服务
│   └── web_config/  # Web 配置界面
├── src/             # 源代码
├── test/            # 测试代码
├── platformio.ini   # PlatformIO 配置文件
└── README.md        # 项目说明
```

## 功能特性

### 1. 运动控制
- 支持差分驱动机器人的运动控制
- 实现速度和位置的精确控制
- 集成 PID 算法，提高控制精度

### 2. 传感器数据融合
- 读取 MPU6050/MPU9250 传感器数据
- 实现姿态解算和运动状态监测

### 3. 通信功能
- RS485 通信，支持 Modbus 协议
- CAN 总线通信，支持 CAN2.0 协议
- WiFi 通信，支持 Web 配置和远程控制

### 4. 远程升级
- 支持 OTA 远程固件升级
- 无需物理连接即可更新代码

### 5. 配置管理
- Web 界面配置机器人参数
- 参数持久化存储到 EEPROM

## 技术规格

- **处理器**：ESP32-S3，240MHz
- **内存**：512KB SRAM
- **存储**：4MB Flash
- **通信接口**：
  - WiFi 802.11 b/g/n
  - RS485
  - CAN 总线
- **电机控制**：PWM 输出，支持速度和方向控制
- **传感器**：MPU6050/MPU9250
- **显示屏**：SSD1306 OLED

## 开发指南

### 添加新功能

1. 在 `lib/` 目录下创建新的模块目录
2. 实现相应的功能代码
3. 在 `src/main.cpp` 中引入并使用该模块

### 调试技巧

- 使用 PlatformIO 的串口监视器查看调试信息
- 通过 Web 界面查看实时数据
- 使用 MQTT 客户端接收机器人状态信息

## 故障排查

### 常见问题

1. **无法连接 WiFi**
   - 检查 WiFi 热点是否正常创建
   - 确认密码是否正确

2. **电机不转**
   - 检查电机接线
   - 确认电源电压是否足够
   - 检查电机驱动模块是否正常

3. **传感器数据异常**
   - 检查传感器接线
   - 确认传感器是否校准

4. **通信失败**
   - 检查通信线缆连接
   - 确认波特率设置正确
   - 检查通信协议是否匹配

## 贡献指南

欢迎提交 Issue 和 Pull Request 来改进这个项目！

1. Fork 本项目
2. 创建您的特性分支 (`git checkout -b feature/amazing-feature`)
3. 提交您的更改 (`git commit -m 'Add some amazing feature'`)
4. 推送到分支 (`git push origin feature/amazing-feature`)
5. 打开一个 Pull Request

## 许可证

本项目采用 MIT 许可证，详见 [LICENSE](LICENSE) 文件。

## 联系方式

- **作者**：panyu
- **邮箱**：3258221348@qq.com
- **项目地址**：https://github.com/panyu3258221348/PatrolRobot

---

**感谢使用 PatrolRobot 项目！** 🤖

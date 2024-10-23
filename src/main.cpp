// #include "Arduino.h"
// // #include "Motor.h"
// // #include <Arduino.h>
// // #include <Esp32McpwmMotor.h>
// // #include <Arduino.h>
// // #include <micro_ros_platformio.h>
// // // #include <WiFi.h>
// // #include <rcl/rcl.h>
// // #include <rclc/rclc.h>
// // #include <rclc/executor.h>
// // #include <std_msgs/msg/int32.h>
// // #include <std_msgs/msg/float32.h>
// // #include <geometry_msgs/msg/twist.h> // 包含 ROS2 geometry_msgs/Twist 消息类型
// // #include <PidController.h>           // 包含 PID 控制器库，用于实现 PID 控制
// // #include <fishbot_interfaces/msg/motorcontorl.h>
// // #include <Kinematics.h>
// // #include <nav_msgs/msg/odometry.h>
// // #include <micro_ros_utilities/string_utilities.h>
// // #include "MPU6050_tockn.h"
// // #include "Wire.h"
// // #include <HardwareSerial.h> 
// // #include <Adafruit_GFX.h>     // 加载Adafruit_GFX库
// // #include <Adafruit_SSD1306.h> // 加载Adafruit_SSD1306库
// #include <L298N_MotorDriver.h>

// // Make a motor object 
// // Arduino Pin 3 ( pin must have PWM capability), 
// //   is connected to the driver board pin EN (enable)
// // Arduino Pin 2, is connected to the driver board pin IN1 (H-bridge path 1)
// // Arduino Pin 4, is connected to the driver board pin IN2 (H-bridge path 2)
// // Set the pins for one motor which uses this dual driver board.
// L298N_MotorDriver motor(3,2,4);

// void setup() {
//   motor.setSpeed(100);         // Sets the speed for the motor. 0 - 255
//   motor.setDirection(false);   // Sets the direction ( depending on the wiring ) 
//   motor.enable();              // Turns the motor on
// }

// void loop() {
// }




































































// #include <Arduino.h>
// #include <Esp32McpwmMotor.h>
// #include <Arduino.h>
// #include <micro_ros_platformio.h>
// #include <WiFi.h>
// #include <rcl/rcl.h>
// #include <rclc/rclc.h>
// #include <rclc/executor.h>
// #include <std_msgs/msg/int32.h>
// #include <L298N_MotorDriver.h>
// // 定义 ROS2 执行器和支持结构
// rclc_executor_t executor;
// rclc_support_t support;
// // 定义 ROS2 内存分配器
// rcl_allocator_t allocator;
// // 定义 ROS2 节点和订阅者
// rcl_node_t node;
// rcl_subscription_t subscriber;
// // 定义接收到的消息结构体
// std_msgs__msg__Int32 sub_msg;

// // 定义控制两个电机的对象
// Esp32McpwmMotor motor;

// // 回调函数，当接收到新的 Twist 消息时会被调用
// void twist_callback(const void *msg_in)
// {
//   const std_msgs__msg__Int32 *msg=(const std_msgs__msg__Int32*)msg_in;

//   if(msg->data==200)
//   {
//     motor.updateMotorSpeed(0, 70);
//     motor.updateMotorSpeed(1, 70);
//   }else if(msg->data==205)
//   {
//     motor.updateMotorSpeed(0, -70);
//     motor.updateMotorSpeed(1, 70);
//   }else if(msg->data==203)
//   {
//     motor.updateMotorSpeed(0, 70);
//     motor.updateMotorSpeed(1, -70);

//   }else if(msg->data==208)
//   {
//     motor.updateMotorSpeed(0, 0);
//     motor.updateMotorSpeed(1, 0);
//   }

//   // // 将接收到的消息指针转化为 geometry_msgs__msg__Twist 类型
//   // const geometry_msgs__msg__Twist *twist_msg = (const geometry_msgs__msg__Twist *)msg_in;
//   // // 从 Twist 消息中获取线速度和角速度
//   // float linear_x = twist_msg->linear.x;
//   // float angular_z = twist_msg->angular.z;
//   // // 打印接收到的速度信息
//   // Serial.printf("recv spped(%f,%f)\n", linear_x, angular_z);
//   // // 如果速度为零，则停止两个电机
//   // if (linear_x == 0 && angular_z == 0)
//   // {
//   //   motor.updateMotorSpeed(0, 0);
//   //   motor.updateMotorSpeed(1, 0);
//   //   return;
//   // }

//   // // 根据线速度和角速度控制两个电机的转速
//   // if (linear_x > 0)
//   // {
//   //   motor.updateMotorSpeed(0, 70);
//   //   motor.updateMotorSpeed(1, 70);
//   // }

//   // if (linear_x < 0)
//   // {
//   //   motor.updateMotorSpeed(0, -70);
//   //   motor.updateMotorSpeed(1, -70);
//   // }

//   // if (angular_z > 0)
//   // {
//   //   motor.updateMotorSpeed(0, -70);
//   //   motor.updateMotorSpeed(1, 70);
//   // }

//   // if (angular_z < 0)
//   // {
//   //   motor.updateMotorSpeed(0, 70);
//   //   motor.updateMotorSpeed(1, -70);
//   // }
  
// }

// void setup()
// {
//   // 初始化串口
//   Serial.begin(115200);

//   // 初始化两个电机的引脚
//   motor.attachMotor(0, 22, 23);
//   motor.attachMotor(1, 12, 13);

//   // 设置 micro-ROS 通信参数，连接到指定的 ROS2 代理
//   IPAddress agent_ip;
//   agent_ip.fromString("192.168.229.229");
//   set_microros_wifi_transports("hello", "1234567890", agent_ip, 8888);
//   delay(2000);

//   // 初始化 ROS2 执行器和支持结构
//   allocator = rcl_get_default_allocator();
//   rclc_support_init(&support, 0, NULL, &allocator);
//   // 初始化 ROS2 节点
//   rclc_node_init_default(&node, "esp32_car_contorl", "", &support);
//   // 初始化订阅者
//   rclc_subscription_init_default(
//       &subscriber,
//       &node,
//       ROSIDL_GET_MSG_TYPE_SUPPORT(std_msgs,msg,Int32),
//       "keybord_conorl");
//   rclc_executor_init(&executor, &support.context, 1, &allocator);
//   // 设置订阅的回调函数
//   rclc_executor_add_subscription(&executor, &subscriber, &sub_msg, &twist_callback, ON_NEW_DATA);
//   pinMode(2, OUTPUT);
// }

// void loop()
// {
//   rclc_executor_spin_some(&executor, RCL_MS_TO_NS(100)); // 循环处理数据
// }


#include "Arduino.h"
#include "Motor.h"
#include <Arduino.h>
#include <Esp32McpwmMotor.h>
#include <Arduino.h>
#include <micro_ros_platformio.h>
#include <WiFi.h>
#include <rcl/rcl.h>
#include <rclc/rclc.h>
#include <rclc/executor.h>
#include <std_msgs/msg/int32.h>
#include <std_msgs/msg/float32.h>
#include <geometry_msgs/msg/twist.h> // 包含 ROS2 geometry_msgs/Twist 消息类型
#include <PidController.h>           // 包含 PID 控制器库，用于实现 PID 控制
#include <Kinematics.h>
#include <nav_msgs/msg/odometry.h>
#include <micro_ros_utilities/string_utilities.h>
#include "MPU6050_tockn.h"
#include "Wire.h"
#include <HardwareSerial.h> 
#include <Adafruit_GFX.h>     // 加载Adafruit_GFX库
#include <Adafruit_SSD1306.h> // 加载Adafruit_SSD1306库
#include <Esp32PcntEncoder.h>
#include <PidController.h>           // 包含 PID 控制器库，用于实现 PID 控制
#define MA_pin_pwm 19
#define MA_pin_1 20
#define MA_pin_2 21
#define MB_pin_pwm 47
#define MB_pin_1 48
#define MB_pin_2 45
Esp32PcntEncoder encoders[2]; // 创建一个数组用于存储两个编码器
MyMotor motor1_485(&SerialPort,0x01);
MyMotor motor2_485(&SerialPort,0x02);
int64_t last_ticks[2]; // 记录上一次读取的计数器数值
int32_t pt[2]; // 记录两次读取之间的计数器差值
int64_t last_update_time; // 记录上一次更新时间
float speeds[2]; // 记录两个电机的速度


Adafruit_SSD1306 display; 


rcl_publisher_t odom_publisher;   // 用于发布机器人的里程计信息（Odom）
nav_msgs__msg__Odometry odom_msg; // 机器人的里程计信息

HardwareSerial SerialPort(1); // 使用UART1

TaskHandle_t Task1;
portMUX_TYPE timerMux = portMUX_INITIALIZER_UNLOCKED;
hw_timer_t * timer1 = NULL;
volatile int interruptCounter;
int totalInterruptCounter;

float target_motor_speed[2]={0},target_motor_speed_last[2]={0};

// 定义 ROS2 执行器和支持结构
rclc_executor_t executor;
rclc_support_t support;
// 定义 ROS2 内存分配器
rcl_allocator_t allocator;
// 定义 ROS2 节点和订阅者
rcl_node_t node;
rcl_subscription_t subscriber;
rcl_publisher_t publisher;

rcl_timer_t timer;
// 定义接收到的消息结构体
geometry_msgs__msg__Twist sub_msg;

geometry_msgs__msg__Twist pub_msg;

// std_msgs__msg__Float32 pub_msg;

PidController pid_controller[2];   // 创建PidController的两个对象
Kinematics kinematics;  

float out_motor_speed[2];          // 创建一个长度为 2 的浮点数数组，用于保存输出电机速度
float current_speeds[2];           // 创建一个长度为 2 的浮点数数组，用于保存当前电机速度
float get_speed1=0,get_speed2=0,get_speed3=0,get_speed4=0;
float linear_speed, angular_speed;
float gryo_Z=0,Angle_z;
void micrors_task( void * pvParameters ); 
void timer_init();
void Motor_Init();
//电机速度更新函数，id:电机编号，speed:电机速度(-255---+255)
void Motor_update(unsigned int id,float speed);
//定时器中断，发布里程计消息
void timer_callback(rcl_timer_t *timer, int64_t last_call_time)
{
  RCLC_UNUSED(last_call_time);
  if (timer != NULL)
  {
    rcl_publish(&publisher, &odom_msg, NULL);
  }
}
//cmd_vel订阅回调函数
void twist_callback(const void *msg_in)
{
   const geometry_msgs__msg__Twist *twist_msg = (const geometry_msgs__msg__Twist *)msg_in;
  float linear_x = (twist_msg->linear.x);   // 获取 Twist 消息的线性 x 分量
  float angular_z = (twist_msg->angular.z); // 获取 Twist 消息的角度 z 分量

  kinematics.kinematic_inverse(linear_x*1000, angular_z, target_motor_speed[0], target_motor_speed[1]);
  
}

void setup() {
  Serial.begin(115200); 
  SerialPort.begin(115200, SERIAL_8N1, 17, 18);   
  // Wire1.begin(4, 5); 
  Motor_Init();

  // 2.设置编码器
  encoders[0].init(0, 38, 39); // 初始化第一个编码器，使用GPIO 38和38连接
  encoders[1].init(1, 41, 40); // 初始化第二个编码器，使用GPIO 40和41连接

  pid_controller[0].update_pid(-0.125, -0.01900, -0.25);
  pid_controller[1].update_pid(-0.125, -0.01900, -0.25);
//输出速度限幅
  pid_controller[0].out_limit(-200, 200);
  pid_controller[1].out_limit(-200, 200);

Serial.print("Task1 running on core ");
  // Serial.println(xPortGetCoreID());
kinematics.set_kinematic_param(610);//初始化左右车轮间距
kinematics.set_motor_param(0,1,1600,260);
kinematics.set_motor_param(1,1,1600,260);
//  IPAddress agent_ip;
//  agent_ip.fromString("192.168."+String(8)+".10"); 
// set_microros_wifi_transports("hello", "1234567890", agent_ip, 8888);
//初始化microRos线程
    xTaskCreatePinnedToCore(
              micrors_task,   /* Task function. */
              "Task1",     /* name of task. */
               10240*10,       /* Stack size of task */
               NULL,        /* parameter of the task */
               0,           /* priority of the task */
               NULL,      /* Task handle to keep track of created task */
               0); 
}

////microRos线程
void micrors_task( void * pvParameters ){   
  
    IPAddress agent_ip;
    agent_ip.fromString("192.168."+String(141)+".225"); 
    // agent_ip.fromString("192.168.29.50");82
  // 设置wifi名称，密码，电脑IP,端口号
  // Serial.println(
   //set_microros_wifi_transports("HUAWEI_C4D5", "b308b308b308", agent_ip, 8888);
  set_microros_wifi_transports("hello", "1234567890", agent_ip, 8888);
    // );

  allocator = rcl_get_default_allocator();
  Serial.println("here2");
  Serial.println(rclc_support_init(&support, 0, NULL, &allocator));
  Serial.println("here3");
  // 初始化 ROS2 节点
  rclc_node_init_default(&node, "esp32_car_contorl", "", &support);

//速度控制话题--------------------------------------------------------------------------------------------订阅者
  rclc_subscription_init_default(
      &subscriber,
      &node,
      ROSIDL_GET_MSG_TYPE_SUPPORT(geometry_msgs, msg, Twist),
      "/cmd_vel");
//里程计话题初始化------------------------------------------------------------------------------------------发布者
  odom_msg.header.frame_id = micro_ros_string_utilities_set(odom_msg.header.frame_id, "odom1");
  odom_msg.child_frame_id = micro_ros_string_utilities_set(odom_msg.child_frame_id, "base_footprint");
  rclc_publisher_init_default(
      &publisher,
      &node,
      ROSIDL_GET_MSG_TYPE_SUPPORT(nav_msgs, msg, Odometry),
      "odom1");

 const unsigned int timer_timeout =30;
 rclc_timer_init_default(
  &timer,
  &support, 
  RCL_MS_TO_NS(30),
  timer_callback);
  
 rclc_executor_init(&executor, &support.context, 2, &allocator); 
 rclc_executor_add_timer(&executor, &timer);   
 rclc_executor_add_subscription(&executor, &subscriber, &sub_msg, &twist_callback, ON_NEW_DATA);
{
  while(1)
  { 
       while (true)
      {
      if (!rmw_uros_epoch_synchronized())
      {
        rmw_uros_sync_session(1000);
         // 如果时间同步成功，则将当前时间设置为MicroROS代理的时间，并输出调试信息。
         delay(10);
       }
    delay(100);
    rclc_executor_spin_some(&executor, RCL_MS_TO_NS(100));
      }
  } float linear_speed, angle_speed;

}
}
uint64_t  currentMillis ,previousMillis; 
unsigned long motor_clk=0;
int static_i=0;
void loop() 
{ 

 currentMillis=micros();
  //  Serial.println(currentMillis);
 //if (currentMillis - previousMillis >= 50000) {
 get_speed1=motor1_485.getMotorspeed(20);
 get_speed2=motor2_485.getMotorspeed(20);
 kinematics.update_motor_ticks(currentMillis, get_speed1, get_speed2);
  previousMillis= currentMillis;
   
  pid_controller[0].update_target(target_motor_speed[0]);
  pid_controller[1].update_target(target_motor_speed[1]);
  out_motor_speed[0] = pid_controller[0].update(current_speeds[0]);//左轮速度的PID计算
  out_motor_speed[1] = pid_controller[1].update(current_speeds[1]);//右轮速度的PID计算
//  }
  Serial.print(">out_motor_speed[0]:");
  Serial.println(out_motor_speed[0]);
  Serial.print("\n");

  Serial.println(out_motor_speed[1]); 
  
  Serial.print(">UnPID:");
  Serial.println(current_speeds[1]);
  Serial.print("\n");

  Motor_update(0,out_motor_speed[0]);  //左轮速度更新
  Motor_update(1,out_motor_speed[1]);  //右轮速度更新

    int64_t stamp = rmw_uros_epoch_millis();
   // 获取机器人的位置和速度信息，并将其存储在一个ROS消息（odom_msg）中
   odom_t odom = kinematics.odom();
   odom_msg.header.stamp.sec = static_cast<int32_t>(stamp / 1000); // 秒部分
   odom_msg.header.stamp.nanosec = static_cast<uint32_t>((stamp % 1000) * 1e6); // 纳秒部分
    odom_msg.pose.pose.position.x = odom.x;
   odom_msg.pose.pose.position.y = odom.y;
  //odom话题数据更新
   odom_msg.pose.pose.orientation.w = odom.quaternion.w;
   odom_msg.pose.pose.orientation.x = odom.quaternion.x;
   odom_msg.pose.pose.orientation.y = odom.quaternion.y;
   odom_msg.pose.pose.orientation.z = odom.quaternion.z;
   odom_msg.twist.twist.angular.z = odom.angular_speed;
   odom_msg.twist.twist.linear.x = odom.linear_speed;
    // Serial.println(odom.angular_speed);  
} 
void Motor_Init()
{

  ledcSetup(0, 50000, 8);
  ledcSetup(1, 50000, 8);

  ledcAttachPin(MA_pin_pwm, 0);
  pinMode(MA_pin_1, OUTPUT);
  pinMode(MA_pin_2, OUTPUT);


  ledcAttachPin(MB_pin_pwm, 1);
  pinMode(MB_pin_1, OUTPUT);
  pinMode(MB_pin_2, OUTPUT);

}
void Motor_update(unsigned int id,float speed)
{
if(id==0)
{
  
  if(speed>=0)
  {
    
  digitalWrite(MA_pin_1, 1);
  digitalWrite(MA_pin_2, 0);
  }
  else
  {
  digitalWrite(MA_pin_1, 0);
  digitalWrite(MA_pin_2, 1);
  }
  ledcWrite(id, abs(speed));
}
if(id==1)
{
  
  if(speed>=0)
  {

  digitalWrite(MB_pin_1, 1);
  digitalWrite(MB_pin_2, 0);
  }
  else
  {
  digitalWrite(MB_pin_1, 0);
  digitalWrite(MB_pin_2, 1);
  }
  ledcWrite(id, abs(speed));
}

}






















// void IRAM_ATTR onTimer() {
//   portENTER_CRITICAL_ISR(&timerMux);
  
//  interruptCounter++;

//   portEXIT_CRITICAL_ISR(&timerMux);
// }

// void timer_init()
// {
  
//   timer1 = timerBegin(0, 80, true);
//   timerAttachInterrupt(timer1, &onTimer, true);
//   timerAlarmWrite(timer1, 10000, true);
//   timerAlarmEnable(timer1);



// }



#ifndef Motor_H
 #define Motor_H
 #include "Arduino.h"
 #include<Stream.h>
 #include <DFRobot_RTU.h>
 
 class MyMotor : public DFRobot_RTU
 {
     public:
//@brief:构造函数
//@param:port:串口对象，addr:从机地址
//@example:MyMotor myMotor(&Serial2,0X01);
     MyMotor(Stream *port, uint8_t addr):DFRobot_RTU(port), addr(addr)
     {
        send_succf=0;
        Heart_i=0;
        Heart_previousMillis=0;
        Heart_currentMillis=0;
        Speed_PreviousMillis=0;
     };
      MyMotor(Stream *port, uint8_t addr,int dePin):DFRobot_RTU(port,dePin), addr(addr)
     {
        send_succf=0;
        Heart_i=0;
         Heart_previousMillis=0;
        Heart_currentMillis=0;
     };
//@brief: 设置电机工作模式
//@param:mode:电机模式
     void setMotorMode(uint16_t mode);
 //@brief:设置速度占空比
 //@param: speed:速度占空比,占空比为：speed/1000
     void setMotorSpeed(int16_t speed);
 //@brief:设置心跳周期函数
 //@param:time:心跳周期，单位为ms
 //example:myMotor.setHeartBeat(500);
    void setHeartBeat(uint16_t time,unsigned long clk);;
//@brief:获取电机速度
//@return:速度
//example:int32_t speed=<class>.getMotorspeed();
    int32_t getMotorspeed(uint16_t  freq_ms);

    void getMotorspeed( uint16_t freq_ms,float &get_speed1,float &get_speed2);
//@brief:电机运行函数,监测电机运行状态（未实现）
    void motor_run();
 void setMotorSpeed_contorl(int32_t speed);
    protected:
 //@brief 从机地址   
    uint8_t addr;
 // @brief 心跳
    uint16_t  Heart_i;
 // @brief 发送成功标志位
    char send_succf;
 //@ brief 心跳周期时间设置有关
    unsigned  long Heart_previousMillis ;
    unsigned  long Heart_currentMillis ;

    unsigned  long Speed_PreviousMillis ;

 };

 #endif
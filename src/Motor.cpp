#include "Motor.h"

void MyMotor ::setMotorMode(uint16_t mode) 
{
    delay(10);
    writeHoldingRegister(addr,0x200D,0x0003);
    delay(10);
     writeHoldingRegister(addr,0x2080,0x01F4);
     delay(10);
      writeHoldingRegister(addr,0x2081,0x01F4);
      delay(10);
       writeHoldingRegister(addr,0x2082,0x01F4);
       delay(10);
        writeHoldingRegister(addr,0x2083,0x01F4);
        delay(10);
         writeHoldingRegister(addr,0x200E,0x0008);
}
void MyMotor ::setMotorSpeed(int16_t speed)
 {
    
    writeHoldingRegister(addr,0x1775,speed);
 }

 void MyMotor ::setMotorSpeed_contorl(int32_t speed)
 {
    uint16_t data[2] = {0, 0};
     data[0]=(speed)&0xFFFF;
     data[1]=speed&0xFFFF;
    writeHoldingRegister(addr,0x2088,data,2);
 }

void MyMotor::setHeartBeat(uint16_t time,unsigned long clk)
{
    Heart_currentMillis = clk;
 if (_abs(Heart_currentMillis - Heart_previousMillis) >= time) //如果和前次时间大于等于时间间隔
   {
     
    writeHoldingRegister(addr,2000,Heart_i);
    
    Heart_previousMillis = Heart_currentMillis; //更新时间记录
   Serial.println("*************");       //打印当前时间
   delay(10);
     Heart_i++;
     if(Heart_i>=5)
     Heart_i=0;
   }
     
}

void MyMotor::motor_run()
{

    


}


int32_t  MyMotor:: getMotorspeed( uint16_t freq_ms)
{    
 static int32_t speed_buffer[2]={0};
 static int32_t direction_buffer[1]={0};
 unsigned long Speed_currentMillis = millis();
  //  Serial.println(Speed_PreviousMillis);
 if (Speed_currentMillis-Speed_PreviousMillis>= freq_ms) //如果和前次时间大于等于时间间隔
  {
    
   readHoldingRegister(addr,0x000c,speed_buffer,2);
   readHoldingRegister(addr,0x000B,direction_buffer,2);
   Speed_PreviousMillis = Speed_currentMillis; //更新时间记录
  
  }
  Serial.println(direction_buffer[0]/256);
  if(direction_buffer[0]/256==1)
   return (int32_t)(speed_buffer[0])/256;
  else if(direction_buffer[0]/256==2)
   return -(int32_t)(speed_buffer[0])/256;
  else 
   return 0;
}


void  MyMotor:: getMotorspeed( uint16_t freq_ms,float &get_speed1,float &get_speed2)
{    
 static int16_t speed_buffer[2]={0};
   unsigned long Speed_currentMillis = millis();
  //  Serial.println(Speed_PreviousMillis);
 if (Speed_currentMillis-Speed_PreviousMillis>= freq_ms) //如果和前次时间大于等于时间间隔
  {
    
   readHoldingRegister(addr,0x20AB,(uint16_t *)speed_buffer,2);
   Speed_PreviousMillis = Speed_currentMillis; //更新时间记录
   
  }
//   Serial.println("***********");
//   Serial.println(addr);
// Serial.println(speed_buffer[0]);
// Serial.println(speed_buffer[1]);
//   Serial.println("**********");
  get_speed1=speed_buffer[0];
  get_speed2=speed_buffer[1];

//   Serial.println((speed_buffer[0]<<16)|speed_buffer[1]);
//   Serial.println((speed_buffer[2]<<16)|speed_buffer[3]);
//   return speed_buffer[0]>>8|speed_buffer[1];



}
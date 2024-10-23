#include "Kinematics.h"
#include <vector>
#include <deque>  
#include <limits>  
#include <algorithm> // 用于std::max_element和std::min_element 
extern float  gryo_Z,Angle_z;

#include <iostream>  
#include <deque>  
#include <limits> // 用于std::numeric_limits  
  
class MovingAverage {  
private:  
    std::deque<float> dataQueue;  
    int maxSize;  
    float sum;  
    float minValue = std::numeric_limits<float>::max(); // 初始化为最大可能值  
    float maxValue = std::numeric_limits<float>::min(); // 初始化为最小可能值  
  
public:  
    MovingAverage(int size = 5) : maxSize(size), sum(0.0f) {}  
  
    void addData(float data) {  
        if (dataQueue.size() >= maxSize) {  
            // 如果队列已满，移除最旧的数据并更新总和、最大值和最小值  
            if (dataQueue.front() == minValue) {  
                // 更新最小值（如果存在）  
                minValue = *std::min_element(dataQueue.begin() + 1, dataQueue.end());  
            }  
            if (dataQueue.front() == maxValue) {  
                // 更新最大值（如果存在）  
                maxValue = *std::max_element(dataQueue.begin() + 1, dataQueue.end());  
            }  
            sum -= dataQueue.front();  
            dataQueue.pop_front();  
        }  
  
        // 更新最大值和最小值  
        minValue = std::min(minValue, data);  
        maxValue = std::max(maxValue, data);  
  
        // 添加新数据到队列末尾并更新总和  
        dataQueue.push_back(data);  
        sum += data;  
    }  
  
    float getAverage() const {  
        // 如果队列为空，则返回0或抛出异常（取决于你的需求）  
        if (dataQueue.empty()) {  
            return 0.0f; // 或者 throw std::runtime_error("Cannot calculate average of an empty queue");  
        }  
  
        // 返回平均值  
        return sum / dataQueue.size();  
    }  
  
    float getAverageExceptMinMax() const {  
        if (dataQueue.size() <= 2) {  
            // 如果数据点少于或等于2个，则无法计算（或返回所有数据的平均值）  
            return getAverage();  
        }  
  
        float adjustedSum = sum - maxValue - minValue;  
        return adjustedSum / (dataQueue.size() - 2);  
    }  
};  
  
void Kinematics::set_motor_param(uint8_t id, uint16_t reducation_ratio, uint16_t pulse_ration, float wheel_diameter)
{

    motor_param_[id].id = id;   // 设置电机ID
    motor_param_[id].reducation_ratio = reducation_ratio;   // 设置减速比
    motor_param_[id].pulse_ration = pulse_ration;   // 设置脉冲比
    motor_param_[id].wheel_diameter = wheel_diameter;   // 设置车轮直径
    motor_param_[id].per_pulse_distance = (wheel_diameter * PI) / (reducation_ratio * pulse_ration);  // 每个脉冲对应行驶距离
    motor_param_[id].speed_factor = (1000 * 1000) * (wheel_diameter * PI) / (reducation_ratio * pulse_ration);   // 计算速度因子
    Serial.printf("init motor param %d: %f=%f*PI/(%d*%d) speed_factor=%d\n", id, motor_param_[id].per_pulse_distance, wheel_diameter, reducation_ratio, pulse_ration, motor_param_[id].speed_factor);   // 打印调试信息
}
void Kinematics::set_motor_param(uint8_t id)
{
    Serial.printf("init motor ID: %d", id);   // 打印调试信息
}
void Kinematics::set_kinematic_param(float wheel_distance)
{
    wheel_distance_ = wheel_distance;   // 设置轮间距离
}

void Kinematics::update_motor_ticks(uint64_t current_time, float speed1,float speed2,float speed3,float speed4)
{
    static uint64_t last_time;
    uint64_t dt = current_time -last_time;   // 计算时间差
    last_time=current_time;
    // Serial.println(dt);
   // 打印调试信息
    this->update_bot_odom(dt,speed1,speed2,speed3,speed4);
}
extern float current_speeds[2]; 
     MovingAverage ma1(5); 
     MovingAverage ma2(5); 
void Kinematics::update_motor_ticks(uint64_t current_time, int32_t motor_tick1, int32_t motor_tick2)
{   
   
    uint32_t dt = current_time - motor_param_[0].last_update_time;   // 计算时间差
    int64_t dtick1 = motor_tick1 - motor_param_[0].last_encoder_tick;   // 计算电机1脉冲差
    int64_t dtick2 = motor_tick2 - motor_param_[1].last_encoder_tick;   // 计算电机2脉冲差
    // if(dt>1000)
    // {
     Serial.print(">dtick1:");
     Serial.print(dtick1);
      Serial.print("\n");
    //  Serial.printf(" --%d---%f=motor_tick1:%d\n",motor_tick1,motor_param_[0].last_encoder_tick, dtick1);
    //  Serial.printf("-----------motor_tick2:%d\n", dtick2);
    // // 轮子速度计算
    // Serial.printf(" motor_param_[0].speed_factor / dt:%f\n", motor_param_[0].speed_factor);
    motor_param_[0].motor_speed = dtick1 * (motor_param_[0].speed_factor / dt);   // 计算电机1轮子速度
    motor_param_[1].motor_speed = dtick2 * (motor_param_[1].speed_factor / dt);   // 计算电机2轮子速度
    //  Serial.printf("last_update_time:%d\n",motor_param_[0].last_update_time );
    current_speeds[0]= motor_param_[0].motor_speed;
    current_speeds[1]= motor_param_[1].motor_speed;
    ma1.addData(current_speeds[0]); 
    ma2.addData(current_speeds[1]); 
    //  current_speeds[0]=  filter.getAverage() ;
    Serial.print(">unfiltered speed:"); 
      Serial.print(motor_param_[0].motor_speed);
       Serial.print("\n");

      Serial.print(">filtered speed:"); 
     current_speeds[0]=ma1.getAverageExceptMinMax();
      Serial.print( ma1.getAverageExceptMinMax());
       Serial.print("\n");

    // Serial.print(">motor_param_[1].motor_speed:");
       current_speeds[1]=ma2.getAverageExceptMinMax();
    //  Serial.print(ma2.getAverageExceptMinMax());
    //    Serial.print("\n");
    // //  Serial.printf("speed2:%f\n",motor_param_[1].motor_speed);
//  destroyBuffer(cb);
    motor_param_[0].last_encoder_tick = motor_tick1;   // 更新电机1上一次的脉冲计数
    motor_param_[1].last_encoder_tick = motor_tick2;   // 更新电机2上一次的脉冲计数
    motor_param_[0].last_update_time = current_time;   // 更新电机1上一次更新时间
    motor_param_[1].last_update_time = current_time;   // 更新电机2上一次更新时间
   
//    Serial.printf("motor1 speed: %f, motor2 speed: %f\n", motor_param_[0].motor_speed, motor_param_[1].motor_speed);   // 打印调试信息
    // 更新机器人里程计
    // Serial.printf("dt:%d\n",dt);
    //   Serial.print(">dt:");
    //  Serial.print(dt);
    //    Serial.print("\n");
   this->update_bot_odom(dt);
    // }
}

void Kinematics::kinematic_inverse(float linear_speed, float angular_speed, float &out_wheel1_speed, float &out_wheel2_speed)
{
    out_wheel1_speed =
        linear_speed - (angular_speed * wheel_distance_) / 2.0;
    out_wheel2_speed =
        linear_speed + (angular_speed * wheel_distance_) / 2.0;
}


void Kinematics::kinematic_forward(float wheel1_speed, float wheel2_speed,float wheel3_speed, float wheel4_speed, float &linear_speed, float &angular_speed)
{
    linear_speed = (wheel1_speed + wheel2_speed+wheel3_speed + wheel4_speed) / 4.0;   // 计算线速度
   
    angular_speed =(-(wheel1_speed +wheel2_speed-wheel3_speed - wheel4_speed) / 2)/wheel_distance_;   // 计算角速度 
    gryo_Z=angular_speed;
    if(abs(angular_speed)<0.001)
    {
        angular_speed=0;
    }
// Serial.println("linear_x:");
// Serial.println(linear_speed);
// Serial.println("angular_speed:");
// Serial.println(angular_speed);
// Serial.println("angular_speed:");
}
void Kinematics::kinematic_forward(float wheel1_speed, float wheel2_speed, float &linear_speed, float &angular_speed)
{
    linear_speed = (wheel1_speed + wheel2_speed) / 2.0;   // 计算线速度
    angular_speed = (wheel2_speed - wheel1_speed) / wheel_distance_;   // 计算角速度
}

float Kinematics::motor_speed(uint8_t id)
{
    return motor_param_[id].motor_speed; // 返回指定id的轮子速度
} 

void Kinematics::update_bot_odom(uint32_t dt)
{
    static float linear_speed, angular_speed;
    float dt_s = (float)(dt / 1000) / 1000;

    this->kinematic_forward(motor_param_[0].motor_speed, motor_param_[1].motor_speed, linear_speed, angular_speed);

    odom_.angular_speed = angular_speed;
    odom_.linear_speed = linear_speed / 1000; // /1000（mm/s 转 m/s）

    odom_.yaw += odom_.angular_speed * dt_s;

    Kinematics::TransAngleInPI(odom_.yaw, odom_.yaw);
    

    /*更新x和y轴上移动的距离*/
    float delta_distance = odom_.linear_speed * dt_s; // 单位m
    odom_.x += delta_distance * std::cos(odom_.yaw);
    odom_.y += delta_distance * std::sin(odom_.yaw);

}

void Kinematics::update_bot_odom(uint32_t dt,float speed1,float speed2,float speed3,float speed4)
{
     float linearspeed, angularspeed;
    float dt_s = (float)(dt / 1000.0)/1000.0 ;
// Serial.printf("update motor ticks %f: %f %f %f %f\n", dt_s  ,speed1, speed2, speed3, speed4);   

    this->kinematic_forward(speed1, speed2, speed3,speed4,linearspeed, angularspeed);
   
    odom_.angular_speed = angularspeed;
    odom_.linear_speed = linearspeed / 1000.0; // /1000（mm/s 转 m/s）

    odom_.yaw += odom_.angular_speed * dt_s;
    //  Serial.println(" odom_.yaw :");
   Angle_z=odom_.yaw;
    // Serial.println( odom_.yaw );
    //  Serial.println( odom_.angular_speed *100);
    //   Serial.println( dt_s*100);

    Kinematics::TransAngleInPI(odom_.yaw, odom_.yaw);
    
    
    /*更新x和y轴上移动的距离*/
    float delta_distance = odom_.linear_speed * dt_s; // 单位m
    odom_.x += delta_distance * std::cos(odom_.yaw);
    odom_.y += delta_distance * std::sin(odom_.yaw);

}

void Kinematics::TransAngleInPI(float angle, float &out_angle)
{
    if (angle > PI)
    {
        out_angle -= 2 * PI;
    }
    else if (angle < -PI)
    {
        out_angle += 2 * PI;
    }
}

void Kinematics::Euler2Quaternion(float roll, float pitch, float yaw, quaternion_t &q)
{
   // 传入机器人的欧拉角 roll、pitch 和 yaw。
   // 计算欧拉角的 sin 和 cos 值，分别保存在 cr、sr、cy、sy、cp、sp 六个变量中    
   // https://blog.csdn.net/xiaoma_bk/article/details/79082629
   double cr = cos(roll * 0.5);
   double sr = sin(roll * 0.5);
   double cy = cos(yaw * 0.5);
   double sy = sin(yaw * 0.5);
   double cp = cos(pitch * 0.5);
   double sp = sin(pitch * 0.5);
   // 计算出四元数的四个分量 q.w、q.x、q.y、q.z
    q.w = cy * cp * cr + sy * sp * sr;
    q.x = cy * cp * sr - sy * sp * cr;
    q.y = sy * cp * sr + cy * sp * cr;
    q.z = sy * cp * cr - cy * sp * sr;
}

odom_t &Kinematics::odom()
{
   // 调用 Euler2Quaternion 函数，将机器人的欧拉角 yaw 转换为四元数 quaternion。
   Kinematics::Euler2Quaternion(0, 0, odom_.yaw, odom_.quaternion);
    return odom_;
}

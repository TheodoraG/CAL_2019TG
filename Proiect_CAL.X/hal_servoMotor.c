#include "hal_servoMotor.h"
#include "general_types.h"
#include "mcal_pwm.h"

void setServo(T_F16 wheelAngle){
   // int minAngle = 10;
    //int maxAngle = 170;
    T_F16 dutyProc = 0;
    
    if(wheelAngle > MINANGLE && wheelAngle< MAXANGLE){
        if(wheelAngle < 65)
            wheelAngle = 65;
        if(wheelAngle > 115)
            wheelAngle = 115;
        
        dutyProc = 4 + (wheelAngle - 10)*GAIN;
        PWM1_vSetDuty(dutyProc,1);
    }
}

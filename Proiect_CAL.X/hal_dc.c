#include "hal_dc.h"
#include "mcal_gpio.h"
#include "mcal_pwm.h"


  void HAL_vDcMotorInit()
  {
       PWM1_vInit();
       GPIO_u8SetPortPin(PORT_A, 9,0,0);
  }

  void HAL_vSetMotorDir(BOOL Dir)
  {
    //T_S16 i = 0;
  //  while(i<100){
  //      i++;
  //      if(i %2 == 0){
             GPIO_u8WritePortPin(PORT_A,9,Dir);
   //     }
   //     else{
  //          GPIO_u8WritePortPin(PORT_A,9,1);
   //     }
   //     }

  }
  
    void HAL_vSetMotorSpeed(T_F16 speed)
    {
      PWM1_vSetDuty(speed,2);
  
    }
    

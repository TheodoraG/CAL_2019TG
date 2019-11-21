#include "hal_dc.h"
#include "mcal_gpio.h"
#include "mcal_pwm.h"


  void HAL_vDcMotorInit()
  {
       PWM1_vInit();
       GPIO_u8SetPortPin(PORT_A, 9,0,0);
  }

  void HAL_vSetMotorDir()
  {
    T_S16 i = 0;
    while(i<100){
        i++;
        if(i %2 == 0){
             GPIO_u8WritePortPin(PORT_A,9,0);
        }
        else{
            GPIO_u8WritePortPin(PORT_A,9,1);
        }
        }

  }
  
    void HAL_vSetMotorSpeed()
    {
      PWM1_vSetDuty(50,2);
  
    }
    

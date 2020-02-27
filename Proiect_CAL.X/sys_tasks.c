/* 
 * File:   sys_tasks.h
 * Author: Cristian T. A.
 *
 * Created on August 17, 2018, 1:26 PM
 */

#include "general.h"
#include "sys_tasks.h"
#include "fTimer.h"
#include "mcal_init.h"
#include "asw_com.h"
#include "asw_move.h"
#include "asw_lineFoll.h"
#include "asw_FollowDir.h"
#include "asw_energy.h"
T_U16 a = 0;

void TASK_Inits()
{
    MCAL_vInit();
    init();
    GPIO_u8SetPortPin(PORT_A, 10, DIGITAL ,OUTPUT);
}

void TASK_1ms()
{
    
}

void TASK_5ms()
{

}

void TASK_10ms()
{   
    //move();
}

void TASK_100ms()
{ 
    if(bObserv){
        //aprind_led
        GPIO_u8WritePortPin(PORT_A, 10, 1);
    }
    else{
        //sting
        GPIO_u8WritePortPin(PORT_A, 10, 0);
    }
    // funcTimer();
}

void TASK_500ms()
{ 

}

void TASK_1000ms()
{
    a = !a;
   
  /*  if(asw_getLineFollowerVal())
               move(50);
    else
       move(0);
    
    */
   followDir();
   T_U8 energyLevel = asw_showEnergy();
   //printf("Energy %c:",energyLevel) ;   
   /*
   if(energyLevel < 100 && energyLevel >= 20){
    GPIO_u8WritePortPin(PORT_A, 10, 1);
    GPIO_u8WritePortPin(PORT_A, 10, 0);
   }
   else
       if(energyLevel < 20 && energyLevel >= 10){
           GPIO_u8WritePortPin(PORT_A, 10, 1);
           GPIO_u8WritePortPin(PORT_A, 10, 0);
           GPIO_u8WritePortPin(PORT_A, 10, 1);
           GPIO_u8WritePortPin(PORT_A, 10, 0);
     }
       else if(energyLevel < 10 && energyLevel >= 0){
           GPIO_u8WritePortPin(PORT_A, 10, 1);
           GPIO_u8WritePortPin(PORT_A, 10, 0);
           GPIO_u8WritePortPin(PORT_A, 10, 1);
           GPIO_u8WritePortPin(PORT_A, 10, 0);
           GPIO_u8WritePortPin(PORT_A, 10, 1);
           GPIO_u8WritePortPin(PORT_A, 10, 0);
       }
     */
    //GPIO_u8WritePortPin(PORT_A, 10, a);
   
}
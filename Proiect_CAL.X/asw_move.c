#include "asw_move.h"
//#include "rte.h"

void init()
{
     RTE_vInit();   
}


void move(T_F16 speed2, BOOL dir)
{
    RTE_vSetMotorDir(dir);
    RTE_vSetMotorSpeed(speed2);
  /*  
    RTE_vsetServo(150);
    RTE_vsetServo(60);
    RTE_vsetServo(110);
    RTE_vsetServo(80);
   * */
    
}

void move_forward(T_F16 speed2)
{
    RTE_vSetMotorDir(0);
    RTE_vSetMotorSpeed(speed2);
}
/*void move_back(T_F16 speed2)
{
    
}*/
void move_direction(T_F16 angle)
{
    RTE_vSetMotorDir(0);
    RTE_vSetMotorSpeed(30);
    RTE_vsetServo(angle);
    
}

#include "asw_move.h"
#include "rte.h"

void init()
{
     RTE_vInit();   
}


void move()
{
    RTE_vSetMotorDir();
    RTE_vSetMotorSpeed();
    RTE_vsetServo(150);
    RTE_vsetServo(60);
    RTE_vsetServo(110);
    RTE_vsetServo(80);
}

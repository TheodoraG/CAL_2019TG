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
}

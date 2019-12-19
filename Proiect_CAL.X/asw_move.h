/* 
 * File:   asw_move.h
 * Author: student
 *
 * Created on November 21, 2019, 6:21 PM
 */

#ifndef ASW_MOVE_H
#define	ASW_MOVE_H
#include "rte.h"
#ifdef	__cplusplus
extern "C" {
#endif


void move(T_F16 speed2, BOOL dir);
void move_forward(T_F16 speed2);
//void move_back(T_F16 speed2);
void move_direction(T_F16 angle);
//void move_right(T_F16 angle);


void init();

#ifdef	__cplusplus
}
#endif

#endif	/* ASW_MOVE_H */


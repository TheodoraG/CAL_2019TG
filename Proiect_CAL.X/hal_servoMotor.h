/* 
 * File:   hal_servoMotor.h
 * Author: student
 *
 * Created on November 28, 2019, 6:25 PM
 */

#ifndef HAL_SERVOMOTOR_H
#define	HAL_SERVOMOTOR_H
#include "general_types.h"

#define MINANGLE 10
#define MAXANGLE 170
#define GAIN 0.04375

void setServo(T_F16 wheelAngle);

#endif	/* HAL_SERVOMOTOR_H */


/* 
 * File:   rte.h
 * Author: student
 *
 * Created on November 21, 2019, 6:18 PM
 */

#ifndef RTE_H
#define	RTE_H

#include "hal_dc.h"
#include "hal_servoMotor.h"

//redenumire prototip functie
#define RTE_vInit HAL_vDcMotorInit
#define RTE_vSetMotorDir HAL_vSetMotorDir
#define RTE_vSetMotorSpeed HAL_vSetMotorSpeed
#define RTE_vsetServo setServo
#define RTE_vSetDirLineFollower vSetDirLineFollower
#define RTE_vWriteLineFollower vWriteLineFollower
#define RTE_u8GetValueLineFollower u8GetValueLineFollower
#define RTE_showEnergy showEnergy


#endif	/* RTE_H */


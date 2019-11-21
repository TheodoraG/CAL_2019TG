/* 
 * File:   hal_dc.h
 * Author: student
 *
 * Created on November 21, 2019, 6:17 PM
 */

#ifndef HAL_DC_H
#define	HAL_DC_H

#ifdef	__cplusplus
extern "C" {
#endif

  void  HAL_vSetMotorDir();
  void HAL_vDcMotorInit();
  void HAL_vSetMotorSpeed();


#ifdef	__cplusplus
}
#endif

#endif	/* HAL_DC_H */


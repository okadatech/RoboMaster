/*
 * gimbal_fdb.h
 *
 *  Created on: 2019/03/15
 *      Author: User
 */

#ifndef MOTOR_FDB_H_
#define MOTOR_FDB_H_

#include "stm32f4xx_hal.h"
#include "main.h"

typedef struct
{
  int16_t angle;
  int16_t rpm;
  int16_t torque;
  short temp;
  float omg;
} motor_fdb;

#endif /* MOTOR_FDB_H_ */

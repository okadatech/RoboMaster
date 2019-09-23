/*
 * wheel.h
 *
 *  Created on: 2019/03/12
 *      Author: User
 */

#ifndef WHEEL_H_
#define WHEEL_H_

typedef struct
{
  int16_t angle;
  int16_t rpm;
  int16_t torque;
  short temp;
  float omg;
} wheel_fdb_t;

#endif /* WHEEL_H_ */

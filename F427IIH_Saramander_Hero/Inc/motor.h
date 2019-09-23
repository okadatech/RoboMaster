/*
 * motor.h
 *
 *  Created on: 2019/03/12
 *      Author: User
 */

#ifndef MOTOR_H_
#define MOTOR_H_

#include "stm32f4xx_hal.h"
#include "can.h"

void driveWheel(int16_t *u);
void driveGimbalMotors(int16_t *u);

#endif /* MOTOR_H_ */

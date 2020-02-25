/*
 * Kondo_servo.h
 *
 *  Created on: Feb 25, 2020
 *      Author: okadatech
 */

#ifndef SRC_KONDO_SERVO_H_
#define SRC_KONDO_SERVO_H_

#include "management.h"

int Synchronize(uint8_t *txBuff, size_t txLength, uint8_t *rxBuff, size_t rxLength);
int ics_set_pos(uint8_t id,unsigned short pos);
int ics_set_st(uint8_t id,uint8_t stData);
int ics_set_sp(uint8_t id,uint8_t spData);


#endif /* SRC_KONDO_SERVO_H_ */

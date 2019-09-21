/*
 * remote_controller.h
 *
 *  Created on: 2019/03/09
 *      Author: User
 */

#ifndef REMOTE_CONTROLLER_H_
#define REMOTE_CONTROLLER_H_

struct rc_info_t
{
  /* rocker channel information */
  int16_t ch1;
  int16_t ch2;
  int16_t ch3;
  int16_t ch4;

  /* left and right lever information */
  uint8_t sw1;
  uint8_t sw2;
};

#endif /* REMOTE_CONTROLLER_H_ */

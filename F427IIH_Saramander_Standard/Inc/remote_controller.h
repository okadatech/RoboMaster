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
  //left dialog
  int16_t ch5;

  /* left and right lever information */
  uint8_t sw1;
  uint8_t sw2;

  //from PC
  int16_t mouse_x;
  int16_t mouse_y;
  int16_t mouse_z;
  int16_t mouse_press_l;
  int16_t mouse_press_r;
  int16_t key_v;
  int8_t key_W;
  int8_t key_A;
  int8_t key_S;
  int8_t key_D;
  int8_t key_Q;
  int8_t key_E;
  int8_t key_Shift;
  int8_t key_Ctrl;


};

#endif /* REMOTE_CONTROLLER_H_ */

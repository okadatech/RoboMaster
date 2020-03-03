/*
 * management.h
 *
 *  Created on: Feb 25, 2020
 *      Author: okadatech
 */

#ifndef SRC_MANAGEMENT_H_
#define SRC_MANAGEMENT_H_

#include "main.h"
#include "can.h"
#include "dma.h"
#include "tim.h"
#include "usart.h"
#include "gpio.h"
#include "math.h"
#include "motor_fdb.h"
#include "pid.h"
#include "motor.h"
#include "referee_serial_port_protocol.h"
#include "Kondo_servo.h"

#include "stdio.h"
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

TIM_Encoder_InitTypeDef sConfig;
TIM_MasterConfigTypeDef sMasterConfig ;
TIM_OC_InitTypeDef sConfigOC;
TIM_BreakDeadTimeConfigTypeDef sBreakDeadTimeConfig ;
CAN_RxHeaderTypeDef canRxHeader;

typedef struct
{
  int16_t angle;
  int16_t rpm;
  int16_t torque;
  short temp;
  float omg;
} wheel_fdb_t;
struct mecanum
{
  float  wheel_rpm[4];
};
struct mecanum mecanum;
_pid_t wheelPID[4], loadPID;
struct mecanum_motor_fdb
{
  float total_ecd;
  float speed_rpm;
};
wheel_fdb_t wheelFdb[4];
motor_fdb gimbalYawFdb, gimbalPitchFdb, loadMotorFdb;

int target_X,target_Y,cnt_tartget;
int target_place;
float DBUFF[32];
float torque_sum;

uint8_t Rxbuf_jetson[7],data_Jetson[6],temp_data_Jetson,jetson_connect;
uint8_t target_yaw_temp,target_pit_temp,now_pit,now_yaw,target_yaw,target_pit;
uint8_t canRxData[8];
uint8_t fire;

#endif /* SRC_MANAGEMENT_H_ */

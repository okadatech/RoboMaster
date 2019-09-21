/*
 * pid.c
 *
 *  Created on: 2019/03/12
 *      Author: User
 */
#include "pid.h"

float pidExecute(_pid_t *pid) {
	float u = 0;
	pid->integralOut += pid->i * pid->error * (pid->t/1000.0f);
	if (pid->integralOutLimit < pid->integralOut) pid->integralOut = pid->integralOutLimit;
	else if (pid->integralOut < -pid->integralOutLimit) pid->integralOut = -pid->integralOutLimit;
	pid->differentialFilter = pid->differentialFilter * pid->differentialFilterRate + (pid->d * (pid->error - pid->lastError)*(1000.0f/pid->t)) * (1 - pid->differentialFilterRate);
	u = pid->p * pid->error + pid->integralOut + pid->differentialFilter;
	if (pid->outLimit < u) u = pid->outLimit;
	else if (u < -pid->outLimit)u = -pid->outLimit;
	pid->lastError = pid->error;
	return u;
}

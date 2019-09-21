/*
 * pid.h
 *
 *  Created on: 2019/03/12
 *      Author: User
 */

#ifndef PID_H_
#define PID_H_

typedef struct {
	/***parameter***/
	float t;	//time cycle[ms]

	float p;	//gain p[META]
	float i;	//gain i[META]
	float d;	//gain d[META]

	float outLimit;	//[META]
	float integralOutLimit;	//[META]
	float differentialFilterRate;	//[%]0~1
	/***parameter***/

	/***calculate***/
	float integralOut;	//[META]
	float lastError;	//[META]
	float differentialFilter;	//[META]
	/***calculate***/

	/***input***/
	float error;	//[META]
	/***input***/
} _pid_t;

//calculate output value from error
float pidExecute(_pid_t *pid);

#endif /* PID_H_ */

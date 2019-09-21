/*
 * disp.h
 *
 *  Created on: 2019/03/09
 *      Author: User
 */

#ifndef DISP_H_
#define DISP_H_
#include "stm32f4xx_hal.h"
#include "main.h"
#include<math.h>

UART_HandleTypeDef *huartx;

void setDispUartHandler(UART_HandleTypeDef *h) {
	huartx = h;
}

//SCI1：データ送信
void txd(unsigned char D){
	HAL_UART_Transmit(huartx, &D, 1, 0xffff);
	return;
}

//SCI1：数値一桁をアスキーコードに変換し送信
void txvalue0(unsigned char D){
	if(D>=10)txd(0x3F);
	D = D+48;
	txd(D);
	HAL_Delay(1);
	return;
}

//SCI1：DISP改行
void dnl(){
	txd(0x0D);
	return;
}

//SCI1：文字列送信
void string(char *TXDATA){
	txd(0x20);
	while(*TXDATA != '\0'){
		txd(*TXDATA);
		TXDATA++;
	}
	return;
}

//小数可disp(表示する変数, 精度(表示する桁数))
int advancedDisp(double opr, int pre){
	unsigned char digitNum[15], i;
	double scanningDigit = 10000.0;
	if(100000 < opr || opr < -100000 || 15 < pre)return -1;
	txd(0x20);
	if(opr < 0){
		txd(0x2D);//マイナス符号送信
		opr *= -1;
	}
	while(((opr/scanningDigit)<1) && (scanningDigit != 1))scanningDigit /= 10.0;
	for(i=0;i<pre;i++){
		if(scanningDigit == 0.1)txd(0x2E);//小数点送信
		digitNum[i] = opr/scanningDigit;
		opr -= digitNum[i]*scanningDigit;
		txvalue0(digitNum[i]);//1桁数値送信関数(digitNum[i]);
		scanningDigit /= 10.0;
	}
	while(1 <= scanningDigit){
		txvalue0(0);
		scanningDigit /= 10.0;
	}
	return 0;
}

void binDisp(uint8_t *buff, int len) {
	int i,ii;
	for (i = 0; i < len; i++) {
		uint8_t mask = 0x80;
		txd(0x20);
		for (ii = 0; ii < 8; ii++) {
			txvalue0(!!(buff[i] & (mask >> ii)));
		}
	}
	return;
}

#endif /* DISP_H_ */

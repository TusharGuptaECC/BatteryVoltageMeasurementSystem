#ifndef _SONALKUNJ_LCD_16x2_H_
#define _SONALKUNJ_LCD_16x2_H_

// Configuring LCD 16x2 into 8-bit mode
/*
	PIN CONNECTIONS ON ARDUINO
	RS - PORT_B_pin_2
	R/W - PORT_B_pin_1
	E - PORT_B_pin_0
	D7 - PORT_D_pin_7
	D6 - PORT_D_pin_6
	D5 - PORT_D_pin_5
	D4 - PORT_D_pin_4
	D3 - PORT_D_pin_3
	D2 - PORT_D_pin_2
	D1 - PORT_D_pin_1
	D0 - PORT_D_pin_0
*/

#include<avr/io.h>
#include<util/delay.h>

void sendCmd(unsigned char, unsigned char);
void sendData(unsigned char, unsigned char);
void initLcd(unsigned char);
void print(unsigned char *message);
void nextLine(void);
//#endif

#endif

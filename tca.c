/*
 * tca.c
 *
 * Created: 20.04.2023 11:36:17
 *  Author: jpvik
 */ 

#include <avr/io.h>
#include "board.h"
#include <util/delay.h>
#include <stdio.h>

uint16_t ServoVal_LNCH = -28000;
uint16_t ServoVal_UD = -28000;
uint16_t ServoVal_LR = -28000;

void TCA_init(void)  // PWM
{
	TCA0.SINGLE.PER = 39999;       // top value
	TCA0.SINGLE.CTRLA |= (1<<0) | TCA_SINGLE_CLKSEL_DIV2_gc;    // enable PER with presc
	TCA0.SINGLE.CTRLB |= 0x3 | TCA_SINGLE_CMP0EN_bm | TCA_SINGLE_CMP1EN_bm | TCA_SINGLE_CMP2EN_bm;
}

void Servo()
{	
	PORTMUX.TCAROUTEA = PORTMUX_TCA0_PORTF_gc; // Servo PORT
	
	while ((BUT_POS_6 & BUT_PORT.IN) == 0) // If LED is green
	{

			(LED_POS_0 & LED_PORT.OUT) == 0; // Green LED on
	
		if ((BUT_POS_5 & BUT_PORT.IN) == 0) // If Launch-button pressed down
			ServoVal_LNCH = ServoVal_LNCH + 50; 
			_delay_ms(5);
			TCA0.SINGLE.CMP0BUF = ServoVal_LNCH;
	}
	
	while (!(BUT_POS_6 & BUT_PORT.IN) == 0) //If LED is red
	{
		(LED_POS_1 & LED_PORT.OUT) == 0; // Red LED on

		if ((BUT_POS_1 & BUT_PORT.IN) == 0) // If UP-button pressed down
			ServoVal_UD = ServoVal_UD + 50;
			_delay_ms(5);
			TCA0.SINGLE.CMP1BUF = ServoVal_UD;
	
		if ((BUT_POS_3 & BUT_PORT.IN) == 0) // If DOWN-button pressed down
			ServoVal_UD = ServoVal_UD - 50;
			_delay_ms(5);
			TCA0.SINGLE.CMP1BUF = ServoVal_UD;
	}
	
}


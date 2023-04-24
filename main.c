/*
 * FWL.c
 *
 * Created: 18.04.2023 14:32:37
 * Author : jpvik
 */ 

#define F_CPU 4000000UL
#include <avr/io.h>
#include <util/delay.h>

#include <avr/interrupt.h>
#include "board.h"
#include "tca.h"


int main(void)

LED_PORT.DIRSET = LED_POS_0 | LED_POS_1 // Set LED as 

TRANSISTOR_PORT.DIRSET = TRANSISTOR_Q1_POS | TRANSISTOR_Q2_POS // Set transistors as 

BUT_PORT.DIRCLR = BUT_POS_1 | BUT_POS_2 | BUT_POS_3 | BUT_POS_4 | BUT_POS_5 | BUT_POS_6

BUT_PORT.BUT_POS_1CTRL |= PORT_PULLUPEN_bm //UP-button
BUT_PORT.BUT_POS_2CTRL |= PORT_PULLUPEN_bm //RIGHT-button
BUT_PORT.BUT_POS_3CTRL |= PORT_PULLUPEN_bm //DOWN-button
BUT_PORT.BUT_POS_4CTRL |= PORT_PULLUPEN_bm //LEFT-button
BUT_PORT.BUT_POS_5CTRL |= PORT_PULLUPEN_bm //LAUNCH-button
BUT_PORT.BUT_POS_6CTRL |= PORT_PULLUPEN_bm //TOGGLE-switch

uint16_t ServoVal_LNCH = -28000; //Start value for Launch PWM
uint16_t ServoVal_UD = -28000; //Start value for UP or DOWN PWM


void TCA_init() //TCA-initialization 

{
    // 
    while (1) 
    {
		Servo() // Run Servo function
		;
    }
}



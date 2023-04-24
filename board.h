/*
 * board.h
 *
 * Created: 18.04.2023 14:35:38
 *  Author: jpvik
 */ 


#ifndef BOARD_H_
#define BOARD_H_

#define F_CPU 4000000UL

/* Component positions*/

#define BUT_PORT PORTB
#define BUT_POS_1 2 // UP-button
#define BUT_POS_2 0 // RIGHT-button
#define BUT_POS_3 1 // DOWN-button
#define BUT_POS_4 3 // LEFT-button
#define BUT_POS_5 5 // LAUNCH-button
#define BUT_POS_6 4 // TOGGLE-button

#define LED_PORT PORTA
#define LED_POS_0 3 // GRØNN LED 
#define LED_POS_1 2 // RØD LED

#define TRANSISTOR_PORT PORTF
#define TRANSISTOR_Q1_POS 2 // LAUNCH-servo
#define TRANSISTOR_Q2_POS 3 // RAMP-servo


#endif /* BOARD_H_ */
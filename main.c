/*
 * UARTinterrupt.cpp
 * Author : Tibor Rojko
 */ 

#include <avr/io.h>
#define F_CPU 16000000
#include <util/delay.h>
#include <avr/interrupt.h>
#include "USART.h"

ISR(USART_RX_vect);

char msg[10];
uint8_t charsize = 50;

int main(void)
{
	DDRB |= (1 << PINB5);

    initUSART();
    sei();

	while (1) 
    {
		//Basicly, do nothing...
		PORTB ^= (1 << PINB5);		//Toggle Port B Pin 5, Arduino pin13, with Built-In LED
		_delay_ms(1000);		//delay 1 sec
    }
}

ISR(USART_RX_vect)
{
	readString(msg, charsize);
	printEcho(msg);
}

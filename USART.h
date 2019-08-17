/*
 * Simple USART library
 * USART.h
 * Author: Tibor Rojko
 */ 


#ifndef USART_H_
#define USART_H_

void initUSART(void);
void printString(char myString[]);
void readString(char myString[], uint8_t maxLength);
void printEcho(char msg[]);

#endif /* USART_H_ */
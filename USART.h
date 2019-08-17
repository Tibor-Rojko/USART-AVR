/*
 * Simple USART library
 * USART.h
 * Author: Tibor Rojko
 */ 


#ifndef USART_H_
#define USART_H_

void initUSART(void);                                     //Initialize USART module
void printString(char myString[]);                        //Send string to serial
void readString(char myString[], uint8_t maxLength);      //Read string from serial
void printEcho(char msg[]);                               //temp

#endif /* USART_H_ */

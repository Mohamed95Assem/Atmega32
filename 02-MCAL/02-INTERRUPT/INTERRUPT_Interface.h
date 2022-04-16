/*
 * #include "BIT_MATH.h"
 * #include "STD_TYPES.h"
 *
 *  Created on: Apr 21, 2021
 *      Author: Assem
 */
#ifndef INTERRUPT_INTERFACE_H_
#define INTERRUPT_INTERFACE_H_

#include "avr/interrupt.h"

/*Interrupt Vectors in ATmega32*/
#define INT0_vect			_VECTOR(1)
#define _VECTOR(N) __vector_ ## N

/*Interrupt registers*/
#define INTERRUPT_Global SREG
#define INTERRUPT_Register GICR
#define INTERRUPT_Flag GIFR
#define INTERRUPT_Control MCUCR

/*The External Interrupt 0*/
#define ISC00 0
#define ISC01 1
/*The External Interrupt 1*/
#define ISC10 2
#define ISC11 3

#define INTERRUPT0 6		/*External Interrupt Request 0 Enable*/
#define INTERRUPT1 7		/*External Interrupt Request 1 Enable*/
#define INTERRUPT2 5		/*External Interrupt Request 2 Enable*/

#define INTERRUPT_FLAG0 6	/*External Interrupt Flag 0*/
#define INTERRUPT_FLAG1 7	/*External Interrupt Flag 1*/
#define INTERRUPT_FLAG2 5	/*External Interrupt Flag 2*/

#endif /* INTERRUPT_INTERFACE_H_ */

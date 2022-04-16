/*
 * #include "BIT_MATH.h"
 * #include "STD_TYPES.h"
 *
 *  Created on: Apr 21, 2021
 *      Author: Assem
 */
#include "BIT_MATH.h"
#include "STD_TYPES.h"

#ifndef INTERRUPT_PRIVATE_H_
#define INTERRUPT_PRIVATE_H_

/* Interrupt registers */
#define MCUCR 	(*((volatile u8 *) 0x55))		/* MCU Control Register */
#define GICR 	(*((volatile u8 *) 0x5B))		/* General Interrupt Control Register*/
#define GIFR 	(*((volatile u8 *) 0x5A))		/* General Interrupt Flag */
#define SREG 	(*((volatile u8 *) 0x5F))		/* Status Register */

#endif /* INTERRUPT_PRIVATE_H_ */

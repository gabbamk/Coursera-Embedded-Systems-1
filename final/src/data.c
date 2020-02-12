/**
 * @file data.c
 * @brief Abstraction of conversion operations
 *
 * This implementation file provides two functions,
 * an integer to ascii conversion that would allow us
 * to change the numerical base for an input integer
 * and viceversa.
 *
 * @author Gabriel Cayón
 * @date February 8 2020
 *
 */


#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include "memory.h"
#include "platform.h"
#include "data.h"

uint8_t my_itoa(int32_t data, uint8_t * ptr, uint32_t base){

	int32_t carryover;
	char remainder;
	uint8_t i = 0;

	carryover = data;

	if(carryover<0)
	carryover=carryover*(-1);					
	
	if(base>16){

		PRINTF("Choose a base lower than 16");

		return 0;
	}


	do{
		
		remainder = carryover%base;
		
		if(remainder<9)
			remainder = remainder + 48;
		else
			remainder = remainder + 55;

		*(ptr + i) = remainder;

		i++;
		
		carryover = carryover/base;

	}while(carryover!=0);

	if(data < 0){
		*(ptr + i) = '-';
		i++;
	}

	my_reverse(ptr, i);

	*(ptr + i) = 0;

	return (i+1);

}

int32_t my_atoi(uint8_t * ptr, uint8_t digits, uint32_t base){

	uint8_t i = 0;
	uint8_t asciiPointed=0;
	uint32_t intPointed=0;
	uint32_t totalSum=0;

	if(*(ptr) == '-'){
		i++;
		digits = digits-1;										 /*Manage a negative char array*/
	}
	
	if(base>16){

		PRINTF("Choose a base lower than 16");

		return 0;
	}

	digits = digits-1;											/*Ignore the ending char*/

	while(i<(digits-2)){										/*Go through the numers in ASCII*/
		asciiPointed = * (ptr+i);							    /*digits goes through the string */
																/*without the minus sign or terminator char*/								
		if(asciiPointed<64)
			asciiPointed = asciiPointed - 48;
		else
			asciiPointed = asciiPointed - 55;


		intPointed = asciiPointed * my_pow(base,(digits-2-i));

		totalSum=totalSum+intPointed;

		i++;

	};

	if(*(ptr) == '-')
	totalSum = totalSum * (-1);

	return totalSum;

}

uint32_t my_pow(uint8_t number, uint8_t power){
	uint8_t i = 0;
	uint32_t output = 1;

	for(i=0; i<power; i++){
		output = output*number;
	}

	return output;
}
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

uint8_t my_itoa(int32_t data, uint8_t * ptr, uint32_t base){

	int32_t carryover;
	char remainder;
	uint8_t i = 0;

	carryover = data;
	
	if(base<16)
	{
		PRINTF("Choose a base lower than 16");
		
		return NULL;
	}

	do{
		
		remainder = carryover%base;
		
		if(reminder<9)
			remainder = remainder + 48;
		else
			remainder = remainder + 55;

		*(ptr + i) = remainder

		i++;
		
		carryover = carryover/base;

	}while(carryover!=0)

	my_reverse(ptr, i);

	*(ptr + i  + 1) = NULL;

	return (i+1);

}

uint8_t my_atoi(uint8_t * ptr, uint8_t digits, uint32_t base){
	
}
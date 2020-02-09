/**
 * @file data.h
 * @brief Abstraction of conversion operations
 *
 * This header file provides an abstraction of conversion operations
 *
 * @author Gabriel Cayón
 * @date February 8 2020
 *
 */

#include <stdint.h>
#include <stdlib.h>

/**
 * @brief Changes an input integer into a 2-16 base and saves the result in ASCII characters
 *
 * Given an int, divide it by the 'base'. The remainder gets saved in memory. 
 *
 * @param ptr Pointer to data array
 * @param index Index into pointer array to set value
 * @param value value to write the the locaiton
 *
 * @return unsigned 8 bit int with the length of the char array.
 */
uint8_t my_itoa(int32_t data, uint8_t * ptr, uint32_t base);

/**
 * @brief Sets a value of a data array 
 *
 * Given a pointer to a char data set, this will set a provided
 * index into that data set to the value provided.
 *
 * @param ptr Pointer to data array
 * @param index Index into pointer array to set value
 * @param value value to write the the locaiton
 *
 * @return void.
 */
uint8_t my_atoi(uint8_t * ptr, uint8_t digits, uint32_t base);
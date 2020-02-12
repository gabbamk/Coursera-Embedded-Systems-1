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
 * Given an int, divide it by the 'base'. The remainder gets changed into ASCII and saved in memory. 
 * Repeat until division is equal to zero.
 *
 * @param data Pointer to data array
 * @param ptr Index into pointer array to set value
 * @param base value to write the the locaiton
 *
 * @return unsigned 8 bit int with the length of the char array.
 */
uint8_t my_itoa(int32_t data, uint8_t * ptr, uint32_t base);

/**
 * @brief Changes ASCII characters with 2-16 base into output as base 10 integer. 
 *
 * Given an array of ASCII, change the numbers from char to integer and multiply
 *
 * @param ptr Pointer to data array
 * @param digits Number of digits in data array
 * @param base What numeric base the number array is in
 *
 * @return unsigned 32 bit int converted value.
 */
int32_t my_atoi(uint8_t * ptr, uint8_t digits, uint32_t base);

/**
 * @brief Simple power function.
 *
 * Raises a number to the power with a for loop.
 *
 * @param number Base number
 * @param power Power to which raise it to
 *
 * @return unsigned 32 bit int with the result.
 */
uint32_t my_pow(uint8_t number, uint8_t power);
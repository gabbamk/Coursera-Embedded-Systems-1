/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file memory.c
 * @brief Abstraction of memory read and write operations
 *
 * This implementation file provides an abstraction of reading and
 * writing to memory via function calls. There is also a globally
 * allocated buffer array used for manipulation.
 *
 * @author Alex Fosdick
 * @date April 1 2017
 *
 */
#include "memory.h"

/***********************************************************
 Function Definitions
***********************************************************/
void set_value(char * ptr, unsigned int index, char value){
  ptr[index] = value;
}

void clear_value(char * ptr, unsigned int index){
  set_value(ptr, index, 0);
}

char get_value(char * ptr, unsigned int index){
  return ptr[index];
}

void set_all(char * ptr, char value, unsigned int size){
  unsigned int i;
  for(i = 0; i < size; i++) {
    set_value(ptr, i, value);
  }
}

void clear_all(char * ptr, unsigned int size){
  set_all(ptr, 0, size);
}


uint8_t * my_memmove(uint8_t * src, uint8_t * dst, size_t length){
	/*
	Take two byte pointers and a length of bytes to move from the sources location to destination
	The behaviour should handle overlap of source and destination, copy should occur with no data corruption
	Using pointers
	Should return a pointer to destination (dst)
	*/
}

uint8_t * my_memcopy(uint8_t * src, uint8_t * dst, size_t length){
	/*
	Take 2 byte pointers and length of bytes to copy
	Overlap should still ocurr if theres overlap
	Using pointers
	Should return a pointer to the destination (dst)
	*/
}

uint8_t * my_memset(uint8_t * src, size_t length, uint8_t value){ /* size_t is a type used to represent the size of objects in bytes.
																  It used as a return type by the sizeof operator*/
	/*
	This should take a pointer to a source memory location and set all locations of that memory to a certain value
	Should not use set_all function
	Should return a pointer to src location
	*/
}

uint8_t * my_memzero(uint8_t * src, size_t length){ /* size_t is a type used to represent the size of objects in bytes.
																  It used as a return type by the sizeof operator*/
	/*
	This should take a pointer to a source memory location and set all locations of that memory to zero
	Should not use set_all function
	Should return a pointer to src location
	*/
}

uint8_t * my_reverse(uint8_t * src, size_t length){ /* size_t is a type used to represent the size of objects in bytes.
																  It used as a return type by the sizeof operator*/
	/*
	This should take a pointer to a memory location and length in bytes and reverse the order of all of the bytes
	Should not use set_all function
	Should return a pointer to src location
	Note: if the function is called and return is not used, compiler pops the result
	*/
}

int32_t * reserve_words(size_t length){
	/*
	This should take number of words to allocate in dynamic memory
	Using pointers
	Should return a pointer to memory if successful or null pointer if not successful
	*/
}

void free_words(int32_t * src){
	/*
	Should free a dynamic memory allocation by providing the pointer src to the function
	Using pointers
	*/

}
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
 * @file main.c
 * @brief Main entry point to the Final Assessment
 *
 * This file contains the main code for the Final assesment. Students
 * are not to change any of the code, they are instead supposed to compile
 * these files with their makefile.
 *
 * @author Alex Fosdick
 * @date April 1 2017
 *
 */
#include "platform.h"
#include "memory.h"
#include "data.h"

#define MAX_LENGTH (10)
char buffer[MAX_LENGTH];

/* A pretty boring main file */
int main(void) {
  unsigned int i;
  char value;

  uint32_t value2;

  int32_t data = -3000;
  uint32_t base = 2;
  uint8_t * ptr;
  ptr=(uint8_t*) malloc(MAX_LENGTH*sizeof(uint8_t));

  /* Code below does some arbitrary memory Reads & writes */
  clear_all(buffer, MAX_LENGTH);
  set_all( ( buffer + 8 ), 43, 2); 
  set_value(buffer, 0, 0x61);
  value = get_value(buffer, 9);
  set_value(buffer, 9, (value + 0x27));
  set_value(buffer, 3, 0x37);
  set_value(buffer, 1, 88);
  set_value(buffer, 4, '2');
  value = get_value(buffer, 1);
  set_value(buffer, 2, 121);
  set_value(buffer, 7, (value - 12));
  set_value(buffer, 5, 0x5F);

  value = my_itoa(data, ptr, base);

  PRINTF("%d\n", value);

  for ( i = 0; i < value; i++ ){
    PRINTF("%c", ptr[i]);
  }
  PRINTF("\n");


  value2 = my_atoi(ptr, value, base);

  PRINTF("%i \n", value2);

  return 0;
}
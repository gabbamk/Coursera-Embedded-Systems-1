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
 * @file "stats.c"
 * @brief Main .c file for the stats exercise in the first module of the Introduction to Embedded Systems course
 *
 * Runs some statistics functions and prints the results.
 *
 * @author Gabriel Cayón
 * @date 29/01/2020
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  unsigned char mean;
  mean = find_mean(test, SIZE);
  printf("%d \n", mean);

}


void print_statistics(unsigned char* array,int arraySize){}

void print_array(unsigned char* array,int arraySize){}

unsigned char find_median(unsigned char* sortedArray,int arraySize){}

unsigned char find_mean(unsigned char* array,int arraySize){

	unsigned int sum=0;
	unsigned char result;

	for(int i=0;i<arraySize;i++)
	{
		sum+=array[i];
	}
	result = (sum/arraySize);
	return result;

}

unsigned char find_maximum(unsigned char* array,int arraySize){
    
    unsigned char maximum=0;
    
    for(int i=0;i<arraySize;i++)
    {
        if(array[i]>maximum)
        maximum=array[i];
    }
    return maximum;

}

unsigned char find_minimum(unsigned char* array,int arraySize){

	unsigned char minimum=255;
    
    for(int i=0;i<arraySize;i++)
    {
        if(array[i]<minimum)
        minimum = array[i];
    }
    return minimum;
}

unsigned char *sort_array(unsigned char* array,int arraySize){}
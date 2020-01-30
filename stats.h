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
 * @file stats.h
 * @brief Header file including the function definitions of the first week's assigment of the Coursera
 *		  Introduction to Embedded Systems by University of Colorado.
 *
 *
 *
 * @author Gabriel Armando Cayón Zúñiga
 * @date 29/01/2020
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */ 

/**
 * @brief Prints the statistics of an array including minimum, maximum, mean, and median. 
 *
 * Runs the find_minimum, find_maximum, find_mean and find_median functions and prints them to the console.
 *
 * @param array 	An unsigned char pointer to an n-element data array
 * @param arraySize An int that corresponds to the size of the array.
 *
 * @return Returns nothing as it only prints the results in console.
 */
void print_statistics(char* array,int arraySize);

/**
 * @brief Given an array of data and a length, prints the array to the screen
 *
 * Iterates through the array with a for loop and prints the array contents until index reaches the arraySize parameter.
 *
 * @param array 	An unsigned char pointer to an n-element data array
 * @param arraySize An int that corresponds to the size of the array.
 *
 * @return Returns nothing as it only prints the results in console.
 */
void print_array(char* array,int arraySize);

/**
 * @brief Given an array of data and a length, returns the median value
 *
 * You must use a sorted array! If arraySize is even, it will return the sum of numbers at (arraySize/2) and 
 * (arraySize/2 + 1) and divide them by two. otherwise, it will return the number at arraySize/2.
 *
 * @param array 	An unsigned char pointer to an n-element data array
 * @param arraySize An int that corresponds to the size of the array.
 *
 * @return Returns an unsigned char with the result.
 */
char find_median(char* sortedArray,int arraySize);

/**
 * @brief Given an array of data and a length, returns the mean value
 *
 * Sums by iteration the whole array and returns the result of the sum/arraySize division.
 *
 * @param array 	An unsigned char pointer to an n-element data array
 * @param arraySize An int that corresponds to the size of the array.
 *
 * @return Returns an unsigned char with the result.
 */
char find_mean(char* array,int arraySize);

/**
 * @brief Given an array of data and a length, returns the maximum value>
 *
 * Iterates through the array, saving in a variable the highest value.
 *
 * @param array 	An unsigned char pointer to an n-element data array
 * @param arraySize An int that corresponds to the size of the array.
 *
 * @return Returns an unsigned char with the result.
 */
char find_maximum(char* array,int arraySize);

/**
 * @brief Given an array of data and a length, returns the minimum value>
 *
 * Iterates through the array, saving in a variable the lowest value.
 *
 * @param array 	An unsigned char pointer to an n-element data array
 * @param arraySize An int that corresponds to the size of the array.
 *
 * @return Returns an unsigned char with the result.
 */
char find_minimum(char* array,int arraySize);

/**
 * @brief Given an array of data and a length, sorts the array from largest to smallest. 
 *        (The zeroth Element should be the largest value, and the last element (n-1) should be the smallest value.)
 *
 * Sorts the array and returns a pointer.
 *
 * @param array 	An unsigned char pointer to an n-element data array
 * @param arraySize An int that corresponds to the size of the array.
 *
 * @return Returns a pointer to location of the first value of the sorted array.
 */
char *sort_array(char* array,int arraySize);

#endif /* __STATS_H__ */

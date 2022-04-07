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
 * @brief This file contains declaration of the used functions in stats.c along
 *        with few documentation.
 *
 * Description : The stats.h header file includes declarations and documentation
 * for the functions from the stats.c file. And each declaration has comments
 * with a description of the function, inputs, and return value.
 *
 * @author Nitin Flavier
 * @date 5th April 2022
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */ 

/**
 * @brief Function to print Statistical Data
 *
 * This function takes pointer as an argument where the pointer points to
 * data set array address, and size of the given data array as an input.
 * This will print the statistics of the data array like minimum, maximum,
 * mean, and median. 
 *
 * @param *ptr, passing data set arrays address.  
 * @param n , size of the data set.
 *
 * @return no return value.
 */
void print_statistics(unsigned char *ptr,unsigned int n);

/**
 * @brief Function to print array.
 *
 * This function takes pointer as an argument where the pointer points to
 * data set array address, and size of the given data array as an input.
 * This will print the given data array as the given input.
 *
 * @param *ptr, passing data set arrays address.
 * @param n , size of the data set.
 *
 * @return no return value.
 */
void print_array(unsigned char *ptr,unsigned int n);

/**
 * @brief Function to return median of the given data set.
 *
 * This function takes pointer as an argument where the pointer points to
 * data set array address, and size of the given data array as an input.
 * This function returns the median of the given data set.
 *
 * @param *ptr, passing data set arrays address.
 * @param n , size of the data set.
 *
 * @return the median value.
 */
unsigned char find_median(unsigned char *ptr,unsigned int n);

/**
 * @brief Function to return mean value of the given data set.
 *
 * This function takes pointer as an argument where the pointer points to
 * data set array address, and size of the given data array as an input.
 * This will return the mean value of the given data set.
 *
 * @param *p, passing data set arrays address.
 * @param m , size of the data set.
 *
 * @return the mean value
 */
unsigned char find_mean(unsigned char *p,unsigned int m);

/**
 * @brief Function to return maximum value from the given data set.
 *
 * This function takes pointer as an argument where the pointer points to
 * data set array address, and size of the given data array as an input.
 * This will return the maximum value from the given data set.
 *
 * @param *p, passing data set arrays address.
 * @param m , size of the data set.
 *
 * @return the maximum value from the data set.
 */
unsigned char find_maximum(unsigned char *p,unsigned int m);

/**
 * @brief Function to return minimum value of the given data set.
 *
 * This function takes pointer as an argument where the pointer points to
 * data set array address, and size of the given data array as an input.
 * This will return the minimum value from the given data set.
 *
 * @param *p, passing data set arrays address.
 * @param m , size of the data set.
 *
 * @return the minimum value from the data set.
 */
unsigned char find_minimum(unsigned char *p,unsigned int m);

/**
 * @brief Function to sort array in descending order.
 *
 * This function takes pointer as an argument where the pointer points to
 * data set array address, and size of the given data array as an input.
 * This will sort the given data set in the descending order where the zeroth
 * element will store the maximum value and (n-1)th element will contain
 * the smallest value.
 *
 * @param *p, passing data set arrays address.
 * @param n , size of the data set.
 *
 * @return no return value.
 */
void sort_array(unsigned char *p,unsigned int n);



#endif /* __STATS_H__ */

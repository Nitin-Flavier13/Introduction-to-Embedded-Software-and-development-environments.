/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * File Created by Nitin Flavier.
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/

/**
 * @file stats.c
 * 
 * @brief this project involves performing statistical analytics on a dataset.
 *
 * Description: This project involves creating a simple application that
 *              performs statistical analytics on a dataset given as an array. 
 *              Functions are declared to analyze an array of unsigned char data 
 *              items and report analytics on the maximum, minimum, mean, and
 *              median of the data set. And also to sort(reorder) the data set in 
 *              descending order (with the large value at the 0th index and smallest 
 *              value in the n-1 th index).
 *
 * It will consist of eight functions:
 *
 * main() - The main entry point for your program
 *
 * print_statistics() - A function that prints the statistics of an array 
 * including minimum, maximum, mean, and median.
 *
 * print_array()- Given an array of data and a length, prints the array to the 
 *                screen.
 *
 * find_median()- Given an array of data and a length, returns the median value.
 *
 * find_mean()- Given an array of data and a length, returns the mean.
 *
 * find_maximum()- Given an array of data and a length, returns the maximum.
 *
 * find_minimum()- Given an array of data and a length, returns the minimum.
 *
 * sort_array()- Given an array of data and a length, sorts the array from 
 *               largest to smallest.
 *
 * Author : Nitin Flavier
 * Date : Editted on 5th April 2022

 **/

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

  /* Other Variable Declarations Go Here */
  /* Statistics and Printing Functions Go Here */
  print_statistics(test,SIZE);
}

/* Add other Implementation File Code Here */
void print_statistics(unsigned char *ptr,unsigned int n)
{
   unsigned char min,max,mean,med;
   printf("Data Set: \n");
   print_array(ptr,n);
   min = find_minimum(ptr,n);
   max = find_maximum(ptr,n);
   mean = find_mean(ptr,n);
   med = find_median(ptr,n);
   printf("\nMinimum value in the given Data set is : %d\n",min);
   printf("\nMaximum value in the given Data set is : %d\n",max);
   printf("\nMean value for the given Data set is : %d\n",mean);
   printf("\nMedian value for the given Data set is : %d\n",med);
   printf("\nThe Sorted data is :\n");
   sort_array(ptr,n);
   print_array(ptr,n);
   printf("\n");
}
void print_array(unsigned char *ptr,unsigned int n)
{
   printf("No.  --> Value\n");
   for(int j=0;j<n;j++)
   {
      printf("%d -->  %d\n",j,ptr[j]);
   }
}

unsigned char find_median(unsigned char *ptr,unsigned int n)
{
   unsigned char med;
   sort_array(ptr,n);
   if(n%2==0)
   {
      med = (ptr[n/2] + ptr[n/2 -1])/2;
   }
   else
   {
      med = ptr[n/2 -1];
   }
   return med;
}

unsigned char find_mean(unsigned char *p,unsigned int m)
{
   unsigned int sum = 0;
   unsigned char ans;
   for(unsigned int j=0;j<m;j++)
   {
      sum = sum+p[j];
   }
   ans = sum/((unsigned char)m);
return ans;
}

unsigned char find_maximum(unsigned char *p,unsigned int m)
{
   unsigned char max;
   max = p[0];
   for(int j=0;j<m;j++)
   {
      if(p[j]>max)
         max = p[j];
   }
   return max;
}

unsigned char find_minimum(unsigned char *p,unsigned int m)
{
   unsigned char min;
   min = p[0];
   for(int j=0;j<m;j++)
   {
      if(p[j]<min)
         min = p[j];
   }
   return min;
}

void sort_array(unsigned char *p,unsigned int n)
{
   unsigned char temp;
   for(int j=1;j<n;j++)
   {
     temp = p[j];
     for(int k=j-1;k>=0;k--)
     {
	if(temp > p[k])
	{
           p[k+1] = p[k];
	   if(k==0)
	   {
	     p[k] = temp;
	   }
	}
	else
	{
	   p[k+1] = temp;
	   break;
	}
     }
   }
}

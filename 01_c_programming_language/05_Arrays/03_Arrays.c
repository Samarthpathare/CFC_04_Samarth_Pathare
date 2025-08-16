/*******************************
 * S.G.M.P
 * @file: temperature_logger.c
 * @brief:	 Program to input daily temperatures  for a month and analyze them.
 *			 calculates average,hottest,and  coldest day to help track climate Patterns.
 * @author: samarthpathare (samarthpathare19@gmail.com)
 * @copyright 02020-2025 MarshallingVoid
 * @date: 16/08/2025
 ********************************/
 /*

 	___________________________

 	Problem statement:
 	___________________________
 	
 	Create a temprerature logger for a city that records temperatures for 30 days.
 	The program should:
 	1. Inputs daily temperature readings into an array
 	2. Caculate the average temperature
 	3. Identify the hottest and coldest day
 	This help meteorological departments monitor monthly weather trends .
 */

 #include <stdio.h>

 #define DAYS 30

/**
  * @brief calculate average temperature
  *  
  * @param arr[] Temperature array 
  * @return float Average temperature
  */
  float calculateAverageTemp(int arr[])
  {
  	//code
  	int sum = 0;
  	int le ; 
  	for (le = 0; le < DAYS; le ++)
  	{
  		sum = sum + arr[le];
  	}

  	return((float)sum / DAYS);
  } 

  /**
   * @brief Find hottest temperature and its day
   * 
   * @param arr[] temperature array
   * @return int Inex of hottest day
   */
   int FindHottestDay(int arr [])
   {
   	// code
   	int max = arr[0];
   	int intdex = 0 ;
   	int le;
   	for(le = 1; le < DAYS; le++)
   	{
   		if (arr[le] > max)
   		{
   			max = arr[le];
   			index = le;
   		}
   	}
   	return (index);
   }
/**
 * @brief Find coldest temperture and its day
 * 
 * @param arr[] Temperature array
 * @return int Index of coldest day
 */
 int FindColdestDays(int arr[])
 {
 	//code
 	int min = arr[0];
 	int index = 0;
 	int le;
 	for (le = 1; le < DAYS; le++)
 	{
 		if (arr[le] < min)
 		{
 			min = arr[le];
 			index = le;
 		}
 	}
 	return (index);
 } 

 int main()
 {
 	int temps[DAYS];
 	int le;

 	// Input temperatures
 	printf("Enter temperatures for 30 days:\n");
 	for (le = 0; le < DAYS; le++)
 	{
 		scanf("%d",&temps[le]);
 	}

 	// function calls 
 	float avg = calculateAverageTemp(temps);
 	int hottest = FindHottestDay(temps);
 	int coldest = FintsColdestDay(temps);

 	// output
 	printf("Average Temperature: %d.2f\n", avg);
 	printf("Hottest Day : Day %d with %dF\n", hottest + 1, temps[hottest]);
 	printf("Coldest Day : Day %d with %d F\n", coldest + 1, temps[coldest]);

 	return(0);
 }




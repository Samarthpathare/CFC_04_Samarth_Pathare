/****************************
*  S.G.M.P
* @file: sales_summary_report.c
* @brief: calaculate total, average, and best sales day form weekly sales.
* @author: samarthpathare(samarthpathare19@gmail.com)
* @copyright 02020-2025 MarshallingVoid
* @date: 15/08/2025
*************************************/
/*
_________________________

problem statement:
_________________________
create a weekly sales summary tool for a retail store.
The program should accept sales data for 7 days in an array , and use function to:
1. calculate the total weekly sales.
2. Identify the day with the highest sales
3. compute the average sales per day 
This helps business owners evaluate performance trends throughout the week.
*/
#include <stdio.h>

#define DAYS 7 

/**
 * @brief calculate total sales for the week
 * 
 * @param arr[] Array of daily salesnfor the week
 * @return int Total sales
 */
int calculateTotalsales(int arr[])
{
	//code
	int total = 0;
	int le;
	for (le = 0; le < DAY; le++)
	{
		total = total + arr[le]; 	// Adding each day's sales to total
	}
	return(total);
}

/**
 * @brief calculate average daily sales
 * 
 * @param total Total weekly sales
 * @return float Average sales
 */
 float calculateAveragesSales(int total)
 {
 	//code 
 	return ((float)total / DAYS); // type casting to float for precision
 }
 /**
  * @brief Find intex of best sales day
  * 
  * @param arr[] Array of daliy sales 
  * @return int Index of best sales day
  */
  int FindBestSalesDay(int arr[])
  {
  	// code
  	int max = arr[0];
  	int index = 0;
  	int le;

  	for (le = 1; le < DAYS; le++)
  	{
  		if (arr[le] > max)
  		{
  			max = arr[le];		// update max
  			index = le;			// store best day's index
  		}
  	}
  	return (index);
  } 

 int main()
 {
 	int sales[DAYS];
 	int le;

 	// Inputs sales data for 7 days
 	printf("Enter sales for 7 days:\n")
 	for ( le = 0; le < DAYS; le++)
 	{
 		scanf("%d", &sales[le]);
 	}

 	//Function calls 
 	int total = calculateTotalsales(sales);
 	float average = calculateAverageSales(total);
 	int bestDay = FindBestsalesDay(sales);

 	// output results
 	printf("Total weekly sales: %d\n",total);
 	printf("Average Daily sales: %.2f\n", average);
 	printf("Best sales Day: Day %d with %d sales\n", bestDay + 1, sales[bestDay]);

 	return(0);
 }


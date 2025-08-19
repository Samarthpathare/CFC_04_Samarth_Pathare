/**************************************************
 * S.G.M.P
 * @file			: stock_price_analyzer.c
 * @brief			: Analyzer stock prices for a weel to find the average, highest, and lowest prices.
 * 					  useful for understanding weekly trends in stock investments or trding analysis tools.
 * @author			: samarthpathare (samarthpathare19@gmail.com)
 * @copyright		: 02020-2025 MarshallingVoid
 * @ date			: 19/08/2025
 *************************************************/
 /*
 		_________________________

 		Problem	statement:
 		_________________________ 
 		create a stock price analyzer for a company.
 		The program should :
 		1. Accept daily closing prices for 7 days
 		2. calculate:
			-Acerage stock price
			-Highest closing price
			-lowest closing price
		this program helps invetors quickly evaluate weekly performance of their stocks.
*/

	#include <stdio.h>

	#define DAYS 7
/**
 * @brief calculates the average price
 * 
 * @param price[] Array of stock prices
 * @param total Number of days
 * @return Average stock price
 */ 
float calculateAveragePrice(int prices[], int total)
{
	int sum = 0;

	for (int le = 0; le < total; le++)
	{
		sum = sum + prices[le];
	}
	return((float)sum / total);
}

/**
 * @brief calculates the average price
 * 
 * @param price[] Array of stock prices
 * @param total Number of days
 * @return Highest price
 */ 
int FindHighestPrice(int price[], int total)
{
	int max = prices[0];
	for (int le = 1; le < total; le++)
	{
		if (prices[le]> max)
		{
			max = prices[le];
		}
	}
	return (max);
}
/**
 * @brief calculates the average price
 * 
 * @param price[] Array of stock prices
 * @param total Number of days
 * @return lowest price
 */ 
int FindLowestPrice(int prices[], int total)
{
	int min = prices [0];
	for (int le = 1; le < total; le++)
	{
		if (prices[le] < min)
		{
			min = prices[le];
		}
	}
	return (min);
}
int main()
{
	int prices [DAYS];
	for (int le = 0; le < DAYS; le++)
	{
		printf("Enter closing stock price for Day %d: ", le + 1);
		scanf("%d", &prices[le]);
	}
	float avg = calculateAveragePrice(prices, DAYS);
	int highest = FindLowestPrice(prices, DAYS);
	int lowest = FindLowestPrice(prices, DAYS);

	printf("\n----stock price Analysis---- \n");
	printf("Average price   :  %.2f\n , avg");
	printf("Highest price   :  %d\n", highest);
	printf("lowest price    :  %d\n", lowest);

	return (0);
}

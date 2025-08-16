/**********************************
 * S.G.M.P
 * @file		: electricity_slab_calculator.c
 * @brief		: calculates electricity bill for 10 households using slab rates.
 * 				  Helps energy boards in monthly billing and analysis reports.
 * @author		: samarthpathare (samarthpathare19@gmail.com)
 * @copyright	: 02020-2025 Marashallingvoid
 * @date		: 16/08/2025
 ****************************************/
/*

	__________________________
	
	Problem statement:
	__________________________

	Create an electricity slab calculator for 10 households.
	The program should :
	1. Accept units cousumed by each household into an array 
	2. calculate bill for each household using fixed slab rates:
		- First 100 unit : &5/unit
		- Next 100 units: &7/Unit
		- Remaining: &10/unit
	3. use only basic operators (+,-,*,/)
	This assists utility companies in genetating accurate household bills.
*/

#include <stdio.h>

#define HOUSEHOLDS 10

/**
 * @brief calculates electricity bill based on unit slabs
 * 
 * @param units Electricity units used
 * @return Bill amount
 */
{
	int bill = 0;

	if (units <= 100)
	{
		bill = units * 5;
	}
	else if (units <= 200)
	{
		bill = (100 * 5) + ((units - 100) * 7);
	}
	else
	{
		bill = (100 * 5) + (100 * 7) + ((units - 200) * 10;
	}
	
	return (bill);
}

#define HOUSEHOLDS 10

/**
 * @brief calculates electricity bill based on unit slabs
 * 
 * @param units Electricity units used
 * @return Bill amount
 */
 int CalculateBill(int units) 
 {
 	int bill = 0;
 	if (units <= 100)
 	{
 		bill = units *5;
 	}
 	else if (units <= 200)
 	{
 		bill = (100 * 5) + ((units - 200) * 10);
 	}
 	return(bill);
 }
 int main()
 {
 	int units[HOUSEHOLDS];
 	int bill[HOUSEHOLDS];

 	for (int le = 0; le < HOUSEHOLDS; le++)
 	{
 		printf("Enter electricity units used by Household %d:", le + 1);
 		scanf("%d, &units[le]");
 		bill[le] = CalculateBill(units[le]);
 	}

 	printf("\n-Electricity Bill Summary -\n");

 	for (int le = 0; le < HOUSEHOLDS; le++)
 	{
 		printf("Households %d: units = %d, Bill = &%d\n", le + 1, units[le], bill[le]);
 	}
 	return (0);
 }
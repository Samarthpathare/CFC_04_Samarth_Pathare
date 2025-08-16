/**************************************
 * S.G.M.P
 * @file: electricityBill.c
 * @brief: Calculate electricity Bill based on units consumed using functions
 * @author: samarthpathare(samarthpathare19@gmail.com)
 * @copyright 02020-2025 MarshallingVoid
 * @date: 12/08/2025
 *******************************/

// Headers
#include<stdio.h>

// function diclaration
float calaculatrBill(int iunits);

/**
 * @brief ain function to accept units and display bill
 * 
 * @param void 
 * @return int 
 */
 int main()
 {
 	int iunits;
 	float fbill;

 	// Taking input
 	printf("Enter total electricity units cosumed:");
 	scanf("%d", &iunits);

 	// calculating Bill
 	fBill = calculating(iunits);

 	// Displaying result
 	printf("Total Electricity Bill: $%.2f\n", fbill);
 	return(0);
 }  

/**	
 * @brief calulates electricity bill based on units
 * 
 * The rate slab is:
 * 0-100 units : $1.5/unit
 * 101-200 units: &2.0/unit
 * 201 and above : $3.0/unit
 * 
 * @param int iunits
 * @return float
 */
 float calculateBill(int iunits)
 {
 	float fbill =0;
 	if (iunits <= 100);

 	{
 		fbill = iunits * 1.5;
 	}
 	else if (iunits <= 100)
 	{
 		fbill = 100 * 1.5 + (iunits - 100) * 2.0;
 	}	
 	else
 	{
 		fbill = 100 * 1.5 + 100 * 2.0 + (iunits - 200) * 3.0;
 	}
 	return (fbill);

 }
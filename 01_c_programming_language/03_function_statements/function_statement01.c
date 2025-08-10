/*******************************************
* S.G.M.P
* @file: simpleinterestcalculator.c
* @brief: clculates simple interest and total amount using separate function in c.
* @author: samarthpathare(samarthpathare19@gmail.com)
* @copyright 02020-2025 MarshallingaVoid
* @date: 08/08/2025
********************************************/ 

// Headers
#include <stdio.h>  // For intput/output oprations

// Function Declarations

float calculatesimpleInterest(int iPrincipal, float fRate, int iTime);

float calculatetotalAmount(int iPrincipal, float fInterest);

/**
* @brief main function
*
*Entry point of the program.
*
*@brief Main funcction
*
*@param void
*@return int
*/
int main()
{
	// variable declaration
	int iPrincipal = 0; 			// To store principal amount
	float fRate =0.0f;				// To store rate of interest
	int iTime = 0;					// To store time period in years
	float fInterest = 0.0f;			// To store calculaed interest
	float fTotalAmount = 0.0f;		// TO store final amount


	// Asking user to entry principal amount
	printf("Enter principal Amount: ");
	scanf("%d",&iPrincipal );

	// Asking user to rate of interest
	printf("Enter rate of interest (in %%): ");
	scanf("%f", &fRate);

	// Asking user to time duration
	printf("Enter Time (in years): ");
	scanf("%d", &iTime);

	// calling function to calculate simple interest
	fInterest = calculatesimpleInterest(iPrincipal, fRate, iTime);

	// calling function to calculate total amount
	fTotalAmount = calculatetotalAmount(iPrincipal, fInterest);

	// Displaying results
	printf ("\nsimple Interest: %.2f\n", fInterest);
	printf ("Total Amount after Interest: %.2f\n", fTotalAmount);

	return (0);

}

/**
 * @ brief calculates the simple interest
 * 
 * uses the formula (Princcipal * Rate * Time) / 100 to compute simple interest
 * 
 * @param iprincipal principal amount
 * @param fRate Rate of interest (in percentage)
 * @param itime time priod in years
 * @return float computed simple interest
 *
 */
float calculatesimpleInterest(int iPrincipal, float fRate, int itime)
{
	// calculating and returning simple interest
	return (iPrincipal * fRate * itime / 100);
}
/**
 * @brief calulates the total amount after interest
 * 
 * Adds simple interest to principal to get final amount
 * 
 * @param iPrincipal principal amount 
 * @param fInterest computed simpal interest
 * @return float final amount after adding interest
 */
float calculateTotalAmount(int iPrincipal, float fInterest)
{
	// Calaulate and returning total amount
	return (iPrincipal + fInterest);
}

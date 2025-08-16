/**************************
 * S.G.M.P
 * @file: salary_calculation.c
 * @brief: calculates salary after tax deductions
 * @author: samarthpathare(samarthpathare19@gmail.com)
 * @copyright 02020-2025 MarshallingVoid
 * @date: 16/08/2025
 ******************************/
//Headers for header files
#include <stdio.h>

//Function Declaration
float calculateGrossSalary(float fbaseSalary, float fbonus);
float calculateNetsalary(float fgrossSalary, float ftaxRate);

/**
 * @brief
 * Main function
 * 
 * 
 * @param void
 * @return int
 */
 int main()
 {
 	//Declare base salary
 	float fbaseSalary = 50000;

 	//Declare bonus amount
 	float ftaxRate = 10000;

 	//Declare tax rate
 	float ftaxRate = 10; 

 	// Calculate gross salary
 	float fgrossSalary = calculateGrossSalary(fbaseSalary,fbonus);

 	//Calculate net salary
 	float fnetSalary = calculateNetSalary(fgrossSalary,ftaxRate);

 	// print the net salary
 	printf("Net Salary: %.2f\n", fnetsalary);

 	return(0);
 }
 /**
  * @brief
  * calculate gross salary
  * 
  * 
  * @param float fbasesalary, float fbonus
  * @return float
  */
  float calculateGrossSalary(float fbaseSalary, float fbonus)
  {
  	// Add base Salary and bonus
  	return (fbaseSalary + fbonus);
  } 

  /**
   * @brief
   * calculate net salary after tax deduction
   * 
   * 
   * @param float fgrossSalary, float ftaxRate
   * @return float
   */
   float calculateNetsalary(float fgrossSalary, float ftaxRate)
   {
   		// calculate tax amount
   		float ftaxAmount = (fgrossSalary * ftaxRate) / 100;

   		// subtract tax from gross salary
   		return(fgrossSalary - ftaxAmount);
   } 
   
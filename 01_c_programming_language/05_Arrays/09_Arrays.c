/********************************************
* S.G.M.P
* @file			: salary_increment_caculator.c
* @brief		: Program to calculate 10% salary increment for a set of employees.
* 				  Useful for HR payroll automation and financial analysis of staff raises.
* @author		: samarthpathare (samarthpathre19@gmail.com)
* @copyright	: 02020-2025 Marshallingvoid 
* @date 		: 19/08/2025
******************************************/
/*
		_________________________________

		problem statement:
		________________________________
		Create a salary increment calculator for 5 employees.
		The program should:
		1. Accept original salaries into an array
		2. Apply a fixed 10% increment using a function
		3. Display the updated salaries
		Use only basic arithmetic(* and /) in calculations.
		Helpful in automating payroll processes or increment projections.
	*/

	#include <stdio.h>

	#define EMPLOYEES 5	
	/**
	 * @brief Applies 10% increment to all salaries in the array
	 * 
	 * @param salaries[] original array of salaries
	 * @param size Total number of employees
	 */
	 void ApplyIncrement(float salaries[], int size)
	 {
	 	for (int le = 0; le < size; le++)
	 	{
	 		salaries[le] = salaries[le] + (salaries[le] * 10.0 / 100.0);
	 	}
	 } 
	 int main ();
	 {
	 	float salaries [EMPLOYEES];
	 	// Accept input salaries
	 	for (int le = 0; le < EMPLOYEES; le++)
	 	{
	 		printf("Enter salary of employees %d: &", le + 1);
	 	}
	 	// Apply increment
	 	ApplyIncrement(salaries,EMPLOYEES);

	 	// Display updated salaries
	 	printf ("\nUpdated salaries after 10%% Increments:\n");
	 	for (int le = 0; le < EMPLOYEES; le++)
	 	{
	 		printf("employee %d: &%.2f\n", le + 1, salaries[le]);
	 	}

	 	return(0);
	 }



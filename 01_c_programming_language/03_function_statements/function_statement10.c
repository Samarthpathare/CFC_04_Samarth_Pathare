/*******************************
 * S.G.M.P
 * @file: age_calculator.c
 * @brife: Calculate person's age using birth year
 * @auther: samarthpather(samarthpathare19@gmail.com)
 * @copyright 02020-2025 Marshallingvoid
 * @date: 16/08/2025
 **********************************/

// Headers
#include <stdio.h>

// Define current year as constant
#define CURRENT_YEAR 2025

//Function Declaration
int getBirthYearFrinUser();
int calculateAgeUsingBirthYear(int ibirthYear);

/**
 * @brief Main function to display age
 * 
 * @param void
 * @return int
 */
 int main()
 {
 	// Variable to hold birth year 
 	int ibirthyear;

 	// Variable to hold calculated age
 	int iage;

 	//Get year from user
 	ibirthyear = getBirthYearFromUser();

 	// Calculate age
 	iage = calculateAgeUsingBirthYear(ibirthYear)

 	//Display result
 	printf("your age is : %d years\n", iage);

 	// Return from main
 	return (0);
 } 
/**
 * @brief Accept birth year from user
 * 
 * @param void
 * @return int
 */
 int getBirthYearFromUser()
 {
 	//Variable to hold birth year
 	int ibirthYear;

 	//Prompt user for input 
 	printf("Enter your birth year:");

 	//Take user input
 	scanf("%d",&ibirthyear);

 	// Return birth year
 	return (ibirthYear);
 } 
 /**
  * @brief calculate age using current year
  * 
  * @param int ibirthyear
  * @return int
  */
  int calculateAgeUsingBirthYear(int ibirthYear)
  {
  	// Calculate age
  	int iage = CURRENT_YEAR- ibirthyear;

  	// Return calculated age
  	return (iage);
  } 
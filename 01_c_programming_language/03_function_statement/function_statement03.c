/**************************************
* S.G.M.P
* @file: studentGrades.c
* @brief: calculate student grades and display result using functions
* @author: samarthpathare(samarthpathare19@gmail.com)
* @copyright 2020-2025 Marshallingvoid
* @date: 09/08/2025
************************/
// Headers
#include <stdio.h>

// function declaration
float calculateAveragemarks(int imark1, int imark2, int imark3);
char deter,ineStudentGrade(float favg);

/**
 * @brief Main function to take inputs and display result
 * 
 * Accepts marks, calculates average, grade and prints result
 * 
 * @param void
 * @result int 
 */
 int main()
 {
 	// Declaring integer veriables for storing marks
 	int imath, iscience, ienglish;

 	// Declaring float for average and char for grade
 	float faverage;
 	char cgrade;

 	//taking input from user
 	printf ("enter marks in math: ");
 	scanf("%d", &imath);

 	printf("enter marks in science: ");
 	scanf("%d", &iscience);

 	printf("enter marks in english: ");
 	scanf("%d", &ienglish);

 	// calculating average
 	faverage = calculateAveragemarks(imath, iscience, ienglish);

 	// determining grade
 	cgrade = determineStudentGrade(faverage);

 	// Displaying the results
 	printf("\nAverage Marks: %.2f\n", faverage);
 	printf("Grade: %c\n", cgrade);

 	// Returning 0 from main
 	return(0);
 } 
 /**
  * @brief calulates the average marks of a student
  * 
  * Takes marks of 3 subjects and returns the average.
  * 
  * @param int imarks1, int imarks2 , int imarks3
  * @return float
  */
  float calculateAveragemarks(int imark1, int imark2, int imark3)
  {
  	// Declaring a float variable to store average
  	float favg = (imark1 + imark2 + imark3) / 3.0;

  	// Returning the calculated average
  	return (favg);
  } 
  /**
   * @brief determines grade based on average
   * 
   * Returns a character grade based on average marks
   * 
   * @param float favg
   * @return char
   */
   char determineStudentGrade(float favg)
   {
   		// using if-else condition to assion orade
   		if (favg >= 90)
   		{
   			return('A');
   		}
   		else if (favg >= 75)
   		{
   			return('B');
   		}
   		else if (favg >= 60)
   		{
   			return('D');
   		}
   		else
   		{
   			return('F');
   		}
   } 
   

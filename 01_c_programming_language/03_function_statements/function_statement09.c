/*************************************
 * S.G.M.P
 * @file: number_to_Words_converter.c
 * @brief: Prgram to convert an integer number into its word representation
 * @author: samarthpathare(samarthpathare19@gmail.com)
 * @copyright 02020-2025 MarshallingVoid
 * @date : 16/08/2025
***************************************/

// Headers
#include <stdio.h>

// Function Declaration
void displayDigitInWords(int iDigit);
void printfNumberInWords(int iNumber);

/**
 * @brief Main entry point of the program
 * 
 * Takes user input and invokes function to convert it into words.
 * 
 * @param void
 * @return int - exit status
 */
 int main()
 {
 	//Declaring a variable to store usre input
 	int iuserNumber;

 	//prompting the user to enter a number
 	printf("Enter a positive integer:");
 	scanf("%d",&iuserNumber);

 	// checking if the input is a negative number
 	if (iUserNumber < 0)
 	{
 		//Declaring error message for invalid input
 		printf("please enter a positive number only.\n");

 		// Exiting with error status
 		return(1);
 	}
 	// checking for special case of 0
 	if (iuserNumber == 0)
 	{
 		//Directly printing Zero
 		printf("Zero\n");
 	}
 	else
 	{
 		// Calling function to print number in words
 		printNumberInWords(iUserNumber);
 	}
 	// Returning successfull program termination
 	return (0);
 } 

/**
 * @brief printf the word representation of a given digit (0-9)
 * 
 * Accepts a single digit and prints its corresponding English word.
 * 
 * @param iDigit - an integer digit (0-9)
 * @return void
 */
 void displayDigitInWords(int iDigit)
 {
 	// checking and printing corresponding word for each digit
 	if (iDigit == 0)
 	{
 		printf("zero");
 	}
 	else if (iDigit == 1)
 	{
 		printf("one");
 	}
 	else if (iDigit == 2)
 	{
 		printf("Two");
 	}
 	else if (iDigit == 3)
 	{
 		printf("Three");
 	}
 	else if (iDigit == 4)
 	{
 		printf("Four");
 	}
 	else if (iDigit == 5)
 	{
 		printf("Five");
 	}
 	else if (iDigit == 6)
 	{
 		printf("six");
 	}
 	else if (iDigit == 7)
 	{
 		printf("seven");
 	}
 	else if(iDigit == 8)
 	{
 		printf("Eight");
 	}
 	else if (iDigit == 9)
 	{
 		Printf("Nine");
 	}
 } 
 /**
  * @brief Converts and prints each digit of a number in word format
  * 
  * Reverses the number first so that digits can be printed left to right.
  * 
  * @param iNumber - a positive integer input
  * @return void
  */
  void printNumberInWords(int iNumber)
  {
  	// Declaring an interger to store reversed number
  	int iReversed = 0;

  	// Reversing the number to get left-to-right digit order
  	while (iNumber > 0)
  	{
  		// Appending the last digit of original number to reversed number
  		iReversed = (iReversed * 10) + (iNumber % 10);

  		// Removing the last digit from original number
  		iNumber = iNumber /10;
  	}
   // Loop to extract and print each digit in word format
  	while (iReversed > 0)
  	{
  		// Getting last digit
  		int iLastDigit = iReversed % 10;

  		// calling function to print the word of the digit
  		displayDigitInWords(iLastDigit);

  		//Removing the last digit
  		iReversed = iReversed / 10;
  	}
  	// Moving to the next line after printing all words
  	printf("\n");
 }
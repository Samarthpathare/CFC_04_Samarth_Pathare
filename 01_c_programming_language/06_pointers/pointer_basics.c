/************************************
 * S.G.M.P
 * @file: pointer_basics.c
 * @brief: Demonstrates how to store and access a variable's value using a pointer.
 * @author: samarthpathare(samarthpathare19@gmail.com)
 * @copyright @2020-2025 Marshallingvoid
 * @date: 4/09/2025
 *************************************/

/*
 problem statements:
 __________________
 Write a C program that :
 1. Declares an integer variable.
 2. Declares a pointer to store its address.
 3. prints the value of the variable using both direct access and pointer dereferemcing.

 Detailed Description:
 ____________________
 This program helps to understand the concept of pointers in c. It shows :
 - How to declare a pointer .
 - How to store the address of a variable in a pointer.
 - How to use the dereference operator (*) to access the value stored at that address .
*/
#include <stdio.h> // standard input-output library

/**
 * @brief : Main function to demonstrate pointer basics 
 * 
 * 
 * 
 * @param: None
 * @return : Integer status code (0 for success)
 */
 int main()
 {
 	int inum = 10;		// Declare and initialize an integer variable
 	int *iptr = NULL;	// Declare a pointer to int 

 	iptr = &num; 			// Store the address of 'inum' in 'iptr'

 	printf("Value of inum: %d\n", inum);		// print value directly
 	printf("Address of inum : %p\n", &inum);	// print address of 'inum'
 	printf(" value using pointer: %d\n", *iptr);	// Dereference pointer to get value
 	printf("Address stored in pointer: %d\n", iptr);	//print the address stored in 'iptr'

 	return 0; // End of program

 } 

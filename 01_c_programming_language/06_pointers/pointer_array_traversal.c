/*************************************************
 * S.G.M.P
 * @file: pointer_array_traversal.c
 * @brief: Demonstrates array traversal using pointer arithmetic instead of indexing.
 * @author: samarthpathare(samarthpathare19@gmail.com)
 * @copyright 02020-2025 Marshallingvoid
 * @date: 06/09/2025
 *********************************************/

 /*
 problem statement:
 ______________________
 Declare an integer array of 5 elements.
 use a pointer to:
 - Traverse the array .
 - print all elements without using the [] operator.

 Detailed Description:
 __________________________
 This program teaches:
 - Relationship between arrays and pointer.
 - pointer arithmetic (ptr + le) to access array elements.
*/
#include <stdio.h> // standard I/o library

/*
 * @brief: Main function to demonstrate pointer arithmetic for array traversal
 * @param: None
 * @return: Ineger status code (0 for success)
 */
int main()
{
	int arr[5] ={10,20,30,40,50}; // Initialize an integer array 
	int *ptr = arr;					// pointer points to first elements of array 

	printf("Array elements :\n"); 	//Heading for output

	// Loop through array elements using pointer arithmetic
	for (int le = 0; le < 5; le++)
	{
		printf("elements %d: %d\n", le + 1 , *(ptr + le)); // Access elements using *(ptr + le)
	}

	return 0; // End of program
 }

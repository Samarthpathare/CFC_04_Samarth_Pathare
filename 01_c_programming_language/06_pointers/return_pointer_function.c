/**************************************
 * S.G.M.P
 * @file: return_pointer_function.c
 * @brief: Returns a pointer to the largest elments in an integer array.
 * @author: samarthpathare (samarthpathare19@gmail.com)
 * @copyright 02020-2025 MarshallingVoid
 * @date: 11/09/2025
 * *******************************/
/*
Problem statement:
__________________
Write a function that returns a pointer to the largest elements in an integer array.

Detailed Description:
___________________
The program:
- searches array for maximum.
- Returns address of that maximum value.
- Demonstrates returning pointers from function.
*/
#include <stdio.h>  // Standard I/O library
/*
 *@brief: Finds largest elements and returns pointer to it 
 *@param: arr - pointer to integer array
 *@param: size -size of the array
 *@return: pointer to largest element
 */
int* findLargest(int *arr, int size)
{
	int *maxPtr = arr;  // Assume first element is largest
	for (int le = 1; le < size ; le++)
	{
		if (*(arr + le) > *maxPtr)
		{
			maxPtr = arr + le;  //update pointer to new largest
		}
	}
	return maxPtr; // Return address of largest element
}
/*
 * @brief: Main function to demonstrate returning pointer from function
 * @Param: None
 * @return: Integer status code (0 for success)
 */
int main()
{
	int arr[5] = {11, 45, 32, 78, 56}; // Sample array

	int *largest = findLargest(arr, 5); // Get pointer to largest element

	printf("Largest value: %d\n", largest); // Print value using pointer
	printf("Address of largest value: %p\n", largest); // print its address
	
	return 0; // End of program
}
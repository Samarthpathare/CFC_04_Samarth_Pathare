 /************************************************
  * S.G.M.P
  * @file: reverse_array_pointer.c
  * @brief: Reverse an array using pointer without array indexing.
  * @author: samarthpathare(samarthpathare19@gmail.com)
  * @copyright 02020-2025 Marshallingvoid
  * @date: 06/09/25
  * *********************************/

/*
 problem statement":
 ___________________
 Write a program to reverse an array of intigers using  poimter only (no array indexing).

 Detailed Description:
 _____________________
 This program:
 - Uses tow pointer (start and end).
 - Swaps values and moves pointers towards each other unitl they meet.
*/
#include <stdio.h> //standard I/o library
/*
 * @brief: Function to reverse an array using pointers 
 * @param: arr - pointer to array 
 * @param: size - size of the array
 * @return: None
 */
void reterseArray(int *arr, int size)
{
	int *start = arr;		//pointer to first element
	int *end = arr + size - 1; //pointer to last element

	while (start < end)
	{
		int temp = *start;		// swap process
		*start = *end;
		*end = temp;

		start++; 		// Move start pointer forward
		end--; 			// Move end pointer backward
	}
}
/*
 * @brief: Main function to demonstrate reversing an array using pointers
 * @param: None
 * @return: Integer status code (0 for success)
 */
int main ()
{
	int arr[5] ={1,2,3,4,5}; //original array
	printf("original array: ");
	for (int le = 0; le < 5; le++)
	{
		printf("%d", arr[le]);
	}
	reverseArray(arr, 5); // call function to reverse array

	printf("\nReversed array:");
	for (int le = 0; le < 5; le++)
	{
		printf("%d", arr[le]);
	}
	return 0; // end of program
}
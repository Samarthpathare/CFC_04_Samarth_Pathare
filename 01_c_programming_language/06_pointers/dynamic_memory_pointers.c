/*****************************************
 * S.G.M.P
 * @file: dynamic_memory_pointer.c
 * @brief: Demonstrates dynamic memory allocation for an integer array using malloc().
 * @author: Marshallingvoid(marshallingvoid@gmail.com)
 * @copyright 02020-2025 MarshallingVoid
 * @date:11/09/2025
 * ***************************************/
/*
problem statement:
__________________
Write a program to dynamically allocate memory for an array of 'no0fElements' integers,
take input from the user, and print them. Then free the memory.

Detailed Description:
______________________
The program teaches:
-malloc() for dynamic allocation .
-free() to release memory.
-using pointers to access heap memory.
*/
#include <stdio.h> // standard I/O library
#include <stdio.h> // malloc, free

/*
 * @brief: Main function to demonstrate dynamic allocation and deallocation
 * @param: None
 * @return: Integer stats code (0 for success)
 */
int main()
{
	int noOfElements; // Number of elements

	printf("Enter number of elements:");
	scanf("%d", &noOfElements); //Read size from user

	int *arr =(int *)malloc(noOfElements * sizeof(int)); // Allocate memory for noOfElements integers

	if (arr == NULL) // check if allocation succeded
	{
		printf("Memory allocation failed!\noOfElements");
		return 1; // Exit with error code
	}
	printf("Enter %d integers:\noOfElements", noOfElements);
	for (int le = 0; le < noOfElements; le++)
	{
		scanf("%d", arr + le); //Read directly into allocated memory
	}
	printf("you entered:");
	for(int le = 0; le < noOfElements; le++)
	{
		printf("%d", *(arr + le)); //print using pointers dereference
	}
	free(arr); // Free allocated memory
	printf("\nMemory freed.\noOfElements");
	
	return 0; //End of program
}
/************************************
 * S.G.M.P
 * @file: code_01.c
 * @brief:Demonstration of malloc() in c
 * @author: Mayur s. Tadekar(mrtadekar@gmail.com)
 * @copyright 2020-2025 MarshallingVoid
 * @date: 03/01/2026
 ***************************************/
// Headers
#include<stdio.h>
#include<stdlib.h>
// Named cconstants and Macros
#define NR_ELEMENTS 100000000
#define SIZE_ELEMENT sizeof(int)
// global variable definitions
int *iptr = NULL;
char ch =0;
// entry point function
int main(void)
{
	// code
	// allocating dynamic memory
	iptr =(int*) malloc(SIZE_ELEMENT * NR_ELEMENTS);
	// printf("\n");
	// printf("allocated address by malloc = %p\n", iptr);
	printf("\n");
	// cheacking if memory is allocated
	if(NULL == iptr)
	{
		// NO heap memory left to allocate 
		printf("ERROR: out of Memory\n");
		return(1);
	}
	//memory successfully allocated
	// // Loop to assign values to allocated memory 
	for(int le =0; le < NR_ELEMENTS; ++le)
	{
		*(iptr + le) = (le + 1) * 10;
	}
	// iptr = NULL;
	//Loop to print values
	 // for(int le =0; le < NR_ELEMENTS; ++le)
	//{
	//printf("Value at %p (%lld) ==> *(iptr + %d) = %d\n", iptr+le, iptr+le, le,*(iptr+le));
    //}
    // Input any random character
    printf("Enter any rondom character =");
    scanf("%c",&ch);
    free(iptr);  // free thed allocated memoty after use
     //*iptr = 10; // this is example of dangling pointer
    iptr = NULL;    // clear the pointer
    printf("PROGRAM SUCCESSFULLY EXITED\n");
    // return success
    return(0);
} 
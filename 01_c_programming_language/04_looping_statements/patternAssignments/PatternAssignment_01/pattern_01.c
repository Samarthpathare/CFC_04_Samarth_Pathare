/*
S.G.M.P
@file: pattern_01.c
@brief: Implementation of Following Pattern C
		*	*	*	*	*
		*	*	*	*	*	
		*	*	*	*	*
		*	*	*	*	*
		*	*	*	*	*
@author: samarthpathare(samarthpathare19@gmail.com)
@copyright: 02020-2025 Marshalling void
@date: 13/08/2025
*/

// Headers
#including<stdio.h>

// Global variable Defination

int ole = 0;
int ile = 0;

// Entry point function
int main(void)
{
	//code
	printf("Program Execution started\n");

	// outer Loop
	for(ole = 0; ole < 5; ++ole)
	{
		// outer Loop body

		// Inner loop
		for(ile = 0; ile < 5; ++ile)
		{
			// Inner Loop Body
			printf("* ");
		}

		printf("\n");
	}

	
	printf("program Execucution commpleted\n");

// return statement
return(0);
}

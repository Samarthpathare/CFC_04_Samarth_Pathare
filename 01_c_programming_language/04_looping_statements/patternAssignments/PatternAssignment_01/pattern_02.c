/*
 S.G.M.P
 @file: pattern_01.c
 @brief: Implementation of Following Pattern C
 	A 	A 	A 	A 	A
 	B 	B 	B 	B 	B
 	C 	C	C 	C 	C
 	D	D 	D 	D 	D
 	E 	E 	E 	E 	E
 @author: samarth pathare(samarthpathare19@gmail.com)
 @copyright: 02020-2025 Marshalling void
 @date: 24/08/2025
 */
// Headers
#include <stdio.h>

// Global variable Definition
int ole = 0;
int ile = 0;
char toPrintcharacter = 'A';

// Entry point Function
int main(void)
{
	// code
	printf("Program Execution started\n");

	// outer loop
	for(ole =0; ole < 5; ++ole)
   {
		// outer loop Body

		//Inner Loop
		for(ile = 0; ile < 5; ++ile)
	  { 
		// Inner Loop
		printf("%c", toPrintcharacter);

	  }
		toPrintcharacter = toPrintcharacter + 1;
		printf(" \n");
   }

 	printf("program Execution completed\n");

   // return statement
   return(0);
}


 	
 	
 	
 
 	
 	
 	
 	
 	
 	
 	
 
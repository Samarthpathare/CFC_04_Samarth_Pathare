/*
 S.G.M.P
 @file: pattern_01.c
 @brief: Implementation of Following Pattern C
 		*	_ 	_ 	_ 	_ 	_
 		*	*	_ 	_ 	_ 	_
 		*	*	*	_ 	_ 	_
 		*	*	* 	* 	_ 	_
 		*	* 	* 	* 	* 	_
 		*	* 	* 	* 	* 	*
 @authore: samarth pathare(samarthpathare@gmail)
 @copyright:02020-2025 Marshalling void
 @date: 24/08/2025
 */

 //Headers
 #include <stdio.h>	

 //Global Variable Definition
 int ole = 0;
 int ile = 0;

 // Entry point Function
 int main(void)
 {
 	//code
 	printf("Program Execution Started\n");

 	// Outer Loop
 	for(ole = 0; ole <= 5; ++ole)
 	{
 		//outer loop body

 		//inter loop
 		for(ile = 0; ile <= 5; ++ile)
 		{
 			// Inner loop Body
 			if ( ile <= ole)
 			{
 				printf("* ");
 			}
 			else
 			{
 				printf(" _");
 			}
 		}
 		printf("\n");
 	}

 	printf("program Execution Completed\n");

 	// return statement
 	return(0);
 }
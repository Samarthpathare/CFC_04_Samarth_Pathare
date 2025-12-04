/*********************************************
 * S.G.M.P
 * @file: pattern_02.c
 * @brief: Implementation of the following Pattern
 					*
					* 	*
					* 	* 	* 
					* 	* 	* 	*
					* 	* 	* 	* 	*
					* 	* 	* 	* 
					* 	*	*
					* 	* 
					* 
 * @author: samarth pathare (samarthpathare19@gmail.com)
 * @Copyright 02020-2025 Marshallingvoid
 * @date: 24/08/2025
 ************************************************/

 // Headers 
 #include <stdio.h>

 // Global Variable Defination
 int ole = 0;
 int ile = 0;

 //Entry point Function
 int main (void)
 {
 	// code

 	// outer loop
 	for(ole = 0; ole < 9; ++ole)
 
 	 {
 			//Outer loop body

 			// Inner loop
 			for(ile = 0; ile < 5; ++ile)
 			{
 				if(ole > 4 && ile <(9-ole))
 				{
 					printf("*");
 				}		
 				else if (ile <= ole && ole <= 4)
 				{
 					printf("*");
 				}
 			}
 			printf("\n");
 	 }

  //return statement
  return(0); 					 
}
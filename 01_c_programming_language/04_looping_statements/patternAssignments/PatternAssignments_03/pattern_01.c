/*********************************************
 * S.G.M.P
 * @file: pattern_01.c
 * @brief: Implementation of the following Pattern
			3
			2 3
			1 2 3
			0 1 2 3
			1 2 3
			2 3
			3
 * @author: samarth pathare (samarthpathare19@gmail.com)
 * @Copyright 02020-2025 Marshallingvoid
 * @date: 04/12/2025
 ************************************************/

 // Headers 
 #include <stdio.h>
 // global variable definition
 int ole =0;
 int ile =0;
 // entry point function
 int main(void)
 {
	//code
	for(ole = 3; ole >= 0; -- ole)
	{
		for(ile = ole; ile <= 3; ++ ile)
		{
			printf("%d\t", ile);
		}
		printf("\n");
	}
	for(ole = 1; ole <= 3; ++ole)
	{
		for(ile = ole; ile <=3; ++ile)
		{
			printf("%d\t", ile);
		}
		printf("\n");
	}
	return(0);
 }
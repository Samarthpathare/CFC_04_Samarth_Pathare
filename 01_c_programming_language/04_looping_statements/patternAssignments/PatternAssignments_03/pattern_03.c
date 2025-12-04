/*********************************************
 * S.G.M.P
 * @file: pattern_03.c
 * @brief: Implementation of the following Pattern
			3
            3 2 
            3 2 1
            3 2 1 0
            3 2 1
            3 2
            3 
 * @author: samarth pathare (samarthpathare19@gmail.com)
 * @Copyright 02020-2025 Marshallingvoid
 * @date: 04/12/2025
 ************************************************/

 // Headers 
 #include <stdio.h>
 // global variable defination
 int ole = 0;
 int ile = 0;
 // entry point function
 int main(void)
 {
    // code
    // outer loop
    for(ole = 0; ole < 7; ++ole)
    {
        // inner loop
        for(ile = 3; ile >= 0; --ile)
        {
            if(ole <= 3 && ile >= 3 - ole)
            {
                printf("%d",ile);
            }
            else if(ole > 3 && ile >= ole - 3)
            {
                printf("%d", ile);
            }
        }
        printf("\n");
    }
    // return statement
    return(0);
 }
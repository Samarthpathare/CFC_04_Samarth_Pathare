/*
 S.G.M.P
 @file: pattern_02.c
 @brief: Implementation of Following Pattern C
 		1
        1   2
        1   2   3
        1   2   3   4
        1   2   3   4   5
 @authore: samarth pathare(samarthpathare@gmail)
 @copyright:02020-2025 Marshalling void
 @date: 03/12/2025
 */

 //Headers
 #include <stdio.h>	
 // global variable defination
 int ole = 0;
 int ile = 0;
 // entry point function
 int main(void)
 {
    //code
    printf("Program Execution started\n");
    for(ole =0; ole < 5; ++ole)
    {
        for(ile =0; ile <= ole;++ile)
        {
            printf("%d",ile + 1);
        }
        printf("\n");
    }
    printf("program execution completed\n");
    return(0);
 }
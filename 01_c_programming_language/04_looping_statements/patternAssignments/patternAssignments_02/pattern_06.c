/*
 S.G.M.P
 @file: pattern_06.c
 @brief: Implementation of Following Pattern C
        *  *   *   *   *  *
        *  *   *   *   *  
        *  *   *   *  
        *  *   *   
        *  *
        *
 @authore: samarth pathare(samarthpathare@gmail)
 @copyright:02020-2025 Marshalling void
 @date: 03/12/2025
 */

 //Headers
 #include <stdio.h>	
 // global variable defination
 int ole =0;
 int ile =0;
 //entry point function
 int main(void)
 {
    // code
    printf("program execution started\n");
    for(ole = 0; ole <= 5; ++ole)
    {
        for(ile =5; ile >= ole; --ile)
        {
            printf("* ");
        }
        printf("\n");
    }
    printf("program execution completed\n");
    return(0);
 }
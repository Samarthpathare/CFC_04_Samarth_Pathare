/*
 S.G.M.P
 @file: pattern_13.c
 @brief: Implementation of Following Pattern C
 		 5 4 3 2 1
         5 4 3 2
         5 4 3
         5 4
         5
 @authore: samarth pathare(samarthpathare@gmail)
 @copyright:02020-2025 Marshalling void
 @date: 03/12/2025
 */

 //Headers
 #include <stdio.h>
 //global variable definition
 int ole = 0;
 int ile = 0;
 //entry point function
 int main(void)
 {
    //code
    printf("program execution started\n");
    for(ole =0; ole <5; ++ole)
    {
        for(ile =0; ile < (5 -ole);++ile)
        {
            printf("%d", 5 -ile);
        }
        printf("\n");
    }
    printf("program execution completed\n");
    return(0);
 }
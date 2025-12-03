/*
 S.G.M.P
 @file: pattern_15.c
 @brief: Implementation of Following Pattern C
 		 |
         | | 
         | | /
         | / _ _
         / _ _ _ _
 @authore: samarth pathare(samarthpathare@gmail)
 @copyright:02020-2025 Marshalling void
 @date: 03/12/2025
 */

 //Headers
 #include <stdio.h>
 //global variable definition
 int ole =0;
 int ile =0;
 //entry point funtion
 int main(void)
 {
    printf("Program execution started\n");
    for(ole = 0; ole < 5; ++ole)
    {
        for(ile = 0; ile < (5 - ole); ++ile)
        {
            if(ile == 0 && ole == 4)
                printf("/ ");
            else if(ile == ole)
                printf("/ ");
            else if(ile < ole)
                printf("| ");
            else
                printf("_ ");
        }
        printf("\n");
    }
    printf("program execution completed\n");
    return(0);
 }
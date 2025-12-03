/*
 S.G.M.P
 @file: pattern_09.c
 @brief: Implementation of Following Pattern C
 		 E D C B A 
         E D C B
         E D C 
         E D 
         E
 @authore: samarth pathare(samarthpathare@gmail)
 @copyright:02020-2025 Marshalling void
 @date: 03/12/2025
 */

 //Headers
 #include <stdio.h>
 //global variable defination
 int ole =0;
 int ile =0;
 // entry point function
 int main(void)
 {
    // code
    printf("program execution started\n");
    for(ole = 0; ole < 5; ++ole)
    {
        for(ile =0; ile < (5 - ole); ++ile)
        {
            printf("%c",'E' - ile);
        }
        printf("\n");
    }
    printf("program execution completed\n");
    return(0);
 }	
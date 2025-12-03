/*
 S.G.M.P
 @file: pattern_10.c
 @brief: Implementation of Following Pattern C
 		 A  A  A  A  A
         B  B  B  B
         C  C  C 
         D  D  
         E
 @authore: samarth pathare(samarthpathare@gmail)
 @copyright:02020-2025 Marshalling void
 @date: 03/12/2025
 */

 //Headers
 #include <stdio.h>
 // global variable definition
 int ile =0;
 int ole =0;
 //entry point function;
 int main(void)
 {
    // code
    printf("program execution started\n");
    for(ole = 0; ole < 5; ++ole)
    {
        for(ile =0; ile <(5 - ole); ++ile)
        {
            printf("%c", 'A' + ole);
        }
        printf("\n");
    }
    printf("program execution completed\n");
    return(0);
 }

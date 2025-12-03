/*
 S.G.M.P
 @file: pattern_08.c
 @brief: Implementation of Following Pattern C
 		 A B C D E 
         A B C D
         A B C
         A B
         A
 @authore: samarth pathare(samarthpathare@gmail)
 @copyright:02020-2025 Marshalling void
 @date: 03/12/2025
 */

 //Headers
 #include <stdio.h>	
 // Global variable definition
 int ole =0;
 int ile =0;
 // entry point function
 int main(void)
 {
    //code
    printf("program excution started\n");
    for(ole =0; ole < 5; ++ole)
    {
        for(ile =0; ile <(5 - ole); ++ile)
        {
            printf("%c",'A' + ile);
        }
        printf("\n");
    }
    printf("program execution completed\n");
    return(0);
 }

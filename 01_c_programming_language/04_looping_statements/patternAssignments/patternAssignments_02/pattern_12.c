/*
 S.G.M.P
 @file: pattern_12.c
 @brief: Implementation of Following Pattern C
 		 E E E E E
         D D D D 
         C C C
         B B
         A
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
    printf("program execution started\n");
    for(ole = 0; ole < 5; ++ole)
    {
        for(ile =0; ile < (5 - ole); ++ile)
        {
            printf("%c", 'E' - ole);
        }
        printf("\n");
    }
    printf("program execution completed\n");
    return(0);
}
/*
 S.G.M.P
 @file: pattern_04.c
 @brief: Implementation of Following Pattern C
 		 A
         B  B
         C  C   C
         D  D   D   D
         E  E   E   E   E
 @authore: samarth pathare(samarthpathare@gmail)
 @copyright:02020-2025 Marshalling void
 @date: 03/12/2025
 */

 //Headers
 #include <stdio.h>	
 // global variable defination
 int ole=0;
 int ile=0;
 char toPrintCharacter = 'A';
 // entry point function
 int main(void)
 {
    // code
    printf("program execution started\n");
    for(ole =0; ole < 5; ++ole)
    {
        for(ile =0; ile <= ole; ++ile)
        {
            printf("%c",toPrintCharacter);
        }
        toPrintCharacter = toPrintCharacter + 1;
        printf("\n");
    }
    printf("program execution completed\n");
    return(0);
 }
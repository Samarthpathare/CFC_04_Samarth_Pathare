/*
 S.G.M.P
 @file: pattern_03.c
 @brief: Implementation of Following Pattern C
    E   D   C   B   A 
    E   D   C   B   A
    E   D   C   B   A  
    E   D   C   B   A
    E   D   C   B   A
 @author: samarth pathare(samarthpathare19@gmail.com)
 @copyright: 02020-2025 Marshalling void
 @date: 03/12/2025
 */
//Headers
#include<stdio.h>
// global variable defination
int ole = 0;
int ile = 0;
char toPrintCharacter = 'E';
// entery point function
int main(void)
{
    // code
    printf("program execution startes\n");
    // output loop
    for(ole = 0; ole < 5; ++ole)
    {
        // Inner loop
        for(ile = 0; ile <  5; ++ile)
        {
        printf("%c", toPrintCharacter - ile);
        }
             printf("\n");
    }
    printf("program execution completed\n");
    // return statement
    return(0);
}
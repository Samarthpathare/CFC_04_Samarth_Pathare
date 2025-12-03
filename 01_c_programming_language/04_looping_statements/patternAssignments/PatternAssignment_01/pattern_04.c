/*
 S.G.M.P
 @file: pattern_04.c
 @brief: Implementation of Following Pattern C
        A   B   C   D   E
        A   B   C   D   E
        A   B   C   D   E
        A   B   C   D   E
        A   B   C   D   E
 @author: samarth pathare(samarthpathare19@gmail.com)
 @copyright: 02020-2025 Marshalling void
 @date: 03/12/2025
 */
//Header
#include<stdio.h>
//global variable defination
int ile=0;
int ole=0;
char toPrintCharacter ='A';
//enter point function
int main(void)
{
    // code
    printf("program execution started\n");
    // output loop
    for(ole =0; ole<5; ++ole)
    {
        // inner loop
        for(ile =0; ile<5; ++ile)
        {
            printf("%c",toPrintCharacter +ile);
        }
        printf("\n");
    }
    printf("program execution completed\n");
    // return statement
    return(0);
}
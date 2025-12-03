/*
 S.G.M.P
 @file: pattern_05.c
 @brief: Implementation of Following Pattern C
        E   E   E   E   E
        D   D   D   D   D
        C   C   C   C   C
        B   B   B   B   B
        A   A   A   A   A
 @author: samarth pathare(samarthpathare19@gmail.com)
 @copyright: 02020-2025 Marshalling void
 @date: 03/12/2025
 */
//Header
#include<stdio.h>
//global variable defination
int ile =0;
int ole =0;
char toPrintCharacter='E';
// enter point function
int main(void)
{
    // CODE
    printf("program execution started\n");
    // output loop
    for(ile =0; ile <5; ++ile)
    {
        for(ole =0; ole<5; ++ole)
        printf("%c",toPrintCharacter -ile);
        {
            printf("\n");
        }
    }
    // return statament
    return(0);
}
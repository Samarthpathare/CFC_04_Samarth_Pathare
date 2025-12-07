/*********************************************
 * S.G.M.P
 * @file: pattern_04.c
 * @brief: Implementation of the following Pattern
                        A
                    A   B   A
                A   B   C   B   A
            A   B   C   D   C   B   A
        A   B   C   D   E   D   C   B   A
 * @author: samarth pathare 
 * @date: 07/12/2025
 ************************************************/
#include<stdio.h>
// global variables
int ole =0;
int ile =0;
int sle =0;
int che;
// entry point function
int main(void)
{
    for(ole =0; ole< 5; ++ole)
    {
        for(sle = 4; sle > ole; --sle)
        {
            printf("    ");
        }
        // left side
        che ='A';
        for(ile =0; ile <=ole; ++ile)
        {
            printf("%c   ", che);
            che++;
        }
        // right side
        che -= 2;
        for(ile =0; ile < ole; ++ile)
        {
            printf("%c   ", che);
            che--;
        }
        printf("\n");
    }
    return(0);
}
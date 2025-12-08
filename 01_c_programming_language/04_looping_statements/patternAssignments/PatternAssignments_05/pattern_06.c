/*********************************************
 * S.G.M.P
 * @file: pattern_06.c
 * @brief: Implementation of the following Pattern
                        A
                    C   B   A
                E   D   C   B   A
            G   F   E   D   C   B   A
        I   H   G   F   E   D   C   B   A
 * @author: samarth pathare 
 * @date: 08/12/2025
 ************************************************/
#include <stdio.h>

// global variables
int ole =0;
int ile=0;
int sle =0;
char che;
// entry point function
int main(void)
{
    for(ole =0; ole < 5; ++ole)
    {
        // spacing 
        for(sle =4; sle > ole; --sle)
        {
            printf("    ");
        }
        // starting character 
        che = 'A' +(2 * ole);
        // decreasing sequence till 
        for(ile =0; ile <=ole * 2; ++ile)
        {
            printf("%c   ", che);
            che--;
        }
        printf("\n");
    }
    return(0);
}
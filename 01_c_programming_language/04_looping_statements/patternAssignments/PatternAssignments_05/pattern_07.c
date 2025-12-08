/*********************************************
 * S.G.M.P
 * @file: pattern_07.c
 * @brief: Implementation of the following Pattern
                        A
                    B   B   B
                C   C   C   C   C
            D   D   D   D   D   D   D
        E   E   E   E   E   E   E   E   E
 * @author: samarth pathare 
 * @date: 08/12/2025
 ************************************************/
#include <stdio.h>
// global variable
int ole =0;
int ile =0;
int sle =0;
char che;
// entry point function
int main(void)
{
    for(ole =0; ole < 5; ++ole)
    {
        for(ole =4; sle > ole; --sle)
        {
            printf("    ");
        }
        che ='A' + ole;
        //printing same character
        for(ile =0; ile <= ole * 2;++ile)
        {
            printf("%c   ", che);
        }
        printf("\n");
    }
    return(0);
}
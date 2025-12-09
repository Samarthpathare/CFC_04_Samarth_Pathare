/*********************************************
 * S.G.M.P
 * @file: pattern_06.c
 * @brief:
 * E   E   E   E   E   E   E   E   E
 *     D   D   D   D   D   D   D
 *         C   C   C   C   C
 *             B   B   B
 *                 A
 * @author: samarth pathare
 * @date: 09/12/2025
 ************************************************/
#include <stdio.h>
// global variable
int ole=0;
int ile=0;
int sle=0;
char che ='E';
// entry point function
int main(void)
{
    che ='E';
    for(ole =0; ole < 5; ++ole)
    {
        for(sle =0; sle < ole;++ sle)
        {
            printf("     ");
        }
        int count =9 - ole * 2;
        for(ile =0; ile < count; ++ile)
        {
            printf("%c    ", che);
        }
        che--; // next earlier alphabet
        printf("\n");
    }
    return(0);
}
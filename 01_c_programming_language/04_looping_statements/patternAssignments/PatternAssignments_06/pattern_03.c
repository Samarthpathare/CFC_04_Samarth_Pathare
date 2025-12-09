/*********************************************
 * S.G.M.P
 * @file: pattern_03.c
 * @brief:
 *                   A
 *               C   C   C
 *           E   E   E   E   E
 *       G   G   G   G   G   G   G
 *   I   I   I   I   I   I   I   I   I
 * @author: samarth pathare
 * @date: 09/12/2025
 ************************************************/
#include<stdio.h>
// global variable
int ole =0;
int ile =0;
int sle =0;
char che='A';
// entry point function
int main(void)
{
    for(ole =0;ole < 5; ++ole)
    {
        for(sle =4; sle > ole; --sle)
        {
            printf("     ");
        }
        che = 'A' + (2 * ole);
        for(ile =0; ile <= ole * 2; ++ile)
        {
            printf("%c    ",che);
        }
        printf("\n");

    }
    return(0);
}
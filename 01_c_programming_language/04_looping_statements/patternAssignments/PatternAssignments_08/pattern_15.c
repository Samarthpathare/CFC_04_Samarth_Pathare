/*********************************************
 * S.G.M.P
 * @file: pattern_15.c
 * @brief:
 *                     A
 *                 B        B
 *             C       C        C
 *         D       D        D       D
 *     E       E       E        E       E
 * @author: samarth pathare
 * @date: 20/12/2025
 ************************************************/
#include <stdio.h>
// global variables
int ole =0;
int ile =0;
int sle =0;
char che ='A';
// global variable
int main(void)
{
    for(ole =1; ole <=5; ole++)
    {
        for(sle =5; sle >ole; sle--)
        {
            printf("   ");
        }
        // print same alphabet
        for(ile =1; ile <= ole; ile++)
        {
            printf("%c     ",che);
        }
        che++;              // next alphabet
        printf("\n");
    }
    return(0);
}
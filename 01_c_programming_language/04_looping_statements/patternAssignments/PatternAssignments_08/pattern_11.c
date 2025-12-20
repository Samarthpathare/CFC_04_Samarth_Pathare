/*********************************************
 * S.G.M.P
 * @file: pattern_11.c
 * @brief:
 *     E       C       C       B       A
 *         D       C       B       A
 *             C       B       A
 *                 B       A
 *                     A
 * @author: samarth pathare
 * @date: 20/12/2025
 ************************************************/
#include <stdio.h>
//global variables
int ole =0;
int ile =0;
int sle =0;
char che;
// entry point function
int main(void)
{
    for(ole =5;ole > 0; ole--)
    {
        for(sle =5; sle > ole ; sle--)
        {
            printf("   ");
        }
        che ='A';
        // print alphabets from A onwards
        for(ile = 1; ile <= ole; ile ++)
        {
            printf("%c     ",che);
            che++;
        }
        printf("\n");
    } 
    return(0);
}
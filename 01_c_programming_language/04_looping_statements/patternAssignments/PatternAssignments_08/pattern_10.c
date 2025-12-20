/*********************************************
 * S.G.M.P
 * @file: pattern_10.c
 * @brief:
 *     E       C       C       B       A
 *         D       C       B       A
 *             C       B       A
 *                 B       A
 *                     A
 * @author: samarth pathare
 * @date: 19/12/2025
 ************************************************/
#include <stdio.h>
// global variables
int ole =0;
int ile =0;
int sle =0;
char che;
// entry point function
int main(void)
{
    for(ole =5; ole> 0; --ole)
    {
        for(sle = 5; sle > ole; --sle)
        {
            printf("   ");
        }
        che ='A' + ole - 1; // set starting alphabet for each row
        // print alphabets in reverse order
        for(ile = ole; ile > 0; --ile)
        {
            printf("%c     ",che);
            che--;
        }
        printf("\n");
    }
    return(0);
}
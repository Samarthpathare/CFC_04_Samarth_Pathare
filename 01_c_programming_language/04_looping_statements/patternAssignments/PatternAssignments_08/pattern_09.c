/*********************************************
 * S.G.M.P
 * @file: pattern_09.c
 * @brief:
 *                 1
 *            1          2
 *       1         2          3
 *   1        2          3         4
 * 1     2         3          4        5
 * 
 * @author: samarth pathare
 * @date: 18/12/2025
 ************************************************/
#include <stdio.h>
// global variables
int ole = 0;
int ile = 0;
int sle = 0;
// entry point 
int main(void)
{
    for(ole =1;ole <=5; ++ole)
    {
        for(sle = 5; sle > ole; sle--)
        {
            printf("   ");
        }
        //print numbers from 1 to ole
        for(ile = 1; ile <= ole; ile++)
        {
            printf("%d      ", ile);
        }
        printf("\n");
    }
    return(0);
}
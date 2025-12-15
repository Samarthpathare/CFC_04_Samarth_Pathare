/*********************************************
 * S.G.M.P
 * @file: pattern_09.c
 * @brief: Pattern No. 09
 * 5                               5
 *     4                       4
 *         3               3
 *             2       2
 *                 1
 * @author: samarth pathare
 * @date: 09/12/2025
 *********************************************/
#include<stdio.h>
// global variables 
int ole =0;
int ile =0;
int sle =0;
int num =5;
// entry point function
int main (void)
{
    for(ole =0; ole< 5; ++ole)
    {
        // left spacing
        for(sle =0; sle < ole ; ++sle)
        {
            printf("    ");
        }
        // first number
        printf("%d", num);
        // middle spacing
        for(ile =0; ile < (8 - 2 * ole ); ++ile)
        {
            printf("    ");
        }
        // second number (except last line)
        if(ole != 4)
        {
            printf("%d", num);
        }
        num--;
        printf("\n");
    }
    return(0);
}
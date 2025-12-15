/*********************************************
 * S.G.M.P
 * @file: pattern_08.c
 * @brief: Pattern No. 08
 *             *
 *         *           *
 *     *                   *
 * *                           *
 * *                               *
 * @author: samarth pathare
 * @date: 09/12/2025
 *********************************************/
#include<stdio.h>
// global variables
int ole =0;
int ile =0;
int sle =0;
// entry point function
int main (void)
{
    for(ole =0; ole < 5; ++ole)
    {
        // left spacing
        for(sle =0; sle <(4 - ole); ++sle)
        {
            printf("    ");
        }
        // frist star
        printf("*");
        // middle spacing 
        for(ile =0; ile < (ole * 2); ++ile)
        {
            printf("    ");
        }
        // second star
        if(ole !=0)
        {
            printf("*");
        }
        printf("\n");
    }
    return(0);
}
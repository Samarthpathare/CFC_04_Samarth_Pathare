/*********************************************
 * S.G.M.P
 * @file: pattern_05.c
 * @brief: Pattern No. 05
 *                1
 *           2           2
 *        3                  3
 *    4                         4
 * 5                               5
 * @author: samarth pathare
 * @date: 09/12/2025
 *********************************************/
#include<stdio.h>
// global variables
int ole =0;
int ile =0;
int sle =0;
int num =1;
// entry point function
int main(void)
{
    for(ole =0; ole < 5; ++ole)
    {
        for(sle =0; sle <(4 - ole); ++ sle)
        {
            printf("    ");
        }
        // first number
        printf("%d", num);
        // middle spacing
        for(ile =0; ile < (ole * 2); ++ile)
        {
            printf("    ");
        }
        // second number
        if(ole != 0)
        {
            printf("%d", num);
        }
        num++;
        printf("\n");
    }
    return(0);
}


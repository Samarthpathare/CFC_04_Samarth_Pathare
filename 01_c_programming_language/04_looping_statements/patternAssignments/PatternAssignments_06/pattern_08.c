/*********************************************
 * S.G.M.P
 * @file: pattern_08.c
 * @brief:
 *                   1
 *               2   2   2
 *           3   3   3   3   3
 *       4   4   4   4   4   4   4
 *   5   5   5   5   5   5   5   5   5
 * @author: samarth pathare
 * @date: 09/12/2025
 ************************************************/
#include <stdio.h>
// global variable
int ole =0;
int ile =0;
int sle =0;
int num =1;
// entry point function
int main(void)
{
    num =1;
    for(ole =0; ole < 5; ++ole)
    {
        for(sle =4; sle > ole; --sle)
        {
            printf("    ");
        }
        for(ile =0; ile <= ole * 2; ++ile)
        {
            printf("%d   ", num);
        }
        num++;
        printf("\n");
    }
    return(0);
}
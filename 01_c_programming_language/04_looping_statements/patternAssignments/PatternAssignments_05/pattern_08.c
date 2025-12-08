/*********************************************
 * S.G.M.P
 * @file: pattern_08.c
 * @brief: Implementation of the following Pattern
                        1
                    3   3   3
                5   5   5   5   5
            7   7   7   7   7   7   7
        9   9   9   9   9   9   9   9   9
 * @author: samarth pathare 
 * @date: 08/12/2025
 ************************************************/
#include <stdio.h>
// global variables
int ole =0;
int ile =0;
int sle =0;
int num =1;
// entry point function
int main (void)
{
    for(ole =0; ole < 5; ++ole)
    {
        for(sle =4; sle > ole; -- sle)
        {
            printf("    ");
        }
        for( ile =0; ile <= ole * 2; ++ile)
        {
            printf("%d   ",num);
        }
        num += 2;
        printf("\n");
    }
    return(0);
}
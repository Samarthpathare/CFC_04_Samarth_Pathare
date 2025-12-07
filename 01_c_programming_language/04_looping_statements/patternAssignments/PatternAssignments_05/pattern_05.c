/*********************************************
 * S.G.M.P
 * @file: pattern_05.c
 * @brief: Implementation of the following Pattern
                        1
                    1   2   1
                1   2   3   2   1
            1   2   3   4   3   2   1
        1   2   3   4   5   4   3   2   1
 * @author: samarth pathare 
 * @date: 07/12/2025
 ************************************************/
#include<stdio.h>
// global variable'
int ole =0;
int ile =0;
int sle =0;
int num;
// entry point function
int main(void)
{
    for(ole =0; ole < 5; ++ole)
    {
        for(sle =4; sle > ole; -- sle)
        {
            printf("    ");
        }
        // left side
        num =1;
        for(ile =0; ile <= ole; ++ile)
        {
            printf("%d   ", num);
            num++;
        }
        // right side
        num -= 2;
        for(ile =0; ile < ole; ++ile)
        {
            printf("%d   ",num);
        }
        printf("\n");
    }
    return(0);
}
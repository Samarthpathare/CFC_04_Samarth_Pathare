/*********************************************
 * S.G.M.P
 * @file: pattern_10.c
 * @brief: Implementation of the following Pattern
5   5   5   5   5   5   5   5   5
    4   4   4   4   4   4   4
        3   3   3   3   3
            2   2   2
                1
 * @author: samarth pathare 
 * @date: 07/12/2025
 ************************************************/
#include<stdio.h>
// global variables
int ole =0;
int ile =0;
int sle =0;
int num =5;
// entry point function
int main(void)
{
    for(ole =0; ole < 5; ++ole)
    {
        for( sle =0; sle < ole; ++sle)
        {
            printf("   ");
        }
        for(ile =0; ile < (9 - ole * 2); ++ile)
        {
            printf("%d  ",num);
        }
        num--;
        printf("\n");
    }
    return(0);
}
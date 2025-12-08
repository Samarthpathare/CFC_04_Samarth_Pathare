/*********************************************
 * S.G.M.P
 * @file: pattern_09.c
 * @brief: Implementation of the following Pattern
                        1
                    1   2   3
                1   2   3   4   5
            1   2   3   4   5   6   7
        1   2   3   4   5   6   7   8   9
 * @author: samarth pathare 
 * @date: 08/12/2025
 ************************************************/
#include <stdio.h>
//global variable
int ole =0;
int ile =0;
int sle =0;
int num;
// entry point function
int main(void)
{
    for(ole =0; ole < 5; ++ole)
    {
        for(sle =4; sle > ole; --sle)
        {
            printf("    ");
        }
        num = 1;
        for(ile =0; ile <=ole * 2; ++ile)
        {
            printf("%d   ", num);
            num++;
        }
        printf("\n");
    }
    return(0);
}

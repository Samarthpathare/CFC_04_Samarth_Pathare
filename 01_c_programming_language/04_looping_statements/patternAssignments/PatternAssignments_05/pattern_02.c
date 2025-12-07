/*********************************************
 * S.G.M.P
 * @file: pattern_02.c
 * @brief: Implementation of the following Pattern
                        *
                    *   *   *
                *   *   *   *   *
            *   *   *   *   *   *   *
        *   *   *   *   *   *   *   *   *
 * @author: samarthpathare 
 * @date: 07/12/2025
 ************************************************/
#include <stdio.h>
//global variable 
int ole =0;
int ile =0;
int sle =0;
// entry point function
int main(void)
{
    for(ole =0; ole < 5; ++ole)
    {
        for(sle =4; sle > ole; --sle)
        {
            printf("    ");
        }
        for(ile =0; ile <=ole *2; ++ile)
        {
            printf("*   ");
        }
        printf("\n");
    }
    return(0);
}
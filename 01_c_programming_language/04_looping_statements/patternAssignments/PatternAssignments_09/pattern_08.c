/*********************************************
 * S.G.M.P
 * @file: pattern_08.c
 * @brief:
 *   *   *   *   *   *   *   *   *   *
     *   *   *   *           *   *   *
     *   *   *                   *   *
     *   *                           *
     *                               * 
 * @author: samarth pathare
 * @date: 28/12/2025
 ************************************************/
// header
#include<stdio.h>
// global variable defination
int ole =0;
int ile =0;
int sle =0;
// entry point function
int main(void)
{
    // total columns
    for (ole =1; ole <= 5; ole++)
    {
        for (ile =1; ile <= 9; ile++)
        {
            // print star on left side
            if (ile <= (6 - ole))
            {
                printf("*     ");
            }
            // print star on right side
            else if (ile > (3 + ole))
            {
                printf("*     ");
            }
            // print space in middle
            else
            {
                printf("      ");
            }
        }
        printf("\n");
    }
    return(0);
}
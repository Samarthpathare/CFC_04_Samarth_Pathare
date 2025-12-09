/*********************************************
 * S.G.M.P
 * @file: pattern_07.c
 * @brief:
 * *   *   *   *   *   *   *   *   *
 *     *   *   *   *   *   *   *
 *         *   *   *   *   *
 *             *   *   *
 *                 *
 * @author: samarth pathare
 * @date: 09/12/2025
 ************************************************/
#include <stdio.h>
// global variable 
int ole =0;
int ile =0;
int sle =0;
// entry point function
int main(void)
{
    int total =9;
    for(ole =0; ole < 5; ++ole)
    {
        for(sle =0; sle < ole; ++sle)
        {
            printf("    ");
        }
        for(ile =0;ile < (total - ole * 2); ++ile)
        {
            printf("*   ");
        }
        printf("\n");
    }
    return(0);
}
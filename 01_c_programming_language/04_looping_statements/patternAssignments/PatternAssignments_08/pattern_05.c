/*********************************************
 * S.G.M.P
 * @file: pattern_05.c
 * @brief:
 *                     *
 *                 *       *
 *             *               *
 *         *                       *
 *     *                               *
 *         *                       *
 *             *               *
 *                 *       *
 *                     *
 * @author: samarth pathare
 * @date: 14/12/2025
 ************************************************/
#include <stdio.h>
// global variables
int ole =0;
int ile =0;
int sle =0;
// global variable
int main(void)
{
    // upper part
    for(ole =0; ole < 5; ole++)
    {
        // leading spaces
        for(sle =4; sle > ole; sle--)
        {
            printf("    ");
        }
        // left star
        printf("*");
        // middle spaces and right and right star
        if(ole > 0)
        {
            for(ile =0;ile <(ole * 2 - 1) * 4; ++ile)
            {
                printf(" ");
            }
            printf("*");
        }
        printf("\n");
    }
    // lower part
    for(ole = 4; ole> 0; ole--)
    {
        for(sle = 5; sle > ole; --sle)
        {
            printf("    ");
        }
        //left star
        printf("*");
        // middle spaces and right star
        if(ole > 1)
        {
            for(ile =0; ile < (ole * 2 -3) * 4; ile++)
            {
                printf(" ");
            }
            printf("*");
        }
        printf("\n");
    }
    return(0);
}
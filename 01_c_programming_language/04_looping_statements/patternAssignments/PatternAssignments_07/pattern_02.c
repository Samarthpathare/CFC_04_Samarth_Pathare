/*********************************************
 * S.G.M.P
 * @file: pattern_02.c
 * @brief:
 *     *                               *
 *         *                       *
 *             *               *
 *                 *       *
 *                     *
 * @author: samarth pathare
 * @date: 10/12/2025
 ************************************************/
#include <stdio.h>
// global variable 
int ole =0;
int sle =0;
int ile =0;
// entry point function 
int main(void)
{
    for(ole =0; ole < 5; ++ole)
    {
        for(sle =0; sle < ole ; ++sle)
        {
            printf("    ");
        }
        // first star
        printf("*");
        // middle spacing
        for(ile = 0; ile < (8 - 2 * ole); ++ile)
        {
            printf("    ");
        }
        // second star (except last line)
        if(ole != 4)
        {
            printf("*");
        }
        printf("\n");
    }
    return(0);
}
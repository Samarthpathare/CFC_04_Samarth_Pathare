/*********************************************
 * S.G.M.P
 * @file: pattern_08.c
 * @brief:
 *     *       *       *       *       *
 *         *       *       *       *
 *             *       *       *
 *                 *       *
 *                     *
 * @author: samarth pathare
 * @date: 17/12/2025
 ************************************************/
#include <stdio.h>
// global variables
int ole =0;
int ile =0;
int sle =0;
//entry point function
int main(void)
{
    for(ole =5; ole > 0; ole--)
    {
        for(sle =5; sle > ole; sle--)
        {
            printf("    ");
        }
        //print stars
        for(ile = 1; ile <= ole; ile++)
        {
            printf("*       ");
        }
        printf("\n");
    }
    return(0);
}
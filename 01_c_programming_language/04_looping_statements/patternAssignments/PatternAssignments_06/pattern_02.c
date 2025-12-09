/*********************************************
 * S.G.M.P
 * @file: pattern_02.c
 * @brief:
 *                  0
 *               1  0  1
 *            2  1  0  1  2
 *         3  2  1  0  1  2  3
 *      4  3  2  1  0  1  2  3  4
 * @author: samarth pathare
 * @date: 09/12/2025
 ************************************************/
#include <stdio.h>
// global variable
int ole =0;
int ile =0;
int sle =0;
int val =0;
// entry point function
int main(void)
{
    for(ole =0; ole < 5; ++ole)
    {
        for(sle = 4;sle > ole; --sle)
        {
            printf("    ");
        }
        for(ile =ole; ile > 0; --ile)
        {
            printf("%d   ",ile);
        }
        // center 0
        printf("0   ");
        for(ile =1;ile <=ole; ++ile)
        {
            printf("%d   ",ile);
        }
        printf("\n");
    }
    return(0);
}
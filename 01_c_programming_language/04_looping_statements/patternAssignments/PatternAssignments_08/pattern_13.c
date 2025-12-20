/*********************************************
 * S.G.M.P
 * @file: pattern_13.c
 * @brief:
 *     E       C       C       B       A
 *         D       C       B       A
 *             C       B       A
 *                 B       A
 *                     A
 * @author: samarth pathare
 * @date: 20/12/2025
 ************************************************/
#include <stdio.h>
// global variable
int ole = 0;
int ile =0;
int sle =0;
int num =5;
// entry point function
int main(void)
{
    for(ole = 5; ole > 0; ole--)
    {
        for(sle = 5 ; sle > ole; sle--)
        {
            printf("    ");
        }
        // print same number
        for (ile = 1 ; ile <= ole; ile ++)
        {
            printf("%d       ", num);
        }
        num--;       // decrease number
        printf("\n");
    }
    return(0);
}
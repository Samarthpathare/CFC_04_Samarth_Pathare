/*********************************************
 * S.G.M.P
 * @file: pattern_06.c
 * @brief:
 *                    1
 *              2            2
 *         3          3           3
 *     4         4          4          4
 * 5       5          5           5         5   
 *       
 * @author: samarth pathare
 * @date: 15/12/2025
 ************************************************/
#include <stdio.h>
// global variables
int ole =0;
int ile =0;
int sle =0;
int num =1;
//entry point function
int main(void)
{ 
    for(ole = 1; ole <= 5; ++ole)
    {
        for(sle =5; sle > ole; sle--)
        {
            printf("   ");
        }
        // print number
        for(ile = 1; ile <= ole; ++ile)
        {
            printf("%d     ", num);
        }
        num++;          // next number
        printf("\n");
    }
    return(0);
}
/*********************************************
 * S.G.M.P
 * @file: pattern_01.c
 * @brief: 
 *       9   9   9   9   9   9   9   9   9
 *           7   7   7   7   7   7   7
 *               5   5   5   5   5
 *                   3   3   3
 *                       1
 * @author: samarth pathare
 * @date: 09/12/2025
 ****************************************************/
#include <stdio.h>
// global variables
int ole =0;
int ile =0;
int sle =0;
int num =0;
// entry point function
int main(void)
{
    int start =9;
    num = start;
    for(ole =0;ole < 5; ++ole)
    {
        // spacing increases each row
        for(sle =0; sle <ole; ++sle)
          {
            printf("    ");
          }
        // print same odd number
        for(ile =0; ile <(9 - ole*2); ++ile)
        {
            printf("%d   ",num);
        }
        num -=2;
        printf("\n");
    }
    return(0);
}

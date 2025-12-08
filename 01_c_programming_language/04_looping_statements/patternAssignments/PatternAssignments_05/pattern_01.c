/*********************************************
 * S.G.M.P
 * @file: pattern_01.c
 * @brief: Implementation of the following Pattern
                        1
                    3   2   1
                5   4   3   2   1
            7   6   5   4   3   2   1
        9   8   7   6   5   4   3   2   1
 * @author: samarth pathare 
 * @date: 06/12/2025
 ************************************************/
#include <stdio.h>
//global variable
int ole= 0;
int ile=0;
int sle = 0;
int num =1;
int temp;
// entry point function
int main(void)
{
    for(ole= 0; ole < 5; ++ole)
    {
        for(sle = 4; sle > ole; --sle)
        {
            printf("   ");
        }
        temp = num; //starting number of the row
        // print number
        for(ile = temp; ile >= 1; --ile)
        {
            printf("%d  ",ile);
        }
        num += 2;
        printf("\n");
    }
    return(0);
}
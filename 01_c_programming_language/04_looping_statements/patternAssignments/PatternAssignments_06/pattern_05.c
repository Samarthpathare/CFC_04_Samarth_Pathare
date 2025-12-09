/*********************************************
 * S.G.M.P
 * @file: pattern_05.c
 * @brief:
 * 1   2   3   4   5   6   7   8   9
 *     1   2   3   4   5   6   7
 *         1   2   3   4   5
 *             1   2   3
 *                 1
 * @author: samarth pathare
 * @date: 09/12/2025
 ************************************************/
#include <stdio.h>
// global variable 
int ole =0;
int ile =0;
int sle =0;
int num;
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
        int count = total - ole * 2;
        for(num =1, ile =0; ile < count; ++ile, ++num)
        {
            printf("%d   ",num);
        }
        printf("\n");
    }
    return(0);
}
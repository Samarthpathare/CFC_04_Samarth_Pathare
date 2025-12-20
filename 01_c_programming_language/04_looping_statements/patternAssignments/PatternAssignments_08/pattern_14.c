/*********************************************
 * S.G.M.P
 * @file: pattern_14.c
 * @brief:
 *     5       4       3       2       1
 *         4       3       2       1
 *             3       2       1
 *                 2       1
 *                     1
 * @author: samarth pathare
 * @date: 20/12/2025
 ************************************************/
#include <stdio.h>
// global variable
int ole = 0;
int ile =0;
int sle =0;
int num;
// entry point 
int main(void)
{
    for(ole =5; ole > 0; --ole)
    {
        for(sle =5; sle > ole; --sle)
        {
            printf("    ");
        }
        num = ole;
        // print  number in decrasing order
        for(ile = ole; ile> 0; ile--)
        {
            printf("%d       ",num);
            num--;
        }
        printf("\n");
    }
    return(0);
}
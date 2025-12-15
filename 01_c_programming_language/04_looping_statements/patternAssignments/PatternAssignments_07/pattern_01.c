/*********************************************
 * S.G.M.P
 * @file: pattern_01.c
 * @brief:
 *                     5
 *                 4       4
 *             3              3
 *         2                     2
 *     1                            1
 * @author: samarth pathare
 * @date: 10/12/2025
 ************************************************/
#include <stdio.h>
// global variable
int ole = 0;
int ile = 0;
int sle = 0;
int num  = 5;
//entry point function
int main (void)
{
    for(ole = 0; ole < 5; ++ole)
    {
        for(sle = 0; sle <(4- ole); ++sle)
        {
            printf("    ");
        }
        // first number
        printf("%d", num);
        // middle spacing
        for(ile =0; ile < (ole * 2 ); ++ile)
        {
            printf("    ");
        }
        // second number
        if(ole!= 0)
        {
            printf("%d", num);
        }
        num--;
        printf("\n");
    }
    return(0);

}



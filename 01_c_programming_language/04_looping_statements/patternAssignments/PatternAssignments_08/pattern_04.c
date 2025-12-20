/*********************************************
 * S.G.M.P
 * @file: pattern_04.c
 * @brief:
 *                     5
 *                 4       4
 *             3               3
 *         2                       2
 *     1                               1
 *         2                       2
 *             3               3
 *                 4       4
 *                     5
 * @author: samarth pathare
 * @date: 13/12/2025
 ************************************************/
#include <stdio.h>
// global variables
int ole =0;
int ile =0;
int sle =0;
int num =5;
//entry point function
int main(void)
{
    int num =5;
    //upper part
    for(ole =0; ole < 5; ole++)
    {
        // leading spaces
        for(sle =4;sle > ole; sle--)
        {
            printf("    ");
        }
        // left number
        printf("%d",num);
        // middle spaces and right number
        if(ole > 0)
        {
            for(ile =0; ile <(ole * 2 - 1)* 4; ile++)
            {
                printf(" ");
            }
            printf("%d", num);
        }
        num--;          // previous number
        printf("\n");
    }
    // lower part
    num =2;
    for(ole =4; ole > 0; ole--)
    {
        for(sle =5; sle > ole; sle--)
        {
            printf("   ");
        }
        // left number
        printf("%d",num);
        // middle spaces and right number
        if(ole > 1)
        {
            for(ile = 0; ile <(ole * 2 - 3) *4; ++ile)
            {
                printf(" ");
            }
            printf("%d",num);
        }
        num++;      //next number
        printf("\n");
    }
    return(0);
}
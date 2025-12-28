/*********************************************
 * S.G.M.P
 * @file: pattern_07.c
 * @brief:
 *              1
            1       2
        1       2       3
    1       2       3       4
        1       2       3
            1       2
                1
 * @author: samarth pathare
 * @date: 28/12/2025
 ************************************************/
// header
#include<stdio.h>
// global variable defination
int ole =0;
int ile =0;
int sle =0;
// entry point function
int main(void)
{
    for (ole =1; ole <= 4; ole++)
    {
        for(sle =4; sle > ole; sle--)
        {
            printf("    ");
        }
        // print number from 1
        for (ile =1; ile <= ole; ile++)
        {
            printf("%d       ",ile);
        }
        printf("\n");
    }
    // lower part 
    for(ole =3; ole >= 1; ole--)
    {
        for(sle =4; sle > ole; sle--)
        {
            printf("    ");
        }
        // print numbers 
        for(ile =1; ile <= ole; ile++)
        {
            printf("%d       ", ile);
        }
        printf("\n");
    }
    return(0);
}
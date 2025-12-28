/*********************************************
 * S.G.M.P
 * @file: pattern_03.c
 * @brief:
 *
                1
            1       2
        1       2       3
    1       2       3       4
        2       3       4
            3       4
                4        
 * @author: samarth pathare
 * @date: 23/12/2025
 ************************************************/
// header
#include<stdio.h>
// global variable defination
int ile = 0;
int ole =0;
int sle =0;
int num =0;
//entry point function
int main(void)
{
    for(ole = 1; ole <= 4; ole++)
    {
        for(sle = 4; sle > ole; sle--)
        {
            printf("  ");
        }
        num = 1;
        // print numbers
        for(ile = 1; ile <= ole; ile++)
        {
            printf("%d   ", num);
            num++;
        }
        printf("\n");
    }
    for(ole =3; ole >=1; ole--)
    {
        for(sle =4; sle > ole; sle--)
        {
            printf("  ");
        }
        num = 5 - ole;
        // print number
        for(ile = 1; ile <= ole; ile++)
        {
            printf("%d   ", num);
            num++;
        }
        printf("\n");
    }
    return(0);
}

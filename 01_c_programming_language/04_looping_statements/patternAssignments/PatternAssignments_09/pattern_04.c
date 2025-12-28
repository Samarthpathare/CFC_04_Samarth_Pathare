/*********************************************
 * S.G.M.P
 * @file: pattern_04.c
 * @brief:
 *              1
            2       2
        3       3       3
    4       4       4       4
        3       3       3
            2       2
                1
                     
 * @author: samarth pathare
 * @date: 24/12/2025
 ************************************************/
// header
#include<stdio.h>
// global variable defination
int ile =0;
int ole =0;
int sle =0;
int num =1;
// entry point function
int main(void)
{
    for(ole = 1; ole <=4; ole++)
    {
        for(sle =4; sle > ole; sle--)
        {
            printf("   ");
        }
        // print same number
        for(ile =1; ile <= ole; ile++)
        {
            printf("%d     ", num);
        }
        num++;     // increase number
        printf("\n");
    }
    num = 3;
    for(ole =3; ole >= 1; ole--)
    {
        for(sle =4; sle > ole; sle--)
        {
            printf("   ");
        }
        // print same number
        for(ile =1; ile <= ole; ile++)
        {
            printf("%d     ",num);
        }
        num--;    // decrease number
        printf("\n");
    }
    return(0);
}
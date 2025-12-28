/*********************************************
 * S.G.M.P
 * @file: pattern_02.c
 * @brief:
 *
                A
            B       B
        C       C       C
    D       D       D       D
        C       C       C
            B       B
                A             
 * @author: samarth pathare
 * @date: 22/12/2025
 ************************************************/
// header
#include<stdio.h>
//global variable 
int ole =0;
int ile =0;
int sle =0;
char che ='A';
// global variable
int main(void)
{
    for(ole =1; ole <= 4; ole++)
    {
        // leading spaces
        for(sle = 4; sle > ole; sle--)
        {
            printf("    ");
        }
        // print same alphabet
        for(ile = 1; ile <= ole; ile++)
        {
            printf("%c       ", che);
        }
        che++;     // next alphabet
        printf("\n");
    }
    che = 'C';
    for(ole =3; ole >= 1; ole--)
    {
        for(sle =4; sle > ole; sle--)
        {
            printf("    ");
        }
        //print same alphabet
        for(ile =1; ile <= ole; ile++)
        {
            printf("%c       ",che);
        }
        che--;       // previous alphabet
        printf("\n");
    }
    return(0);
}
/*********************************************
 * S.G.M.P
 * @file: pattern_05.c
 * @brief:
 *              A
            A       B
        A       B       C
    A       B       C       D
        B       C       D
            C       D
                D
                     
 * @author: samarth pathare
 * @date: 25/12/2025
 ************************************************/
// header
#include<stdio.h>
// global variable defination
int ile =0;
int ole =0;
int sle =0;
char che=0;
// entry point function
int main(void)
{
    for(ole =1; ole <= 4; ole++)
    {
        for(sle =4; sle > ole; sle--)
        {
            printf("   ");
        }
        che = 'A';
        // print alphabets
        for(ile =1; ile <= ole; ile++)
        {
            printf("%c     ",che);
            che++;
        }
        printf("\n");
    }
    che = 'B';
    for(ole =3; ole >=1; ole--)

    {
        for(sle =4; sle > ole; sle--)
        {
            printf("   ");
        }
        // print alphabets
        for (ile =1; ile <= ole; ile++)
        {
            printf("%c     ", che);
            che++;
        }
        printf("\n");
    }
    return(0);
}
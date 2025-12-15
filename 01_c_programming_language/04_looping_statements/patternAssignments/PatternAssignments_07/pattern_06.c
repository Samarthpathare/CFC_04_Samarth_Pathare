/*********************************************
 * S.G.M.P
 * @file: pattern_06.c
 * @brief: Pattern No. 06
 *                 A  
 *             B        B
 *          C               C
 *       D                      D
 *    E                            E
 * @author: samarth pathare
 * @date: 09/12/2025
 *********************************************/
#include<stdio.h>
// global variables
int ole =0;
int ile =0;
int sle =0;
char che = 'A';
// entry point function
int main(void)
{
    for(ole =0; ole <5; ++ole)
    {
        // left spacing
        for(sle =0; sle <(4 - ole); ++sle)
        {
            printf("    ");
        }
        // first character
        printf("%c", che);
        // middle character
        for(ile  =0; ile < (ole * 2); ++ile)
        {
            printf("    ");
        }
        // second character
        if(ole !=0)
        {
            printf("%c", che);
        }
        che++;
        printf("\n");
    }
    return(0);
}
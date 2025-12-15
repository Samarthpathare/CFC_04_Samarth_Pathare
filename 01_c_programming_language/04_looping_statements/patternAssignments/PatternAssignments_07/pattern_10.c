/*********************************************
 * S.G.M.P
 * @file: pattern_10.c
 * @brief: Pattern No. 10
 * E                               E
 *     D                       D
 *         C               C
 *             B       B
 *                 A
 * @author: samarth pathare
 * @date: 09/12/2025
 *********************************************/
#include<stdio.h>
// global varibale 
int ole =0;
int ile =0;
int sle =0;
char che = 'E';
// entry point function
int main(void)
{
    for(ole = 0; ole < 5; ++ole)
    {
        //left spacing 
        for(sle =0; sle < ole ; ++sle )
        {
            printf("    ");
        }
        // first charcter
        printf("%c", che);
        //middle character
        for(ile =0; ile <(8 -2 * ole); ++ile)
        {
            printf("    ");
        }
        // second character(except last line)
        if(ole !=4)
        {
            printf("%c", che);
        }
        che--;
        printf("\n");
    }
    return(0);
}
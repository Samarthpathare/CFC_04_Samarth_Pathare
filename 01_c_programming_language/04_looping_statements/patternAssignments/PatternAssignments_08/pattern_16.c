/*********************************************
 * S.G.M.P
 * @file: pattern_16.c
 * @brief:
 *                        A
 *                    A       B
 *                A       B       C
 *             A      B       C       D
 *         A       B      C       D       E
 * @author: samarth pathare
 * @date: 20/12/2025
 ************************************************/
#include <stdio.h>
// global variables
int ole =0;
int ile =0;
int sle =0;
// entry point function
int main(void)
{
    char che;
    for(ole =1; ole <=5; ole++)
    {
        for(sle = 5; sle > ole; sle--)
        {
            printf("    ");
        }
        che = 'A';
        // print alphabets from A onwards
        for(ile =1; ile <= ole; ile++)
        {
            printf("%c       ",che);
            che++;
        }
        printf("\n");
    }
    return(0);
}
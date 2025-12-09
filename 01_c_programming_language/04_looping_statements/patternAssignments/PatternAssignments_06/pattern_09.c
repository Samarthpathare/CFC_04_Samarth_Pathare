/*********************************************
 * S.G.M.P
 * @file: pattern_09.c
 * @brief:
 *                   A
 *               A   B   C
 *           A   B   C   D   E
 *       A   B   C   D   E   F   G
 *   A   B   C   D   E   F   G   H   I
 * @author: samarth pathare
 * @date: 09/12/2025
 ************************************************/
#include <stdio.h>
// global variable
int ole =0;
int ile =0;
int sle =0;
char che;
// entry point function
int main(void)
{
    for(ole =0; ole < 5; ++ole)
    {
        for(sle =4; sle > ole; --sle)
        {
            printf("    ");
        }
        int limit =ole * 2 +1;
        che ='A';
        for(ile =0; ile < limit; ++ile)
        {
            printf("%c   ",che);
            che++;
        }
        printf("\n");
    }
    return(0);
}
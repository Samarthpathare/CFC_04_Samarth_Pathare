/*********************************************
 * S.G.M.P
 * @file: pattern_04.c
 * @brief:
 * A   B   C   D   E   F   G   H   I
 *     A   B   C   D   E   F   G
 *         A   B   C   D   E
 *             A   B   C
 *                 A
 * @author: samarth pathare
 * @date: 09/12/2025
 ************************************************/
#include<stdio.h>
// global variable
int ole =0;
int ile =0;
int sle =0;
char che;
// entry point function
int main(void)
{
    int total = 9;
    for(ole =0; ole < 5; ++ole)
    {
        for(sle =0; sle < ole; ++sle)
        {
            printf("    ");
        }
        int count = total - ole * 2;
        che ='A';
        for(ile =0; ile< count; ++ile)
        {
            printf("%c   ", che);
            che++;
        }
        printf("\n");
    }
    return(0);
}
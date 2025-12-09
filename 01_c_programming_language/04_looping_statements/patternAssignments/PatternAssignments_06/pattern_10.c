/*********************************************
 * S.G.M.P
 * @file: pattern_10.c
 * @brief:
 * I   I   I   I   I   I   I   I   I
 *     G   G   G   G   G   G   G
 *         E   E   E   E   E
 *             C   C   C
 *                 A
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
    che ='I';
    for(ole =0; ole < 5; ++ole)
    {
        for(sle =0; sle <ole ; ++sle)
        {
            printf("     ");
        }
        int count =9 - ole *2;
        for(ile =0; ile < count ; ++ile)
        {
            printf("%c    ", che);
        }
        che -= 2;
        printf("\n");
    }
    return(0); 
}
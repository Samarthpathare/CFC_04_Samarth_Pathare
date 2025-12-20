/*********************************************
 * S.G.M.P
 * @file: pattern_07.c
 * @brief:
 *   E       E       E       E       E
 *       D       D       D       D
 *           C       C       C
 *               B       B
 *                    A
 * @author: samarth pathare
 * @date: 16/12/2025
 ************************************************/
#include <stdio.h>
// global variable 
int ole = 0; 
int ile =0;
int sle =0;
char che ='E';
//entry point function
int main(void)
{
    for(ole = 5; ole > 0; --ole)
    {
        for(sle = 5; sle > ole; sle--)
        {
            printf("    ");
        }
        // print alphabets
        for(ile =1; ile <= ole; ile++)
        {
            printf("%c       ", che);
        }
        che--;      // move to previous alphabet
        printf("\n");
    }
    return(0);
}
/*********************************************
 * S.G.M.P
 * @file: pattern_07_p3.c
 * @brief:
 *                     E
 *                 D       D
 *             C              C
 *         B                     B
 *     A                            A
 * @author: samarth pathare
 * @date: 10/12/2025
 ************************************************/
#include <stdio.h>
// global variable
int ole =0;
int sle =0;
int ile =0;
char che ='E';
// entry point function
int main(void)
{
    che ='E';
    for(ole =0; ole < 5 ; ++ole)
    {    
        // left spacing
        for(sle =0; sle <(4 - ole); ++sle)
        {
            printf("   ");
        }
        // first character
        printf("%c", che);
        for(ile = 0; ile < (ole * 2); ++ile)
        {
            printf("   ");
        }
        // second character (except first line)
        if(ole != 0)
        {
          printf("%c", che);
        }
        che--;
        printf("\n");

    }
    return(0);
}

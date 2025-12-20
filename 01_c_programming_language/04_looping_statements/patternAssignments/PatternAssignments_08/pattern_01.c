/*********************************************
 * S.G.M.P
 * @file: pattern_01.c
 * @brief:
 *                     A
 *                 B       B
 *             C               C
 *         D                       D
 *     E                               E
 *         D                       D
 *             C               C
 *                 B       B
 *                     A
 * @author: samarth pathare
 * @date: 11/12/2025
 ************************************************/
#include <stdio.h>

// global variables
int ole = 0;
int ile =0;
int sle = 0;
char che ='A';

// entry point
int main(void)
{
    // upper part
    for(ole = 0; ole < 5; ole++)
    {
        for(sle  = 4; sle > ole; sle--)
        {
            printf("   ");
        }
        //left character
        printf("%c", che);
        //middle spaces and right character
        if(ole > 0)
        {
            for(ile = 0; ile < (ole * 2 - 1) * 4; ile++)
            {
                printf(" ");
            }
            printf("%c",che);
        }
        che++;            // next alphabet
        printf("\n");
    }
    // lower part
    che ='D';
    for(ole =4;ole > 0; ole--)
    {
        for(sle = 5; sle > ole; sle--)
        {
            printf("   ");
        }
        // left character
        printf("%c", che);
        // middle spaces and right character
        if(ole > 1)
        {
            for(ile = 0; ile < (ole * 2 - 3)* 4; ile++)
            {
                printf(" ");
            }
            printf("%c", che);
        }
        che--;          // previous alphabet
        printf("\n");
    }
    return(0);
}
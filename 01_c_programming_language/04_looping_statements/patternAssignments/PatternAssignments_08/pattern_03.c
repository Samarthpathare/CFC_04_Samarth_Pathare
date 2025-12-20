/*********************************************
 * S.G.M.P
 * @file: pattern_03.c
 * @brief:
 *                     E
 *                 D       D
 *             C               C
 *         B                       B
 *     A                               A
 *         B                       B
 *             C               C
 *                 D       D
 *                     E
 * @author: samarth pathare
 * @date: 13/12/2025
 ************************************************/
#include <stdio.h>
//globla variables
int ole =0;
int ile =0;
int sle =0;
char che = 'E';
// entry point fuction
int main(void)
{
    //upper part
    for(ole =0; ole < 5; ole++)
    {
        //leading spaces
        for(sle =4; sle > ole; sle--)
        {
            printf("   ");
        }
        // left character
        printf("%c", che);
        // middle spaces and right character
        if(ole > 0)
        {
            for(ile =0;ile <(ole * 2 - 1) * 4; ile++)
            {
                printf(" ");
            }
            printf("%c",che);
        }
        che--;         // move to previous alphabet
        printf("\n");
    }
    // lower part
    che ='B';
    for(ole = 4; ole > 0; ole--)
    {
        //leading spaces
        for(sle =5; sle > ole; sle--)
        {
            printf("   ");
        }
        // left character
        printf("%c",che);
        // middle spaces and right character
        if(ole > 1)
        {
            for(ile =0; ile < (ole * 2 - 3) * 4; ile++)
            {
                printf(" ");
            }
            printf("%c",che);
        }
        che++;          // move to next alphabet
        printf("\n");
    }
    return(0);
}

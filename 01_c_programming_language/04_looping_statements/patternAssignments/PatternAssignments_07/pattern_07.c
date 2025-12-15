/*********************************************
 * S.G.M.P
 * @file: pattern_07.c
 * @brief: Pattern No. 07
 * A                               A
 *     B                       B
 *         C               C
 *             D       D
 *                 E
 * @author: samarth pathare
 * @date: 09/12/2025
 *********************************************/
#include<stdio.h>
// global variable 
int ole =0; 
int ile =0;
int sle =0;
char che ='A';
// entry point fuction
int main(void)
{
    for(ole =0; ole < 5; ++ole)
    {
        // left spacing 
        for(sle =0; sle < ole ; ++sle)
        {
            printf("    ");
        }
        // first character
        printf("%c", che);

        // middle spacing 
        for(ile =0; ile <( 8 - 2 * ole);++ ile )
        {
            printf("    ");
        }
        // second character (except last line)
        if(ole != 4)
        {
            printf("%c", che);
        }
        che++;
        printf("\n");
    }
    return(0);

}
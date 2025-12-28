/*********************************************
 * S.G.M.P
 * @file: pattern_01.c
 * @brief:
 *
                *            
            *       *
        *       *       *
    *       *       *       *
        *       *       *
            *       *
                *                      
 * @author: samarth pathare
 * @date: 21/12/2025
 ************************************************/
// header
#include<stdio.h>
//global variable 
int ole =0;
int ile =0;
int sle =0;
//entry point function
int main(void)
{
    for(ole = 1; ole <=4; ole++)
    {
        for(sle =4; sle > ole; sle--)
        {
            printf("     ");
        }
        //print stars
        for(ile =1; ile <= ole; ile++)
        {
            printf("*        ");
        }
        printf("\n");
    }
    // lower part
    for(ole = 3; ole >=1; ole--)
    {
        for(sle =4; sle > ole; sle--)
        {
            printf("     ");
        }
        //print stars
        for(ile =1; ile <=ole; ile++)
        {
            printf("*        ");
        }
        printf("\n");
    }
    return(0);
}
/*********************************************
 * S.G.M.P
 * @file: pattern_08.c
 * @brief: Implementation of the following Pattern
                        *
                     *  *
                  *  *  *
            *  *  *  *  *
               *  *  *  *
                  *  *  *
                     *  *
                        *
 * @author: samarth pathare (samarthpathare19@gmail.com)
 * @Copyright 02020-2025 Marshallingvoid
 * @date: 05/12/2025
 ************************************************/
#include<stdio.h>
// global variable defination
int ole =0;
int ile =0;
// entry point function
int main(void)
{
    for(ile =0; ole < 5; ++ole)
    {
        for(ile =0; ile <4- ole; ++ile)
            printf("\t");
        for(ile =0; ile <= ole; ++ile)
            printf("*\t");
        printf("\n");
    }
    for(ole = 3; ole >= 0; -- ole)
    {
        for(ile =0; ile <4 -ole; ++ile)
            printf("\t");
        printf("\n");
    }
    return(0);
}
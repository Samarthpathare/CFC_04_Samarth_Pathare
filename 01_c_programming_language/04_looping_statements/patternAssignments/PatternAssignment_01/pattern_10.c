/*
 S.G.M.P
 @file: pattern_10.c
 @brief: Implementation of Following Pattern C
            1   1   1   1   1
            A   B   C   D   E
            *   *   *   *   *
            A   B   C   D   E
            1   1   1   1   1
 @author: samarth pathare(samarthpathare19@gmail.com)
 @copyright: 02020-2025 Marshalling void
 @date: 03/12/2025
 */
//Header
#include<stdio.h>
//global variable defination
int ole = 0;
int ile = 0;
//enter point function
int main(void)
{
    printf("program execution started\n");
    for(ole =0; ole < 5; ++ole)
    {
        for(ile =0; ile < 5; ++ile)
        {
            if(ole == 0 || ole == 4)
                printf("%d", 1);
            else if(ole == 2)
                printf("*");
            else
                printf("%c", 'A' + ile);
        }
        printf("\n");
    }
    printf("program execution completed\n");
    return(0);
}
/*
 S.G.M.P
 @file: pattern_06.c
 @brief: Implementation of Following Pattern C
        1   1   1   1   1
        2   2   2   2   2
        3   3   3   3   3
        4   4   4   4   4
        5   5   5   5   5
 @author: samarth pathare(samarthpathare19@gmail.com)
 @copyright: 02020-2025 Marshalling void
 @date: 03/12/2025
 */
//Header
#include<stdio.h>
//global variable defination
int ole = 0;
int ile =0;
//enter point function
int main(void)
{
    // code
    printf("program execution started\n");
    // output loop
    for(ole =0; ole <5; ++ole)
    {
        // inner loop
        for(ile =0; ile <5; ++ile)
        {
            printf("%d", 5 - ile);
        }
        printf("\n");
    }
    printf("Program execution completed\n");
    return(0);
}
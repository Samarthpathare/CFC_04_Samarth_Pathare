/*********************************************
 * S.G.M.P
 * @file: pattern_06.c
 * @brief:
 *  A   B   C   D   E   F   G   F   E   D   C   B   A
    A   B   C   D   E   F       F   E   D   C   B   A
    A   B   C   D   E               E   D   C   B   A
    A   B   C   D                       D   C   B   A
    A   B   C                               C   B   A
    A   B                                       B   A
    A                                               A
  
 * @author: samarth pathare
 * @date: 27/12/2025
 ************************************************/
// header
#include<stdio.h>
// global variables 
int ole =0;
int sle =0;
int ile =0;
char che =0;
// entry point function
int main(void)
{
    for(ole =7; ole >= 1; ole--)
    {
        // left increasing alphabets
        che ='A';
        for(ile = 1; ile <= ole; ile++)
        {
            printf("%c   ", che);
            che++;
        }
        // middle spaces
        for(sle =1; sle <= (7 - ole) * 2; sle++)
        {
            printf("    ");
        }
        // right decreasing alphabets
        che = 'A' + ole - 1;
        for(ile = ole; ile >= 1; ile--)
        {
            printf("%c   ",che);
            che--;
        }
        printf("\n");
    }
    return(0);
}
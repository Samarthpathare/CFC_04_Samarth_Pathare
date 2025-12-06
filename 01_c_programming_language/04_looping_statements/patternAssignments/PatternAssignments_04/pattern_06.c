/***********************************
 * S.G.M.P
 * @file: pattern_06.c
 * @brief: Implementation of the following pattern
                                 A
                              B  B
                          C   C  C
                       D  D   D  D
                    E  E  E   E  E
  * @authore: samarth pathare (samarthpathare19@gmail.com)
  * @copyright 02020-2025 Marshallingvoid
  * @date: 06/12/2025
  **************************************/
 // Headers
 #include<stdio.h>
 // global variable declaration
 int ole =0;
 int ile =0;
 int sle =0;
 char ch = 'A';
 // entry point function
 int main(void)
 {
    for(ole =0; ole<5; ++ole)
    {
        for(sle =4; sle > ole; --sle)
        {
            printf("\t");
        }
        // print characters
        for(ile =0; ile <= ole; ++ile)
        {
            printf("%c\t", (ch + ole));
        }
        printf("\n");
    }
    return(0);
 }
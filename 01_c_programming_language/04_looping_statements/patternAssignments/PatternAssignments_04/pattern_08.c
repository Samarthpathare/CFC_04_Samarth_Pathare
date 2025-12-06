/***********************************
 * S.G.M.P
 * @file: pattern_08.c
 * @brief: Implementation of the following pattern
                A B C D E 
                  A B C D
                    A B C
                      A B
                        A
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
 char che;
 // entry point function
 int main(void)
 {
    for(ole =0; ole<5; ++ole)
    {
        for(sle =0; sle < ole; ++sle)
        {
            printf("\t");
        }
        // print charaters
        che = 'A';
        for(ile =0; ile < (5 - ole); ++ile)
        {
            printf("%c\t",(che + ile));
        }
        printf("\n");
    }
    return(0);
 }
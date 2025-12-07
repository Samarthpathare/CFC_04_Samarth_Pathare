/***********************************
 * S.G.M.P
 * @file: pattern_10.c
 * @brief: Implementation of the following pattern
                E E E E E 
                  D D D D
                    C C C
                      B B
                        A
  * @authore: samarth pathare (samarthpathare19@gmail.com)
  * @copyright 02020-2025 Marshallingvoid
  * @date: 05/12/2025
  **************************************/
 // Headers
 #include<stdio.h>
 // global variable declaration
 int ole =0;
 int ile =0;
 int sle =0;
 char che ='E';
 // entry point function
 int main(void)
 {
    for(ole =0; ole < 5; ++ole)
    {
        // print space
        for (sle = 0; sle < ole; ++sle)
        {
            printf("\t");
        }
        // print characters
        for(ile =0; ile < (5 - ole); ++ile)
        {
            printf("%c\t",(che - ole));
        }
        printf("\n");
    }
    return(0);
 }
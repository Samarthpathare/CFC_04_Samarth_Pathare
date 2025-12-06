/***********************************
 * S.G.M.P
 * @file: pattern_04.c
 * @brief: Implementation of the following pattern
                              A
                            A B
                          A B C
                        A B C D
                      A B C D E
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
    for(ole =0; ole < 5; ++ole)
    {
        for(sle = 4; sle > ole; --sle)
        {
            printf("\t");
        }
        che ='A';
        for(ile =0; ile <=ole; ++ile)
        {
            printf("%c\t",(che + ile));
        }
        printf("\n");
    }
    return(0);
 }
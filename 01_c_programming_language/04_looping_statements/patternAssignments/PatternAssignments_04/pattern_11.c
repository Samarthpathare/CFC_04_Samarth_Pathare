/***********************************
 * S.G.M.P
 * @file: pattern_11.c
 * @brief: Implementation of the following pattern
                * * * * * 
                  * * * *
                    * * *
                      * *
                        *
  * @authore: samarth pathare (samarthpathare19@gmail.com)
  * @copyright 02020-2025 Marshallingvoid
  * @date: 07/12/2025
  **************************************/
 // Headers
 #include<stdio.h>
 // global variable declaration
 int ole =0;
 int ile =0;
 int sle =0;
 // entry point function
 int main(void)
 {
    for(ole =0; ole < 5; ++ole)
    {
        for(sle =0; sle < ole; ++ sle)
        {
            printf("\t");
        }
        for(ile =0; ile <(5 - ole); ++ile)
        {
            printf("*\t");
        }
        printf("\n");
    }
    return(0);
 }
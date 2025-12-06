/***********************************
 * S.G.M.P
 * @file: pattern_10.c
 * @brief: Implementation of the following pattern
                5 5 5 5 5 
                  4 4 4 4
                    3 3 3
                      2 2
                        1
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
 // entry point function
 int main(void)
 {
    for(ole =0; ole < 5; ++ole)
    {
        // print spaces
        for (sle =0; sle < ole; ++sle)
      {
        printf("\t");
      }
      //print number
       for(ile =0; ile < (5 - ole); ++ile)
       {
          printf("%d\t",(5 - ole));
       }
       printf("\n");
    }
    return(0);
 }
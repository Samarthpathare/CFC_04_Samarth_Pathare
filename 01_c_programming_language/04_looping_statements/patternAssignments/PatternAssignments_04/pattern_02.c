/***********************************
 * S.G.M.P
 * @file: pattern_02.c
 * @brief: Implementation of the following pattern
                 1 1 1 1 1  
                 2 2 2 2 
                 3 3 3
                 4 4
                 5
  * @authore: samarth pathare (samarthpathare19@gmail.com)
  * @copyright 02020-2025 Marshallingvoid
  * @date: 06/12/2025
  **************************************/
 // Headers
 #include<stdio.h>
 // global variable declaration
 int ole =0;
 int ile =0;
 // entry point function
 int main(void)
 {
    for(ole =0; ole < 5; ++ole)
    {
       for(ile = 4; ile >= ole; --ile)
       {
        printf("%d\t",(ole + 1));
       } 
       printf("\n");
    }
    return(0);
 }
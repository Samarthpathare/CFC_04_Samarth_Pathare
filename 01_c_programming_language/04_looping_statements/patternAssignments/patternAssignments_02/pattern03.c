/*
 S.G.M.P
 @file: pattern_03.c
 @brief: Implementation of Following Pattern C
            1
            2   2
            3   3   3   
            4   4   4   4
            5   5   5   5   5
 @authore: samarth pathare(samarthpathare@gmail)
 @copyright:02020-2025 Marshalling void
 @date: 03/12/2025
 */

 //Headers
 #include <stdio.h>
 // global variable defination
 int ole =0;
 int ile =0;
 // entry point function
 int main(void)
 {
    //code
    printf("Program execution started\n");
    for(ole=0; ole <5; ++ole)
    {
        for(ile = 0; ile <= ole; ++ile)
        {
            printf("%d",ole + 1);
        }
        printf("\n");   
    }   
      printf("program execution completed\n");
      return(0);
}
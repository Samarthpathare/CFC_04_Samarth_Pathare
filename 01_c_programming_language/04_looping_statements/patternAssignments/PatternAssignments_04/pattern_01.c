/***********************************
 * S.G.M.P
 * @file: pattern_01.c
 * @brief: Implementation of the following pattern
                D
                D C
                D C B
                D C B A
                D C B
                D C
                D
  * @authore: samarth pathare (samarthpathare19@gmail.com)
  * @copyright 02020-2025 Marshallingvoid
  * @date: 05/12/2025
  **************************************/
 // Headers
 #include<stdio.h>
 // global variable declaration
 int ole =0;
 int ile =0;
 // entry point function
 int main(void)
{
    for(ole =0; ole < 4; ++ole)
    {
        for(ile =0; ile <=ole; ++ile)
        {
            printf("%c\t",('D') - ile);
        }
        printf("\n");
    }
    for(ole = 1; ole <= 3; ++ole)
    {
        for(ile =0; ile <=(3 -ole); ++ile)
        {
            printf("%c\t",('D') -ile);
        }
        printf("\n");
    }
    return(0);
}
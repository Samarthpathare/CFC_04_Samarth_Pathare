/*
 S.G.M.P
 @file: pattern_14.c
 @brief: Implementation of Following Pattern C
 		 \ # # # # # 
         $ \ # #
         $ $ \
         $ $
         $
 @authore: samarth pathare(samarthpathare@gmail)
 @copyright:02020-2025 Marshalling void
 @date: 03/12/2025
 */

 //Headers
 #include <stdio.h>
 //global variable definition
 int ole =0;
 int ile =0;
 // enter point fuction
 int main(void)
 {
    printf("program execution started\n");
    for(ole = 0; ole < 5; ++ole)
    {
        for(ile =0; ile < (5 - ole); ++ile)
        {
            if(ile == ole)
                printf("\\");
            else if(ile < ole)
                printf("$ ");
            else
                printf("# ");
        }
        printf("\n");
    }
    printf("program execution completed\n");
    return(0);
 }
/*********************************************
 * S.G.M.P
 * @file: pattern_01.c
 * @brief: Implementation of the following Pattern
			3
			2 3
			1 2 3
			0 1 2 3
			1 2 3
			2 3
			3
 * @author: samarth pathare (samarthpathare19@gmail.com)
 * @Copyright 02020-2025 Marshallingvoid
 * @date: 24/08/2025
 ************************************************/

 // Headers 
 #include <stdio.h>
 // global variable defination
 int ole =0;
 int ile =0;
 // entry point function
 int main(void)
 {
    for(ole = 0; ole < 5; ++ole)
    {
        for(ile = 0; ile <= ole; ++ile)
        {
            if(ole == 1 || ole == 3) // reverse rows
                printf("%d\t", (ole - ile + 1));
            else
                printf("%d\t",(ile + 1));
        }
        printf("\n");
    }
    for(ole =3; ole >= 0; --ole)
    {
        for(ile =0; ile <= ole; ++ile)
      {
         if(ole == 1 || ole == 3)
            printf("%d\t",(ole - ile + 1));
         else
            printf("%d\t",(ile + 1));
      }
         printf("\n");
    }
    return(0);
 }
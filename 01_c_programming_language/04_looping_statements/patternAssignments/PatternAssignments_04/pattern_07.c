/***********************************
 * S.G.M.P
 * @file: pattern_07.c
 * @brief: Implementation of the following pattern
                1 2 3 4 5 
                  1 2 3 4
                    1 2 3
                      1 2
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
 int arr[4][4]= {
                     {1,2,4,8},
                     {7,5,1,2},
                     {4,8,7,5},
                     {1,2,4,8}  
                };
 // entry point function
 int main(void)
 {
    for (ole =0; ole < 4; ++ole)
    {
        for(ile =0; ile <4; ++ile)
        {
            printf("%d\t", arr[ole][ile]);
        }
        printf("\n");
    }
    return(0);
 }
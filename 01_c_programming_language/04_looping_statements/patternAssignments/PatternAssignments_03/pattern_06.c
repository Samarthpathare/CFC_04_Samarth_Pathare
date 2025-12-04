/*********************************************
 * S.G.M.P
 * @file: pattern_06.c
 * @brief: Implementation of the following Pattern
                          D
                       C  D
                    B  C  D
                 A  B  C  D
                    B  C  D
                       C  D
                          D
 * @author: samarth pathare (samarthpathare19@gmail.com)
 * @Copyright 02020-2025 Marshallingvoid
 * @date: 04/12/2025
 ************************************************/

 // Headers 
 #include <stdio.h>
 // global varible definition
 int ole = 0;
 int ile =0;
 int main(void)
 {
    for(ole = 0; ole < 4; ++ole)
    {
        for(ile = 0; ile < 3 - ole; ++ile)
            
                printf("\t");
            
        for(ile =0; ile <= ole; ++ile)
        
            printf("%c\t",('D' - ole)+ ile);
        
        printf("\n");
    }
    for(ole = 2; ole >=0; --ole)
    {
        for(ile =0; ile < 3 - ole; ++ile)
            printf("\t");
        for(ile = 0; ile <= ole; ++ile)
        
            printf("%c\t",('D' - ole) + ile);
        
        printf("\n");
    }
    return(0);
 }
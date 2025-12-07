/*********************************************
 * S.G.M.P
 * @file: pattern_03.c
 * @brief: Implementation of the following Pattern
                        A
                    B   A   B
                C   B   A   B   C
            D   C   B   A   B   C   D
        E   D   C   B   A   B   C   D   E
 * @author: samarthpathare 
 * @date: 07/12/2025
 ************************************************/
#include <stdio.h>
 // global variable
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
            printf("    ");
        }
        // left side decreasing characters
        che ='A' + ole;         // starting alphabet of row
        for(ile =0; ile < ole; ++ ile)
        {
            printf("%c   ", che);
            che--;
        }
        // center A
        printf("A    ");
        // right side increasing characters
        che ='B'; // starts from B after center
        for(ile =0; ile < ole; ++ile)
        {
            printf("%c   ",che);
            che++;
        }
    
        printf("\n");
    }
        return(0);
}


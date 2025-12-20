/*********************************************
 * S.G.M.P
 * @file: pattern_02.c
 * @brief:
 *                     1
 *                 2       2
 *             3               3
 *         4                       4
 *     5                               5
 *         4                       4
 *             3               3
 *                 2       2
 *                     1
 * @author: samarth pathare
 * @date: 12/12/2025
 ************************************************/
#include <stdio.h>
// global variables
int ole = 0;   // outer loop
int ile = 0;   // inner loop
int sle = 0;   // space loop
int num = 1;
int main()
{

    // Upper Part
    for (ole = 0; ole < 5; ole++)
    {
        // leading spaces
        for (sle = 4; sle > ole; sle--)
        {
            printf("    ");
        }

        // left number
        printf("%d", num);

        // middle spaces and right number
        if (ole > 0)
        {
            for (ile = 0; ile < (ole * 2 - 1) * 4; ile++)
            {
                printf(" ");
            }
            printf("%d", num);
        }

        num++;            // next number
        printf("\n");
    }

    // lower part
    num = 4;

    for (ole = 4; ole > 0; ole--)
    {
        // leading spaces
        for (sle = 5; sle > ole; sle--)
        {
            printf("    ");
        }

        // left number
        printf("%d", num);

        // middle spaces and right number
        if (ole > 1)
        {
            for (ile = 0; ile < (ole * 2 - 3) * 4; ile++)
            {
                printf(" ");
            }
            printf("%d", num);
        }

        num--;            // previous number
        printf("\n");
    }

    return 0;
}

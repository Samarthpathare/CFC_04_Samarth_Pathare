// Header
#include <stdio.h>

// global variable definiton

int year = 1900;

// entry point function

 int main (void)
 {
 	// code
 	 if (year % 100 == 0)
 	 {
 	 	printf("%d is a century year\n", year);
 	 }
 	 else
 	 {
 	 	printf ("%d is not a century year \n", year);
 	 }
 	 return(0);
 }
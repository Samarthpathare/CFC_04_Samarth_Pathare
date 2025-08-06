// Header
#include <stdio.h>

// Global variable definition
int a = 5 ,b = 5, c = 8;

// Entry point function
int main (void)
{
	// code
	if ( a == b && b == c)
	{
		printf (" The triangle is equilareral.\n")
	}
	else if ( a == b || b == c || a == c)
	{
		printf ("the triangle is Isosceles.\n");
	}
	else 
	{
		printf(" the triangle is scalene.\n");
	}

	return(0);
}
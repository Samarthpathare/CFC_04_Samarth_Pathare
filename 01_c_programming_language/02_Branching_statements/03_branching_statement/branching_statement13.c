// Header

#include <stdio.h>

// Global veriable definition

int a = 10, b = 20, c = 15;

// entry point function

int main (void)
{
	// code
	
	if (a >= b && a >= c)
	{
		// True block 01
		printf ("the largest number is : %d\n",a);
	}
	else if (b >= a && b >= c)
	{
		// true block 02
		printf (" the largest number is : %d\n",b);
	}
	else
	{
		// flase block 
		printf ("the largest number is %d\n", c);
	}

	return(0);
}
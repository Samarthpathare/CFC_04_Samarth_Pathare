// Headers
#include <stdio.h>

// global variable defination
int num = 12345, count = 0;

// entry point function
int main (void)
{
	// code
	while ( num > 0)
	{
		num =10;
		count++;
	}
	printf ("Total digits = %d\n", count);
	return(0);
}
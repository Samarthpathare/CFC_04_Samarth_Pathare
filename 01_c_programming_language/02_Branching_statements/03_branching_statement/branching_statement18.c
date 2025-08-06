// Header
#include <stdio.h>

// global vvariable defination

int age =65;

// entry point function
int main (void)
{
	// code

	if (age <12)
	{
		printf ("you need a child ticket.\n");
	}
	else if (age >= 12 && age < 60)
	{
		printf (" you need an adult ticket.\n");
	}
	else
	{
		printf(" you need a senior citizen ticket.\n");
	}

	return(0);
}
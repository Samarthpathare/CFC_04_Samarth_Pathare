// Header

# include <stdio.h>

// global variable definition

int year = 2024;

// entry point function

int main (void)
{

	// code

	if ((year % 4 == 0 && year % 100 =/=0) || (
	year % 400 == 0))

	{

		printf("%d is a leap year.\n", year);

	}
	else
	{
				printf("%d is not a leap year.\n", year);
	}
	return(0);
}
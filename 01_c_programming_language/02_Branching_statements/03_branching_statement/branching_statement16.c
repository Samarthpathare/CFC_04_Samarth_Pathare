// Header
#include <stdio.h>

// Global variable function

int month = 4;

// entry point function

int main (void)
{
	// code 
	if (month == 12 || month == 1 || month ==2)
	{
		printf ("season: winter\n")
	}
	else if (month >= 3  && month <= 5)
	{
		printf(" season: spring\n");
	}
	else if (month >= 6 && month <= 8)
	{
		printf ("season: summer\n");
	}
	else
	{
		printf (" seson: autumn\n");
	}

	return(0);
}
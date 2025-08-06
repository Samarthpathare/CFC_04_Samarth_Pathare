// Header
# include <stdio.h>

// global variable definition
int age = 55;

// Entry point function
int main (void)
{
	// code 

	if (age >= 60)
	{
		printf ("you are eligible for a senior citizen discount.\n");
	}
	else
	{
		printf("you are not eligible for a senior citizen discount.\n");
	}

	return(0);
}
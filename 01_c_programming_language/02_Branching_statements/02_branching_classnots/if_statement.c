// headers 

 #include <stdio.h>
 
// constants and macros

# define RED    1

# define GREEN  2

# define BLUE   3
		
		// global variable definitions 

		int icolor =0;

		// Entry point function

		int main (void)
{
	// code

	printf("program Execution started\n");

	// if Branching startement

		if (RED == icolor)
	{
		printf ("color is RED\n");
	}
		if (GREEN == icolor)
	{
		printf ("color is GREEN\n");
	}
		if (BLUE == icolor)
	{
		printf ("color is BLUE\n");
	}
		// END statmrnt

		printf ("program execution completed\n");

	return (0);
}
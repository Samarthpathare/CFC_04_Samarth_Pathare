// headers 

	#include <stdio.h>

// constant and macros 

	#define RED 1

	#define GREEN 2

	#define BLUE 3

//globle variable defination

	int icolor = 0;

//entry point funtion

	int main(void)
{
	//code 

	printf ("program execution started\n");

// if branching statement

	if (RED == icolor)

	{
		//true block 1

		printf ("colore is RED\n");

	}
		else if (GREEN == icolor)

	{
		//true block 2

		printf ("color is GREEN\n");

	}
		else if (BLUE == icolor)

	{
		//true block 3

		printf ("color is BLUE\n");

	}
		else
	{
		//flase block

		printf ("color is not BLUE\n");

	}	

		//End statement

		printf ("program execution is completed\n");

		return(0);

}
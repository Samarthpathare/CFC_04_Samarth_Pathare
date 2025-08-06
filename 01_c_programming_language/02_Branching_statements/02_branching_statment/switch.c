//Headers 

	#include <stdio.h> 

// constants and macros

	#define RED 1

	#define GREEN 2

	#define BLUE 3

// global veriable definations

	int icolor = 3; 

// Entry point function

	int main (void)

{
	//code
	printf (" program execution started\n");

	switch (icolor)

	{
		case RED :

		printf("color is RED\n");

		break;

			case GREEN :

		printf ("color is GREEN\n");

		break;
				case BLUE :

		printf ("color is BLUE\n");

		break;

		default:

		printf ("no color present\n");

		break;

	}
		//End statement

		printf ("program execution complited\n");

		return (0);

}
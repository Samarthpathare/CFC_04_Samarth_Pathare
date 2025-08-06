// Headers
#include <stdio.h>

// global variable Definition 

int angle1 = 60, angle2 = 60, angle3 = 60;

// entry point function

int main (void)
{
	// code 

	if (angle1 + angle2 + angle3 == 180)
	{
		printf (" the angle foem a valid triangle.\n");
	}
	else
	{
		printf(" the angles do not form a valid triangle.\n");
	}
	return(0);
}
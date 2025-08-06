// header

#include <stdio.h>

// global variable defination

int num = 5, fact= 1, le =1;

// Entry point function

int main (void)

{
	// code

	while (le <= num)

	{
	
		fact *= le;

		le++;
	}
	
	printf("factorial = %d\n", fact);
	
	return(0);
}

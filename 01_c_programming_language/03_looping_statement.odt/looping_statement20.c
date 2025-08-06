// Headers 
#include <stdio.h>

// global variable definition
int num = 12345, reversed = 0;
// entry point function
int main (void)
{
	// code 
	while (num > 0)
	{
		reversed = reversed * 10 + num %10;
		num /= 10;
	}
	printf (" Reversed Number = %d\n", reversed);
	return (0);
}
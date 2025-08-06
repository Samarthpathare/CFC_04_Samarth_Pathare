// headers

#include <stdio.h>

// global variable defination

int num = 5, fact = 1;

// Entry point function

int main (void)
{
		//code
		for (int le =1; le<= num; le++)
	{
		fact *=le;
	}
		printf ("Factorial = %d\n", fact);
		
		return(0);
}
// Header
#include <stdio.h>
 
// global variable definition

char ch = 'G'

// entry point function
int main (void)
{
		// code 
		if (ch >='A' && ch<='Z')
		{
			printf ("The character is an uppercase letter.\n");
		}
		else if (ch >= 'a' && ch <= 'z')
		{
			printf (" the character is a lowercase letter.\n");
		}
		else if (ch >= '0' && ch <= '9')
		{
			printf ("the character is a digit.\n");
		}
		else
		{
			printf ("the character is a special symbol.\n");
		}

		return (0);
}

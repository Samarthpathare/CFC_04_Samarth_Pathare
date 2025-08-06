// Header
#include <stdio.h>

// Global variable definition

char ch = 'E';

// Entry point function
int main (void)
{
	// code
	
	if (ch =='A' || ch == 'E' || ch== 'I'|| ch == '0' || ch == 'u' || ch =='a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' )
	{
		printf ("%c is a vowel.\n", ch);
	} 
	else
	{
		printf ("%c is a consonant.\n", ch);
	}
	return (0);
}
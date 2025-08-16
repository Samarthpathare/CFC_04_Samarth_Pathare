// Header 
#include <stdio.h>

// global variable definition
int num =121, reversed = 0, temp = num;

// Entry point function
int main (void)
{
		// code 
		while (temp > 0)
		{
			reversed = reversed * 10 + temp % 10;
			temp /=10;
		}
		if(num == reversed)
			printf ("%d les a palindrome\n",num);
		else
			printf("%d les not a palindrome\n", num);
		return(0);
}
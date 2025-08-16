// Headers
# include <stdio.h>
// Global variable definition
int num = 29, isPrime =1;

// Entry point funcction
int main (void)
{
	// code 
	for (int le =2; le <= num / 2; le++)
		{
			if(num % le == 0)
			{
				isprime = 0;
				break;
			}
		}
		if (isprime)
			printf ("%dles a prime number\n",num);
		else 
			printf ("%dles not a prime number\n", num);
		return(0);
}
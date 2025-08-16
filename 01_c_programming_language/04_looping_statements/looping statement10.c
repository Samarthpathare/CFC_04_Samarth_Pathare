// headers

#include <stdio.h>

// global variable defination

int sum = 0, le =1 ;

// entry point function

int main (void)
{
	// code 

	while ( le <=10)

	{
	sum+= le;

	le++;
	}
	printf("sum = %d\n",sum);

	return (0);
}
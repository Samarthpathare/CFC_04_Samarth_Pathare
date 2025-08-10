// headers 

#include <stdio.h>

// global variable defination

int sum=0;

//entry point function

int main (void)

{
	//code

	for(int le=1; le<=10;le++)

	{
		sum += le;
	}
	printf("sum=%d\n",sum);

	return(0);
}

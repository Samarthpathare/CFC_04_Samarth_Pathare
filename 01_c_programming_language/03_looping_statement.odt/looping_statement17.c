// Headers 
#include <stdio.h>

// global variable definition
int n =10 , t1 = 0, t2 =1, nextTerm, le =1;

// Entry point function
int main (void)
{
	// code
	while (le <=n)
	{
		printf("%d", t1);
		nextTerm = t1 + t2;
		t1 = t2;
		t2 = nextTerm;
		le++;
	}
	return(0);
}
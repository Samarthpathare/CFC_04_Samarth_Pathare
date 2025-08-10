// headers 
#include <stdio.h>

// glodal variable fubction
int n =10, t1=0, t2=1, nextTerm;

// Entry point function
 int main (void)
 {
 	// code
 	for (int le =1; le <= n; le++)
 	{
 		printf ("%d", t1);
 		nextTerm = t1 + t2;
 		t1 = t2;
 		t2 = nextterm;
 	}
 	return(0);
 }
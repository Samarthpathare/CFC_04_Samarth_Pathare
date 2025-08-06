 // Headers

 	# include <stdio.h>

 // constant and macros 

 	#define RED 1 

 	#define GREEN 2

 	#define BLUE 3 

 // global variable Definition 

 	int icolor = 0;

 //Entery point function 

 	int main (void)
 {

 	//code 

 	printf ("program execution started\n");

 	// if Branching startement 

 if (RED == icolor)

 {
 	//true block 

 	printf ("color is RED\n");
 }
 else

 {
 	//false block

 	printf ("color is not RED\n");
 }

 if( GREEN == icolor)

 {
 	// True block

 	printf ("color is GREEN\n");
 } 
 else

 {
 	//flase block 

 	printf ("color is not GREEN\n");
 }
 if (BLUE == icolor)

 {
	 //true block 

	 printf ("color is BLUE\n");

 }
 else
 {
 	// Flase block 

 	printf ("color is not BLUE\n");
 }
 	// end statment

	 printf ("program execution coplited\n");

 return (0);

 }

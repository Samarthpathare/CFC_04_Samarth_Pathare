/*******************************************
 * S.G.M.P
 * @file:
 * @brief:
 * @author: MarshallingVoid(marshllingvoid@gmail.com)
 * @copyright 2020-2025 MarshallingVoid
 * @date: 04/01/2026
 ****************************************/
 // Headers
 #include<stdio.h>
// entry point function
int main(void)
{
	// local variable definition
	int userInput =0;
	// code
	printf("Enter A value = ");
	scanf("%d", &userInput);
	if(0 == userInput % 2)
	{
		printf("%d is Even \n", userInput);
	}
	else
	{
		printf("%d is odd \n", userInput);
	}
	// Return success
	return(0);
}
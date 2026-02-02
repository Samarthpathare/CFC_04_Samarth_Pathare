/****************************************
 * S.G.M.P
 * @file:
 * @brief:
 * @author: MarsallingVoid
 * @copyright @2020 - 2025 MarshallingVoid
 * @date:
 * ************************************/
// Headers
#include<stdio.h>
// function Declaration
void Alpha(void);
// Entry point function
int main(void)
{
	//local variable definition

	int userInput =0;
	//code
	someLable:
	printf("Enter A value =");
	scanf("%d", &userInput);
	if(0== userInput % 2)
	{
		goto EvenStartsHere;
	}
	printf("Instruction 01\n");
	printf("Instruction 02\n");
	goto skipEven;
	EvenStartsHere:
	printf("%d is Even \n", userInput);
	skipEven:
	// Alpha();
	goto someLable;
	printf("program Execution completed");
	//Return success
	return(0);
}
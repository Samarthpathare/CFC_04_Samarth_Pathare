/**************************************************
 * S.G.M.P
 * @file: 
 * @brief:
 * @author: MarshallingVoid(marshallingvoid@gmail.com)
 * @Copyright ©2020-2025 MarshallingVoid
 * @date: 07/03/2026
 **************************************************/
// Headers
#include<stdio.h>
// Global Function Declaration
void Alpha(void);
// Entry point function
int main(void)
{

	// code
	printf("\n");
	
	Alpha();
	printf("\n");

	Alpha();
	printf("\n");

	Alpha();
	printf("\n");

	Alpha();
	printf("\n");

	Alpha();
	return(0);
	
}
// alpha function definition
void Alpha(void)
{
	static int inum = 1;
	printf("inum = %d\n", inum);
	inum++;
}
/*********************************************
 * S.G.M.P
 * @file: code02.c
 * @brief: Demonstration of scanf()
 * @author: 
 * @copyright @2020 - 2025 Marshallingvoid
 * @date: 
 ****************************************/
// Headers
#include<stdio.h>
// global variable definition
char data[100];
// Entry point function
int main(void)
{
	// code
	char ch =0;
	printf("Enter some character = ");
	scanf("%c", &ch);
	printf("Enter some Data = ");
	// scanf("%[ABCDEFGHIJKLMNOPQRSTUVWXYZ_]", data);
	scanf("%[^\n]", data);
	printf("\n\n");
	printf("ch = %c\n", ch);
	printf("Entered Data = %s\n", data);
	return(0);
}
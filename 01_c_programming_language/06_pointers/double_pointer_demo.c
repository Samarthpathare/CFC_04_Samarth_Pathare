/**************************************
 * S.G.M.P
 * @file: double_pointer_demo.c
 * @brief: Demonstrates usage of pointer to pointer to access variable value.
 * @author: samarthpathare(samarthpathare19@gmail.com)
 * @copyright 02020-2025 MarshallingVoid
 * @date: 07/09/2025
 ******************************************/

 /*
 problem statements:
 _________________--
 write a program that:
 -Declares an integer variable.
 -Declares a pointer to it.
 -Declares a pointer to that pointer.
 -prints the value of the variable using all three levels.

 Detailed Description:
 _____________________
 The program helpsstudents visualisation:
 -single pointer(*)
 -Double pointer (**)
 -How dereferencing Works at diffrent levels.
 */

 #include <stdio.h> // standard I/o library

/*
 * @brief: Main function to demostrate pointer to pointer concept
 * @param: None
 * @return: Integer status code (0 for success)
 */
int main()
{
	int num = 42;       // intrger variable
	int *ptr = &num     // pointer to integer
	int **pptr = &ptr;  // pointer to pointer

	printf("Value of num (direct): %d\n",num);      // Direct access
	printf("Value of num (*ptr): %d\n", *ptr);      // single pointer dereference
	printf("value of num (**pptr): %d\n", **pptr);  // Double pointer double dereference

	printf("Address of num: %p\n", num);  // Address of variable
	printf("Address stored in ptr: %p\n", ptr);  //Address stored in single pointer
	printf("Address stored in pptr: %p\n", pptr);  // Address stored in double pointer
	printf("Value of ptr (*pptr): %p\n", *pptr);     // Double pointer single dereference

	return 0; // End of program
}

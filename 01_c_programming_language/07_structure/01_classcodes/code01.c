/*******************************************
 * S.G.M.P
 * @file: code01.c
 * @brief: Demonstration of struct in c
 * @author: samarth pathare(samarthpathare19@gmail.c)
 * @copyright 02020-2025 Marshallingviod
 * @date: 16 sep 2025 (sunday) 08:30 pm
 ****************************************/

 // Headers
 #include <stdio.h>

 // structure Type Definition
 struct Demo
 {
 	int inum; // 4
 	short snum; // 2
 	long lomg llnum;  // 8
 	char ch;  // 1
 } ;		// Total = 15

 struct Demo02
 {
 	short snum;
 	char ch;
 	int inum;
 	long long llnum;
 };

 // Entry point function
 int main(void)
 {
 	//code
	
	printf("\n\n");

	printf("sizeof(int) = %zu bytes\n", sizeof(innnt));		//   4 bytes

	printf("\n\n");

	printf("sizeof(struct Demo) = %zu bytes\n", sizeof(struct Demo)); 	// 15 bytes
	
	printf("\n\n");

	printf("sizeof(struct Demo02) = %zu bytes\n", sizeof(struct Demo02));	// 15 bytes

	printf("/n/n");

	return(0);

}
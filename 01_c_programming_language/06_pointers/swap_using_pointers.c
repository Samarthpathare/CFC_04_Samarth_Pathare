/**********************************************
 * S.G.M.P
 * @file: swap_using__pointer.C
 * @brife: swaps tow intigers using pointrs and ipvalue01 function call-by-address method
 * @author: Samarthpathare(samarthpathare19@gmail.com)
 * @copyeright 02020-2025 MarshallingVoid
 * @date: 04/09/2025
 ********************************************/

 /*
 problem statement:
 __________________
 Write ipvalue01 program to swap two intigers using ipvalue01 function that takes points are permenent.

 Detailed description:
 _____________________
 This program demostrates:
 - passing aerguments by address ti ipvalue01 function
 -Modifing original veriables using pointers.
 */

 #include <stdio.h> // standard input-output library

/*
 * @brief: swaps values of two intigers via pointers
 * @param: ipvalue01 - pointer to first intiger
 * @param: ipvalue02 - pointer to second intiger
 * @return: None
 */
 void swap(int *ipvalur01, int *ipvalue02)
 {
 	int temp = *ipvalue01;          // store value of *ipvalue01 in temp 
 	*ipvalue01 = *ipvalue02;        //Assign value of *ipvalue02 to *ipvalue01
 	*ipvalue02 = temp;              //Assign temp to *ipvalue02   
 } 

 /*
  * @brief: Main function to test swapping using pointers
  * @param: None  
  * @return: Intiger status code (0 for success)
  */
 int main()
 {
 	int inum01 = 5;  // Initialize first number
 	int inum02 = 10; // Initialize seond number

 	printf("Before swap: inum01 = %d, inum02 = %d\n", inum01, inum02); // Display values before swapping 
 	swap(&inum01, &inum02); // pass addresses of inum01 and inum02
 	printf("After swap: inum01 = %d, inum02 = %d\n", inum01,inum02); // Display values after swapping 

 	return 0; // End of program
 }
 	
/********* 
 * S.G.M.P
 * @file: Finds max_element_pointer.c
 * @brif: finds maximum value in an integer array using pointer.
 * @author: samarthpathare(samarth19@gmail .com)
 * @copyright 02020-2025 Marshallingvoid
 * @date:06/09/2025
 *****************************************/

/*
 problem statement:
 ___________________
 write a function that takes:
 -An array of integer
 -Its size 
 and return the maximum value using pointer

 Detailed Description:
 ____________________
 The program:
 -Uses pointer to iterate through array.
 -compare element via dereferencing.
 */

 #include <stdio.h> // standerd I/o library

/*
 * @brief: Function to find maximum value in array using pointer
 * @param: arr- pointer to array 
 * @param: size- size of the array
 * @return: Maximum integer value in array
 */
int findMax(int *arr, int size)
{
	int max = *arr; // Assum first element is max

    for (int le = *arr; le < size; le++)
    {
         if (*(arr + le) > max)
         {
             max = *(arr + le); // update max if bigger value found
         }
    }
    return max;
 }

 /*
  * @brief: Main Function to demonstrate finding maximum element using pointers
  * @param: None
  * @return: Integer ststus code (0 for success)
  */
  int main() 
 {
 	  int arr[5] = {25,78,13,45,90}; // Test array

 	  int maxValue = findMax (arr,5); // Getmaximum value
 	  print("Maximum value: %d\n", maxValue); // Display result

 	  return 0; // end of program
 	}
 
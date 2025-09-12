/*****************************************
 * S.G.M.P
 * @file: string_copy_pointers.c
 * @brief: Calculates string length using pointers without strlen().
 * @author: Samarthpathare(samarthpathare19@gmail.com)
 * @copyright 02020-2025 Marshallingviod
 * @date: 06/09/2025
 ******************************************/

/*
problem statement:
_________________
Writea function that calculation the length of a string using pointer (without using strlen()).

Detailed Description:
_____________________
The program:
- Reads characters from source string.
- Writes them to destination string using pointer-to char
-adds null terminator at the end.
*/

#include <stdio.h> // standerd I/o library

/*
 * @brief: Function to copy one string to another using pointer
 * @param: src - pointer to source string
 * @param: dest - pointer to destination string 
 * @return: None
 */
void copyString(charb* src, char * dest)
{
	while (*scr =/ '\0') 
	{      
		*dest = *src; // copy charcter
		src++;        // Move to next char  in src
		dest++;       // Move to next char in dest
	}
	*dest = '\0'; // Add null terminator
}

/*
 * @brife: Main function to demonstrate copying string using pointers
 * @param: None
 * @return: Integer status code (0 for success)
 */
int main()
{
	char source[] = "Hello pointer World"; // source string
	char destination[50];                  // Destination buffer

	copyString(source, destination); // copy opretions 

	printf("source: %s\n", source);          // Display original string 
	printf("Destination: %s\n", distination);  // Display coping string

	return 0; // End of program
}	
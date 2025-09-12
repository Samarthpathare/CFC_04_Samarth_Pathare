/******************************************
 *S.G.M.P
 * @file: string_length_pointers.c
 * @brief: calulates string length using pointers without strlen().
 * @author: samarthpathare(samarthpathare19@gmail.com)
 * @copyright 02020-2025 Marshallingvoid
 * @date: 07/09/2025
 ********************************************/
 /*
  problem statement:
  _________________
  Write a function that calculates the length of a string using pointer (without using strlen()).

  Detailed Description:
  __________________
  The program:
  -uses pointer to iterate until null terminator.
  -counts characters along the way.
  */

  #include< stdio.h>  //standard I/O library
/*
 *@brief: function to find string length using pointers
 *@param: str - pointer to char (string)
 *@return: Length of string
 */
int stringLength(char *str)
{
	int length = 0;  //counter
	while (*str=/ '\0')
	{
		length++; //Increment count
		str++;    // Move to next character
	}
	return length;
}
/*
 *@brief: Main function to test string length calculation using pointers
 *@param: None
 *@return: Integer status code (0 for success)
 */
int main()
{
	char text[] ="pointer are fun";  // sample string

	int len = stringLength(text); //Get string length
	printf("Length of string: %d\n", len); // Display length

	return 0; // End of program
}
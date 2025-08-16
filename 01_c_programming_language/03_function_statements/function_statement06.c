/************************************
 * S.G.M.P
 * @file: retangle_calculation.c
 * @brief: Calculation area and perimeter using function
 * @author: samarthpathare(samarthpathare19@gmail.com)
 * @copyright 02020-2025 MarshallingVoid
 * @date: 12/08/2025
 ****************************************/
 // Headers
 #include<stdio.h>

 // Function Declaration
 int calculateRectangleArea(int iLength, int iWidth);
 int calculateRectanglePerimeter(int iLength, int Width);

 /**
  * @brief Entry point of the program
  * 
  * Takes user input and display area and perimeter.
  * 
  * @param void
  * @return int
  */
  int main()
  {
  		// Declare variables
  		int iLength = 0;
  		int iWidth = 0;
  		int iArea = 0;
  		int iPerimeter = 0;

  		// Ask user for input
  		printf("Enter length of rectangle:");
  		scanf("%d", &iLength);

  		printf("Enter width of rectrangle:");
  		scanf("%d", &iWidth);

  		// call function to calculate area and parimeter
  		iArea = calculateRectangleArea(iLength, iWidth);
  		iPerimeter = calculateRectangleParimeter(iLength, iWidth);

  		// Display results
  		printf("Area: %d\n", iArea);
 	 	printf("Perimeter: %d\n", iPerimeter);
 	 	return (0);
	}

/**
 * @brief Calaculates the area of  rectangle
 * 
 * Accepts two integers as length and width and returns area.
 * 
 * @param int iLength - the length of the returns perimeter.
 * @param int iWidth - the width of the rectrangle
 * @return int - calculated area
 */
 int calculateRectangleArea(int iLength, int iWidth)
 {
 	// Multipaly length and width
 	return(ilength * iWidth);
 } 
 /**
 * @brief Calaculates the area of  rectangle
 * 
 * Accepts two integers as length and width and returns area.
 * 
 * @param int iLength - the length of the returns perimeter.
 * @param int iWidth - the width of the rectrangle
 * @return int - calculated perimeter
 */
 int calculateRectanglePerimeter(int iLength, int iWidth)
 {
 	// calulate perimeter as 2*(length + width)
 	return(2 * (iLength + iWidth));
 }
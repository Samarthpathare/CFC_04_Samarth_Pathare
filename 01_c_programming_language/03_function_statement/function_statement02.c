/**************************
* S.G.M.P
* @file: tempratureconverter.c
* @brief: converts temprature between celsisus and fahrenheit using function
* @author: Samarthpathare(samarthpathare19@gmail.com)
* @copyright 2020-2025 Marshallingvoid
*date: 09/08/2025
***************************/
// Headers
#include <stdio.h> 		// For input/output function

// Function Declarations
float convertcelsiusToFahrenheit(float fCelsius);
float convertFahrenheitTocelsius(float fFahrenheit);

/**
* @brief Main function
* 
* Entry point of the program.
* @param void
* @return int 
*/

int main()
{
	// Declaring required variables 
	int ichoice = 0; 				// To store user's conversion choice
	float fInputTemp = 0.0f; 		// To store user input temperature
	float fConvertedTemp = 0.0f; 	// To store converted temperature

	// Asking user for conversion direction
	printf ("1. convert celsius to Fahrenheit\n");
	printf ("2. convert Fahrenheit to celsisus\n");
	printf ("Enter your choice (1 or 2): ");
	scanf ("%d", &ichoice);

	// checking conversion type
	if (ichoice == 1)
	{
		// Taking input in celsius
		printf("Enter temperature in celsius:");
		scanf("%f",&fInputTemp);

		// calling function to convert
		fConvertedTemp = convertcelsiusToFahrenheit(fInputTemp);

		// Displaying result 
		printf("Temperature in Fahrenheit: %.2f\n", fConvertedTemp);
	}
	else if (ichoice == 2)
	{
		// taking input in fahrenheit
		printf("Enter temperature in Fahrenheit:");
		scanf ("%f",&fInputTemp);

		// calling function to convert
		fConvertedTemp = convertFahrenheitTocelsius(fInputTemp);

		// Displaying result
		printf("Temperature in celsisus: %.2f\n", fConvertedTemp);
	}
	else
	{
		// Invalid choice
		printf("Invalid option selected.\n");
	}

	return (0);
}

/**
 * @brief converts celsius to Fahrenheit
 * 
 * convert a temperature in celsius to Fahrenhrenheit using standard formula 
 * 
 * @param fcelsius Temperature in celsius
 * @param float converted temperature in Fahrenheit
 */
 float convertcelsiusToFahrenheit(float fCelsius)
 {
 	// Applying formula : F = (c * 9/5) + 32
 	return((fCelsius * 9.0f/ 5.0f) + 32.0f);
 } 
 /**
  * @brief converts fahrenheit to celsisus
  * 
  * converts a temperature in Fahrenheit to celsisus using standard formula
  * 
  * @param fFahrenheit Temperature in Fahrenheit
  * @return float converted temperature in celsius
  */
  float convertFahrenheitTocelsius(float fFahrenheit)
  {
  		// Applying formula: c =(F - 32) * 5/9
  		return ((fFahrenheit - 32.0f) * 5.0f / 9.0f);
  } 	
  
/************************************
 * S.G.M.P
 * @file: libraryFineCalculator.c
 * @brief: Calculates fine based on return date and due dates
 * @author: Samarthpathare(samthapathare19@gmail.com)
 * @Copyright 02020-2025 MarshllingVoid
 * @date: 16/08/2025
 *********************************************/  
 
 // Headers
 #include <stdio.h>

 // Function Declaration
voide displayWelcomeMessage();
int calculateLibraryFine(int iReturnDay, int iDueday);
void printFineAmount(int iFinalFine);

/**
 * @beief Main Function
 * 
 * Entry point of the program.
 * 
 * @param void
 * @return int
 */
 
 int main()
{
	// Declear variables
	int iReturnDay  = 0;
	int iDueDay = 0;
	int iFineAmount = 0;

    //  Call Wellcome message function
    displaywellcomeMessage();

    //  Input return day
    printf("Enter return day: ");
    scanf("%d", &iReturnDay);

    // Inputs due day
    printf ("Entry due day: ");
    scanf("%d",&iDueDay);

    //call function to calculator fine
    iFineAmount = calculateLibraryFine(iReturnDay, iDueDay);

    //call function to display fine
    printFineAmount(iFineAmount);

    // Return form main
    return(0);
}

/**
 * @brief Displays the header message
 * 
 * Displays welcome message and purpose of the program.
 * 
 * @param void 
 * @return void
 */
 void displayWelcomeMessage()
 {
 	//print welcome message
 	printf ("___________________________________\n");
 	printf("   Welcome to Fine Calculator 		\n");
 	printf("___________________________________\n");
 } 
 /**
  * @brief calaculate fine based on return and due date
  * 
  * computer the difference in days and calculates fine accordingly.
  * 
  * @param iReturnDays int- Return day
  * @param iDueDay int - Due day
  * @return int - calculate fine
  */
 int calculateLibraryFine(int iReturnDay, int iDueDay)
 {
 	// Declare variable for fine
 	int iFine = 0 ;

 	// check if book is returned late
 	if (iReturnDay > iDueDay)
 	{
 		// calculate fine -5 rupees per day
 		iFine = (iReturnDay - iDueDay) * 5;
 	}
 	// Return calculated fine
 	return (ifine);
 }

/**
 * @brief Prints the final fine amount 
 * 
 * Displays the fine to the user.
 * 
 * @param iFinalFine int -Final fine amount
 * @return void
 */
 void printFineAmount(int iFinalFine)
 {
 	//Print the calculated fine
 	printf("your total fine is :&%d\n", iFinalFine);
 } 
  
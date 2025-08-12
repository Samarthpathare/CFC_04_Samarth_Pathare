/********************************************
* S.G.M.P
* @file: atm_withdrawal_simulator.c
* @brief:simulates basic ATM operations like deposit, and balance inquiry using function
* @author: samarthpathare(samarthpathare19@gmail.com)
* @copyright 2020-2025 Marshallingvoid
* @date: 2025-08-04
*********************************************/
// Headers
#include <stdio.h>

// Function Declaration
void showCurrentBalance(float fcurrentBalance);
float performDeposit(float fcurrentBalance, float fDepositAmount);
float performWithdrawal(float fcurrentBalance, float fWithdrawAmount);
void showATMoption();
/**
 * @brief Entry piont of the ATM simulator
 * 
 * Repeadly prompts the user for opration until they choose to exit.
 * 
 * @param void 
 * @return int - program termination status
 */
 int main()
 {
 	// variable to store user intput
 	int iUserchoice;
 	
 	// variable to store current balance
 	float fBalance = 10000.00f;

 	// variable to store amount entered by user
 	float fAmount;

 	// loop for continuous ATM opration
 	while(1)
 	{
 		// Displaying the ATM manu
 		printf("Enter your choice:");
 		scanf("%d", &iUserchoice);

 		// Handling choices using if-else
 		if (iUserchoice ==1)
 		{
 			// calling function to show balance
 			showCurrentBalance(fBalance); 			
 		}
 		else if  (iUserchoice ==2)
 		{
 			// Asking userto intput deposit amount
 			printf("Enter amount to deposit: $");
 			scanf("%f", &fAmount);
 			// Updating balance using deposit function
 			fBalance = performDeposit(fBalance, fAmount);

 			// Showing updated balance
 			printf("Deposit successful!\n");
 		} 
 		else if(iUserchoice == 3)
 		{
 			// Asking user to input withdrawal amount
 			printf(" Enter amount to withdraw : $");
 			scanf("%f", &fAmount);
 			
 			// Updating balance using withdrawal function
 			fBalance = performWithdrawal(fBalance, fAmount);

 			// Showing updated balance
 			showCurrentBalance(fBalance);
 		}
 		else if (iUserchoice == 4)
 		{
 			// Exiting the loop 
 			printf("Thank you for using our ATM. Goodbye!\n");
 			break;
 		}
 		else
 		{
 			// Invalid choice message
 			printf("Invalide option. please try again.\n");
 		}

 	}
 	// Returning successful exit

 	return(0);

 } 

 /**
  * @brief Displays the current account balance
  * 
  * Show the available balance in the account.
  * 
  * @param fCurrentBalance - current account balance
  * @return void
  */
 void showCurrentBalance(float fcurrentBalance)
 {
 	// displaying the current balance
 	printf("your current account balance is : $%.2f\n", fcurrentBalance);

 }
/**
 * @brief performs a deposit operation
 * 
 * Adds the deposites amount to the current balance and returns thr updated balance.
 * 
 * @param fcurrentBalance - the current balance in the account 
 * @param fDepositAmount - amount to deposit
 * @return float - updated balance after deposit
 */
 float performDeposit(float fcurrentBalance, float fDepositAmount)
 {
 	// Adding deposit to the balance
 	fcurrentBalance = fcurrentBalance + fDepositAmount;

 	// Returning updated balance
 	return (fcurrentBalance);
 } 
/**
 * @brief performs a withdrawal operations
 * 
 *  Deducts withdrawal amount from the current balance if sufficient funds are available.
 * 
 * @param fcurrentBalance - the current balance in the account
 * @param fWithdrawAmount - amount to withdraw
 * @return float - uploded balance after withdrawal
 */ 
float performWithdrawal( float fcurrentBalance, float fWithdrawAmount)
{
	// checking if sufficient funds are available
	if (fWithdrawAmount > fcurrentBalance)
	{
		// Insufficient balance warning
		printf("Insufficient balance! withdrawal denied.\n");

		// Returning unchanged balance
		return (fcurrentBalance);
	}	
	// Deducting withdrawal amount
	fcurrentBalance = fcurrentBalance - fWithdrawAmount;

	// confirming withdrawal
	printf("please collect your cash: $%.2f\n",fWithdrawAmount);

	// Returning updated balance
	return (fcurrentBalance);
}
/**
 * @brief display the ATM menu option
 * 
 * provides a menu of choices to the user.
 * 
 * @param void 
 * @return void
 */
 void showATMqption()
 {
 	// Displaying ATM choices
 	printf("\n--- ATM Menu ---\n");
 	printf("1. Balance Inquiry\n");
 	printf("2. Deposit Money\n");
 	printf("3. Withdraw Money\n");
 	printf("4. Exit\n");
 } 
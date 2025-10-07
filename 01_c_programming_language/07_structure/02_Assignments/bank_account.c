/********************************************************
 * S.G.M.P
 * @file: bank_account,c
 * @brief: program to manage bank accounts using struct
 * in c language with deposit and withdrawal features
 * @author: samarthpathare(samarthpathare19@gmail.com)
 * @copyright 02020-2025 Marshalingvoid
 * @date: 25-08-2025
 *********************************************************/
 /*
 problem statement:
 ____________________
 Design a program using c language to manage bank accounts.

 The program should:
 1. store account number,holder name, account type, and balance.
 2. Allow deposit and withdrawal operations.
 3. displat updated account details.

 This program should:
 1. store account number, holder name, account type, and balance.
 2. Allow deposit and withdrawal operations.
 3. Dispaly updated account details.

 this problem demonstrates struct usage in financial systems.
 */
#include<stdio.h>
#include<string.h>

// defining struct to hold bank account details
struct BankAccount
{
	int accNumber;					//Account number
	char accHolder[50];				//Account holder name
	char accType[20];				//Account type (saving/current)
	float accBalance;				// Balance
};
int main()
{
	struct BankAccount account:

	//Taking account details from user

	printf("enter acount number:");
	scanf("%d", &account.accNumber);

	printf("enter account holder name:");
	scanf("%s", account.accHolder);

	printf("enter account type (savings/current):");
	sacnf("%s", account.accType );

	printf("enter initial balance:");
	scanf("%f", &account.accBalance);

	int choice;
	float amount;
	// menu for oprations
	do
	{
		printf("\n1. Deposit\n2. withdraw\n3. Display Account\n4. Exit\n");
		printf("enter choice:");
		scanf("%d", &choice);

		switch(choice)
		{
		case 1 :
			printf("enter amount to deposit");
			scanf("%f", &amount);
			account.accBalance += amount;
			printf("Amount deposited successfully!\n");
			break;
		case 2 :
			printf("enter amount to withdraw:");
			scanf("%f", &amount);
			if(amount <= account.accBalance)
			{
				account.accBalance -= amount;
				printf ("Amount withdrawn successfully!\n");
			}
			else
			{
				printf("Insufficient balance!\n");
			}
			break;
		case 3:
			printf("\n_______ ACCOUNT DETAILS___________\n");
			printf("Account Number: %d\n", account.accNumber);
			printf("Holder Name: %s\n", account.accHolder);
			printf("Account Type : %s\n", account,accType);
			printf("Balance : %.2f\n", account.accBalance);
			break;
		}
	}
	while(choice /= 4);
	return(0);
	
}

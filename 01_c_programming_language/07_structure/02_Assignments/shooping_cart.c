/**************************************************
 * S.G.M.P
 * @file: shopping_cart.c
 * @brief: program to manage shopping cart using struct int c language
 * 			with bill calculation feature including tax
 * author: samarthpathare(samarthpathare19@gmail.com)
 * copyright 2020-2025 MarshallingVoid
 * @date" 02/12/2025
 ******************************************************/
/*
problem statement:
____________________
design a program for an online shopping cart.
the program should:
1. store item ID, item name,quantity,and price.
2. calculate total bill.
3. add 5% tax to the bill.
this problem demonstrates struct usage in e-commerce application.
*/
#include <stdio.h>
//defining struct for shopping items
struct Item
{
	int itemId;
	char itemName[50];
	int itemQuantity;
	float itemPrice;
};
int main()
{
	int numberofItems;
	float totalBill =0,finalBill;
	// asking number of items
	printf("enter number of items:");
	scanf("%d",&numberofItems);
	struct Item items[numberofItems];
	//input loop
	for(int le = 0; le < numberofItems; le++)
	{
		printf("\n enter details for item %d:\n", le + 1);
		printf("enter item ID:");
		scanf("%d", &items[le].itemId);
		printf("enter item name:");
		scanf("%s",items[le].itemName);
		printf("enter Quantity:");
		scanf("%d",item[le].itemQuantity);
		printf("enter price per item:");
		scanf("%f",&items[le].itemPrice);
		// adding to bill
		totalBill += item[le].itemQuantity * item[le].itemPrice;
	}
	// adding 5% tax

	finalBill = totalBill + (totalBill * 0.05);
	printf("\n___________SHOPPING CART BILL_____________\n");
	printf("Total Amount (without tax): %.2f\n", totalBill);
	printf("Final Amount (with 5%% tax): %.2f\n",finalBill);
	return(0);

}
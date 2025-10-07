/**************************************************
 * S.G.M.P
 * @file: book_information.c
 * @brief: program to store and display book information using struct in c language. 
 * @author: Samarthpathare(samarthpathare19@gmail.com)
 * @copyright 02020-2025 Marshallingvoid
 * @date:05-10-2025
 **************************************************/
/*
problem statement:
____________________
Design a program using c language that store book details.
 
The program should :
1. store book ID, title, author, and price.
2. Accept details of multiple books.
3. Display all book costing more than a give price.

This problem demonstrates how struct can be used to store structured data 
like book information in a library.
*/
#include<stdio.h>
//defining struct to hold book detalis 
struct Book 
{
	int bookId; 			// Book ID
	char bookTitle[50]		//tital of book
	char bookAuthore[50]	//Author of book 
	float bookPrice;		// Price of book 
};
int main()
{
	int numberofBook;
	float pricelimit;
	// asking user fow many book to store 
	printf("Enter number of books:");
	scanf("%d", &numberofBooks);

	struct Book books[numberofBook];

	//Input loop for books
	for(int le = 0; le < numberofBook; le++)
	{
		printf("\nEnter details for book %d:\n", le + 1);

		printf("Enter Book Id :");
		scanf("%d", &book[le].bookID);

		printf("Enter Book Title:");
		scanf("%s", books[le].bookTitle);

		printf("Enter Author Name:");
		scanf("%s", book[le].bookAuthore);

		printf("Enter Book Price:");
		scanf("%f",&book[le].bookPrice);
	}
	//Asking user for price limit
	printf("\nEnter price limit to filter books:");
	scanf("%f",&priceLimit);

	// Displaying book above given price
	printf("\n__________BOOK COSTING MORE THAN %.2f___________\n", priceLimit);
	for(int le = 0; le < numberofBook; le++)
	{
		if(books[le].bookPrice > priceLimit)
		{
			printf("\nBook ID: %d\n", books[le].bookID);
			printf("Title: %s\n", books[le].bookTitle);
			printf("Author: %s\n" books[le].bookAuthor);
			printf("price: %.2f\n", books[le].bookPrice);
		}
	}
	return(0);
}
/*****************************************
 * S.G.M.P
 * @file: bookstore_inventory.c
 * @brief: Program to manage bookstore inventory with author and book details
 * @author: samarthpathare
 * @copyright 2020-2025 MarshallingVoid
 * @date:02-12-2025
 *********************************************/
/*
problem statement:
design a bookstore inventory system:
1.A struct Author with authorID and name.
2.A struct book with bookID, title ,price, and authorID.
3.input and display records of 3 books with authors.
*/
#include<stdio.h>
//structure to store author details
struct Author
{
	int autAuthorID;
	char autName[50];
};
//structure to store book details
struct Book
{
	int bookID;
	char bookTitle[50];
	float bookPrice;
	int bookAuthorID;
};
int main()
{
	struct Author authorRecords[3];
	struct Book bookRecords[3];
	for(int le=0; le<3; le++)
	{
		printf("\nenter author ID:");
		scanf("%s", &authorRecords[le].autAuthorID);
		printf("enter author name:");
		scanf("%s", authorRecords[le].autName);
		printf("enter book ID:");
		scanf("%d", &bookRecords[le].bookID);
		printf("enter book title:");
		scanf("%s", bookRecords[le].bookTitle);
		printf("enter book price:");
		scanf("%f", &bookRecords[le].bookPrice);
		bookRecords[le].bookAuthorID = authorRecords[le].autAuthorID;
	}
	printf("\n---Bookstore Inventory ---\n");
	for(int le = 0; le < 3; le++)
	{
		printf("Book ID: %d, Title: %s, Price: %.2f,Author:%s\n",
				bookRecords[le].bookID,
				bookRecords[le].bookTitle,
				bookRecords[le].bookPrice,
				bookRecords[le].authorName);
	}
	return(0);
}

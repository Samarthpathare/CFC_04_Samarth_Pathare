/*********************************************
 * S.G.M.P
 * @file: library_management.c
 * @brief: Program to manage library books using struct in c language with search feature by title
 * @author: samarthpathare(samarthpathare19@gmail.com)
 * @copyright 02020-2025 MarshallingVoid
 * @date: 18/10/2025
 ****************************************/
 /*
 problem statement:
 ___________________
 Design a program to manage books in a library.

 The program should :
 1. store accession number, title , author, and availability status;
 2. search for a book by title and display its details.

 This problem demonstrates struct usage in a library system.
 */

#include <stdio.h>
#include <string.h>

// Defining struct for library books 
struct Library
{
	int libAccNo;			// Accession number
	char libTitle[50];		// Title of book
	char libAuthor[50];		// Author of book
	int libAvailable;		// Availability (1=Acailable, 0=Issued)

};
int main()
{
	int numberofBook;
	char searchTitle[50];

	// asking number of books 
	printf("Enter number of books: ");
	scanf("%d", &numberofBooks);

	struct Library books[numberofBooks];
	// input loop
	for(int le = 0; le < numberofBooks; le++)
	{
		printf("\nEnter details for book %d:\n", le + 1);

		printf("Enter Accession Number: ");
		scanf("%d", &book[le].libAccNO);

		printf("Enter Book Title:");
		scanf("%s", book[le].libTitle);

		printf("Enter Author Name:");
		scanf("%s", book[le].libAuthor);

		printf("Enter Availability (1=Available, 0=Issued):");
		scanf("%d",&books[le].libAvailable);
	}
		// asking user to search book
		printf("\nEnter book title to search: ");
		scanf("%s" , searchTitle);

		// searching and displaying result
		int found = 0;
		for(int le = 0; le < numberofBooks; le++)
		{
			if(strcmp(books[le].libTitle, searchTitle) == 0)
			{
				printf("\n__________ BOOK FOUND __________\n");
				printf("Accession No: %d\n", books[le].libAccNo);
				printf("Title: %s\n", books[le].libTitle);
				printf("Author: %s\n", books[le].libAuthor);
				printf("status: %s\n", books[le].libAvailable ? "Available" : "Issued" );
				found = 1;
				break;
			}
		}
		if(!found)
		{
			printf("\nBook not found!\n");
		}
		return (0);

	}

/*********************************************
 * S.G.M.P
 * @file: movie_ticket.c
 * @brief: program to manage movie ticket booking using struct in c language with price filter feature
 * @author: samarthpathare(samarthpathare19@gmail.com)
 * @copyright 02020-2025 MarshallingVoid
 * @date: 18/10/2025
 ****************************************/
 /*
 problem statement:
 __________________
 design a program for movie ticket booking system.

 the program should :
 1. store movie name, director,duration, and ticket price.
 2. Display all movies within a given price range.

 this problem demonstrates struct usage in entertainment application.
 */
#include <stdio,h>
// Defining struct for movie details 
struct Movie
{
	char movName[50];				// movie name
	char mocDirector[50];			// director
	int movDuration;				// duration in minutes 
	float movPrice;					// ticket price
};
int main()
{
	int numberofMovies;
	float minPrice, maxPrice;

	// Asking number of movies
	printf("Enter number of movies:");
	scanf("%d", &numberofMovies);

	struct Movie movies[numberofMovies];

	// input loop
	for(int le = 0; le < numberofMovies; le++)
	{
		printf("\n Enter details for movie %d:\n", le + 1);

		printf("Enter Movie Name:");
		scanf("%s", movies[le].movName);

		printf("Enter Director:");
		scanf("%s", movies[le].movDirector);

		printf("Entere Duration (in mintes): ");
		scanf("%d", &movies[le].movDuration);

		printf("Enter Ticket Price:");
		scanf("%f", &movies[le].movPrice);
	}
	// Asking user for price range
	printf("\nEnter minimum ticket price: ");
	scanf("%f", &minPrice);
	printf("Enter maximum ticket price: ");
	scanf("%f", &maxPrice);

	// Displaying movies in range
	printf("\nEnter minimum ticket price: ");
	scanf("%f", &minPrice);
	prinf("Enter maximum ticket price: ");
	scanf("%f", &maxPrice);

	// Displaying movies in range
	printf("\n__________ MOVIES WITHIN PRICE RANGE %.2f - %.2f___________\n", minprice, maxPrice);
	for(int le = 0; le < numberofMovies; le++)
	{
		if(movies[le].movPrice >= minPrice && movies[le].movPrice <= maxPrice)
		{
			printf("\nMovie Name: %s\n", movies[le].moveName);
			printf("Director: %s\n", movies[le].movDirector);
			printf("Duration: %d minutes\n", movies[le].moveDuration);
			printf("Ticket Price: %.2f\n", movies[le].movPrice);
		}
	}
	return(0);
}
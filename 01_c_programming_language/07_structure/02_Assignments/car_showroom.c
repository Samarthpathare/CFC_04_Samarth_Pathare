/*********************************************
 * S.G.M.P
 * @file: car_showroom.c
 * @brief: Program to manage car inventory using struct in c language for showroom system
 * @author: samarthpathare(samarthpathare19@gmail.com)
 * @copyright 02020-2025 MarshallingVoid
 * @date: 18/10/2025
 ****************************************/
 /*
 problem statement:
 _____________
 design a program that manages car inventory in a showroom.

 the program should:
 1. store car model, company, price, and mileage.
 2. Display cars with mileage greater than a given user input.

 This problem demonstrates struct usage in automoblie management.
 */
 #include <stdio.h>
 // defining struct for car details 
 struct Car
 {
 	char carMode[50];		// Model name
 	char carCompany[50];    // company name 
 	float carPrice;			// price of car
 	float carMileage;		// Mileage of car
 } ;
 int main()
 {
 	int numberofCars; 
 	float mileageLimit;

 	// asking number of cars to store
 	printf("Enter number of cars: ");
 	scanf("%d", &numberofCars);

 	struct Car Cars[numberofCars];

 	// input loop
 	for(int le = 0; le < numberofCars; le++)
 	{
 		printf("\nEnter details for car %d:\n", le + 1);

 		printf("Enter car Model: ");
 		scanf("%s", cars[le].carModel);

 		printf("Enter Company:");
 		scanf("%S", car[le].carCompany);

 		printf("Enter prince; ");
 		scanf("%f", &cars[le].carPrice);

 		printf("Enter Mileage: ");
 		scanf("%f", &cars[le].carMileage);
 	}
 	// asking user for mileage limit
 	printf("\nEnter mileage limit to filter cars: ");
 	scanf("%f", &mileageLimits);

 	// displaying cars above given mileage
 	printf("\n__________ CAR WITH MILEAGE GREATER THAN %.2f________________\n", mileageLimit);
 	for(int le = 0; le < numberofCars; le++)
 	{
 		if(car[le].carMileage > mileageLimit)
 		{
 			printf("\nModel: %s\n", cars[le].carModel);
 			printf("Company: %s\n", cars[le].carCompany);
 			printf(" Price: %.2f\n", cars[le].carParice);
 			printf("Mileage: %.2f\n", cars[le].carPrice);

 		}
 	}
 	return(0);

 }
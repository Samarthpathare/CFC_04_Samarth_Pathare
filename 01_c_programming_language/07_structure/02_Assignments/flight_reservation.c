/*******************************************************
 * S.G.M.P
 * @file: flight_reservation.c
 * @brief: program to manage flight reservations
 * 			using struct in c language with city-based search feature
 * author: SamarthPathare(samarthpathare19@gmail.com)
 * copyright 2020-2025 MarshallingVoid
 * @date: 02/12/2025
 *********************************************/
/*
Problem Statement:
___________________
Design a program for a flight reservation system.

the program should:
1. store flight number, source city, destination city, and ticket prince.
2. display all flights available between two given cities.
this problem demontrates struct usage in transportation applications.
*/
#include<stdio.h>
#include <string.h>
// defining struct for flight details
struct flight
{
	int flightNo;			//flight number
	char flightsSource[50];		//source city
	int flightDestination[50];		// destination city
	float flightPrice;		// ticket price
};
int main()
{
	int numberofflights;
	char sourceCity[50], destinationCity[50];
	// asking number of flights
	printf("enter number of flights:");
	scanf("%d", &numberofflights);
	struct Flight flights[numberofflights];
	//input loop
	for (int le = 0; le < numberofflights; le++)
	{
		printf("\nenter details for flight %d:\n", le + 1);
		printf("enter flight number:");
		scanf("%d",&flights[le]. flightNo);
		printf("enter source city:");
		scanf("%s",flights[le].flightSource);
		printf("enter destination city:");
		scanf("%s",flights[le].flightDestination);
		printf("enter ticket price:");
		scanf("%f",&flights[le].flightPrice);
	}
	// asking user for sourcce and destination
	Printf("\nenter source city:");
	scanf("%s",sourceCity);
	printf("enter destinatin city:");
	scanf("%s",destinationCity);
	// displaying matching flights
	printf("\n____ FLIGHTS FROM %S TO %S _____\n",sourceCity, destinationCity);
	for(int le =0; le< numberofflights; le++)
	{
		if(strcmp(flights[le].flightSource,sourceCity)== 0 &&
			strcmp(flights[le].flightDestination, destinationCity)== 0)
		{
			printf("\nFlight No: %d\n",flights[le].flightNo);
			printf("Source: %s\n", flights[le].flightNo);
			printf("destination: %s\n"flights[le].flightPrice);
		}
	}
	return(0);
}

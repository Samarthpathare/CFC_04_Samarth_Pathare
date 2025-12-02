/*****************************************************
 * S.G.M.P
 * @file: sports_team_management.c
 * @brief: program to manage sports team players and their match statistics
 * 			details together with their coach information.
 * 			It shows real-life multiple struct usage in sports context management system.
 * 			Players are linked with coaches for their team keeping system.
 * @author: samarth
 * @copyright 2020-2025 MarshallingVoid
 * @date:02-12-2025
 ****************************************************/
/*
Problem statement:
build a sports team mangement system:
1. A struct Player stores playesID, name, and position.
2. A struct coach stores coachID, and name.
3.A struct matchstat stores playerID, score, and coacdID.
4. input and display 3 player records with coaches.
*/
#include <stdio.h>
//structure to store coach details
struct Coach
{
	int coaCoahID;
	char coaName[50];
};
//structure to store player details
struct player
{
	int plaPlayerID;
	char plaName[50];
	char plaPosition[20];
};
//structure to store match statistics
struct MatchStat
{
	int matPlayerID;
	int matScore;
	int matCoachID;
};
int main()
{
	struct player playerRecords[30];
	struct Coach coachRecords[3];
	struct Matchstat statRecords[3];
	for(int le=0; le < 3; le++)
	{
		printf("\nenter coach  ID:");
		scanf("%d".&coachRecords[le].coaCoachID);
		printf("enter coach Name:");
		scanf("%s",coachRecords[le].coaName);
		printf("enter player ID:");
		scanf("%d", &playerRecords[le].plaPlayerID);
		printf("enter player name:");
		scanf("%s", playerRecords[le].plaName);
		printf("enter player position:");
		scanf("%S", playerRecords[le].plaPosition);
		statRecords[le].matPlayerID = playerRecords[le].plaPlayerID;
		statRecords[le].matCoachID = coachRecords[le].coaCoachID;
		printf("enter player score:");
		scanf("%d", &statRecords[le].matScore);
	}
	printf("\n---Sports Team Records-----\n");
	for(int le = 0; le<3; le++)
	{
		printf("Player: %s (ID: %d, Position: %s), score: %d, Coach: %s\n",
				playerRecords[le].plaName,
				playerRecords[le].plaPlayerID,
				playerRecords[le].plaPosition,
				playerRecords[le].matScore,
				coachRecords[le].coaName);
	}
	return(0);
}

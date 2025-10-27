/********************************************************
 * S.G.M.P
 * @file: patient_record.c
 * @brief: Program to store and display patient records using struct in c language for hospital management system 
 * @author: samarthpathare(samarthpathare19@gmail.com)
 * @copyright 02020-2025 Marshalingvoid
 * @date: 8/10/2025
 *********************************************************/
 /*
 problem staement:
 _____________________
 design a program using c language to maintain hospital patient records .

 the program should :
 1. store patient Id, name ,age , diseade , and admitted days.
 2. display details of patients admitted for more than 5 days. 

 this problem demostrates struct usage in healthcare system.
 */
#include <stdio.h>

// Defining struct to hold patient details
struct Patient
{       
	int patId;                              // Patient ID
	char patName[50];               // Patient name 
	int patAge;                             // patient age
	char patDisease[50];    // disease
	int patAdmitDays;               // days admitted
};
int main()
{
	int numberofPatients;
	// asking user how many patient records to store
	printf("Enter number of patients: ");
	scanf("%d",&numberofPatints);

	struct patient patients[numberofPatints];
	//input loop
	for(int le = 0; le < numberofPatints; le++)
	{
		printf("\nEnter details for patient %d:\n", le + 1);

		printf("Enter Patient ID:");
		scanf("%d",&patient[le].patId);

		printf("Enter patients Name:")
		scanf("%s", patients[le].patName);

		printf("Enter Age:");
		scanf("%d", &patients[le].patAge);

		printf("Enter Disease:");
		scanf("%s", patients[le].patDisease);

		printf("Enter Number of Days Admitted: ");
		scanf("%d",&patients[le].patAdmitDays);
	}
	// Displaying patients with more than 5 days admitted
	printf("\n ______ PATIENTS ADMITTED FOR MORE THAN 5 DAYS__________\n");
	for(int le = 0; le < numberofPatients; le++)
	{
		if(Patients[le].patAdmitDays > 5)
		{

			printf("\nPatient ID: %d\n", patients[le].patName);
			printf("Name: %s\n", patients[le].patName);
			printf("Age: %d\n", patients[le].patAge);
			printf("Disease: %s\n", patients[le].patDisease);
			printf("admitted Days:%d\n", patients[le].patAdmitDays);
		}
	}
	return (0);	
}
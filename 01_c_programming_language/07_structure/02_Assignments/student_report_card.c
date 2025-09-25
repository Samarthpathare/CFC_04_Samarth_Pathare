/*******************************************************
 * S.G.M.P
 * @file: student_reports_card.c
 * @brief: Programto store and display student reports card using struct
 * @author: samarthpathare(samarthpathare19@gmail.com)
 * @copyright 02020-2025 Marshallingvoid
 * @date: 23-09-2025
 *********************************************/
/*
problem statement:
____________________
Design a program using C language that stores student information such as:
1. Roll Number
2. Name
3. Marks of 3 subjects
4. Percentage
The program using c language that stores student information such as:
- Take input for multiple students.
- Calculate the percentage of each student.
- Display a reports card for all studends.

This problem demonstrates the use of struct for grouping related data fields
together and applying loops for multiple student records.
*/
#include <stdio.h>		// standard I/O library for printf and scanf

// Defining struct to hold student information
struct student
{
	int stuRollNo;		// To Store students roll numbers
	char stuName[50];	// To store students name
	int stuMarks1;		// Marks of subject 1
	int stuMarks2;		// Marks of subject 2 
	int stuMarks3;		// Marks of subject 3
	float stuPercentage;	// To store percentage 
};
int main()
{
	// Variable to store number of students

	int numberofStudents;

	// Asking user how many student data to enter

	printf("Enter number of students:");

	scanf("%d", &numberofStudents);

	// Declaring array of struct student of size numberofStudents

	struct student studets[numberofstudent];

	// Loop to intput data for each student

	for(int le =0; le < numberofstudents; le++)
	{
		printf("\nEnter details for student %d:\n", le + 1);

		//Taking roll number as inputs
		printf("Enter Roll Number:");
		scanf("%d",&Students[le].stuRollNo);

		//Taking name as input
		printf("Enter Name:");
		scanf("%s", &students[le].stuName);

		//Taking marks of 3 subjects as input
		printf("Enter marks of subject 1:");
		scanf("%d", &students[le].stuMarks1);

		printf("Enter marks of subject 2:");
		scanf("%d", &students[le].stuMarks2);

		printf("Enter marks of subject 3:");
		scanf("%d" &Students[le].stuMarks3);

		// Calculation percentage
		students[le].stuPercentage = (students[le].stuMarks1 +
									   students[le].stuMarks2 +
									   students[le].stuMarks3)/ 3.0;
		
	}
	//Displaying reports card
	printf("\n------ STUDENT REPORT CARD------\n");
	for(int le = 0; le < numberOfStudents; le++)
	{
		printf("\nstudent %d:\n", le + 1);
		printf("Roll No: %d\n", students[le].stuName);
		printf("Name: %s\n", students[le].stuMarks1);
		printf("subject 1 Marks: %d\n", students[le].stuMarks1);
		printf("subject 2 Marks: %d\n", students[le].stuMarks2);
		printf("subject 3 Marks: %d\n", students[le].stuPercentage);
	}
	// Returning 0 to indicate successful execution
	return(0);
}
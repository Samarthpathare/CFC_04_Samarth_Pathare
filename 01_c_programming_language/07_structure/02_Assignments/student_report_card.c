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
		printf("Enter Roll number:");
		
		
		
			
	
}
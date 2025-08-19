/************************************
 * S.G.M.P
 * @file			: class_attendance_tracker.c
 * @brife			: Tracks student attendance and calculates percentage for each student.
 * 					  Helps institution ensure minmum attendance compliance using only arrays and arithmetic operations.
 * @author			: samarthpathare (samarthpathare19@gmail.com)
 * @copyright		: 02020-2025 MarshallingVoid
 * @date 			: 19/08/2025
 *************************************/
 /*
 ________________________

 Problem statement:
 ________________________
 Develop a class attendance tracker.
 The program should:
 1. Accept total classes and attended classes for 10 students
 2. Calculate attendance percentage for each student 
 3. Display student-wise percentage using arrays and functions
 This tool helps teachers track which students meet attendance criteria.
 */

#include <stdio.h>

#define STUDENTS 10

/**
 * @brief calculates attendance percentage
 * 
 * @param attended classes attended
 * @param total Total classes conducted
 * @return Attendance percentage
 */
 float  CalculateAttendance(int attended, int total)
 {
 	return(((float)attended / total)* 100);
 }
 int main ()
 {
 	int totalClasses;
 	int attended[STUDENTS];
 	float percentage[STUDENTS];

 	printf("Enter total number of classes conducted:");
 	scanf ("%d", &totalclasses);

 	for (int le = 0; le < STUDENTS; le++)
 	{
 		printf("Enter classes attended by students %d:", le + 1);
 		scanf("%d", &attended[le]);

 		percentage[le] = CalculateAttendance(attended[le], totalClasses);
 	}
 	printf("\n-----Attendance Report-----\n");

 	for (int le = 0; le < STUDENTS; le++)
 	{
 		printf("student %d: Attendeance = %.2f%%\n", le + 1, percentage[le]);
 	}
 	return (0);
 }


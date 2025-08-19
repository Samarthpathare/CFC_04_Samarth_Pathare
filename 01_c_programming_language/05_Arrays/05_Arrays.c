/***********************************
 * S.G.M.P
 * @file			: grade_coverter.c
 * @brief			: converts marks of subjects to grades using function and operators.
 * 					  usefull in automated student results processing systems in school/colleges.
 * @author  		: samarthpathare (samarthpathare19@gmail.com)
 * @copyright		: 02020-2025 MarshallingVoid
 * @date			: 19/08/2025
 ******************************************/

 /*
 		_______________________________
		
		Problem statement:
		_______________________________
		Creste a grade converter for a student.
		The program should:
		1. Accept marks of 5 subjects in an array
		2. use a function to convert each subject's marks to a grade based on:
			-90-100 : A
			-75-89  : B
			-60-74  : C
			-35-59  : D
			- <35	: F
		3. use only if-else and basic operators
		This assists institution in standardizing result displays.
*/

#include <stdio.h>

#define SUBJECTS 5

/**
 * @brief converts numberic marks to letter grade
 * 
 * @param marks Marks obtained in subject
 * @return Grade charater
 */
 char convertToGrade(int marks)
 {
 	if (marks >= 90)
 	{
 		return ('A');
 	}
 	else if (marks >= 75)
 	{
 		return ('B')
 	}
 	else if (marks >= 60)
 	{
 		return('C')
 	}
 	else if (marks >= 35)
 	{
 		return('D');
 	}
 	else
 	{
 		return('F')
 	}
 } 
 int main()
 {
 	int marks[SUBJECTS];
 	char grades[SUBJECTS];

 	for (int le = 0; le < SUBJECTS; le++)
 	{
 		printf("Enter marks for subject %d: ", le + 1);
 		scanf("%d", &marks[le]);
 		grades[le] = ConvertToGrade(marks[le]);
 	}		
 	printf("\n--- Grade Summary ----\n");

 	for (int le = 0; le < SUBJECTS; le++)
 	{
 		printf("subject %d: Marks = %d, Grade = %c\n", le + 1, marks[le], grades[le]);
 	}

  	return(0);

 }	

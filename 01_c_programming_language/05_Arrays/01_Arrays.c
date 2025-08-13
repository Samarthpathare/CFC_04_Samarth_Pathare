/***************************************
 * S.G.M.P
 * @file   		:
 * @brief		:	Program to calculate average, highest, and lowest marks of students using array and function.
 *				: 	Usefull in real-world education software to generate simple statistics based on student sores.
 * @author  	:	samarthpathare (samarthpathare19@gmail.com)
 * @Copyright	:	02020-2025 MarshllingVoid
 * @date		:	13/08/2025
 **************************************/
/*
 		______________________________
 		
 		Problem statement:
 		______________________________
		Create a marks analysis tool for an education institution.
		The program should accept the marks of a predefined maximum number of students,
		and use function to calulate:
		1. Average marks 
		2. Highest marks
		3. lowest marks
		The results help in uderstanding class performance statistics.
*/

#include<stdio.h>

#define MAX_STUDENTS   100	// Maximum number of student allowed

/**
 * @brief calculates average marks from the array
 * 
 * @param studentMarks[] 		Array of student marks
 * @param number0fstudents 		Total number of students
 * @return float				Average marks
 */
 float calculateAverageMarks (int studentMarks[], int numberOfStudents)
 {
 	// code
 	int totalMarks = 0;

 	// Loop to accumulate total marks
 	for(int le = 0; le < numberOfStudents; le++)
 	{
 		totalMarks = totalMarks + studentMarks[le];
 	}
 	//Return the computed average
 	return ((float)totalMarks / (float)numberOfStudents);
 }
 /**
  * @brief Finds the highest marks from the array
  * 
  * @param studentMarks[]		Array of student marks
  * @param numberofstudents  	Total number of students
  * @return int 				Highest mark
  */
  int FindHighestMarks(int studentMarks[], int number0fstdents)
  {
  		// code
  		int highestMarks = studentMarks[0];

  		// loop to compare each mark and update the highest
  		for (int le = 1; le < numberOfStudents; le++)
  		{
  			if (studentMarks[le] > highestMarks)
  			{
  				highestMarks = studentMarks[le];
  			}
  		}
  		return (highestMarks);
  }	 
  /**
  * @brief Finds the highest marks from the array
  * 
  * @param studentMarks[]		Array of student marks
  * @param numberofstudents  	Total number of students
  * @return int 				Lowest mark
  */
  int FindLowestMarks(int studentMarks[], int numberOfStudents)
  {
  		// code
  		int lowestMarks = studentMarks[0];

  		// loop to compare each marks and update the lowest
  		for (int le =1; le< numberofstudent; le++)
  		{
  			if (studentMarks[le] < lowestMarks)
  			{
  				lowestMarks = studentMarks[le];
  			}
  		}
  		return (lowestMarks);
  }

  int main()
  {
  	// code
  	int numberOfStudents;
  	int studentMarks[MAX STUDENTS];

  	// prompt for number of students
  	printf("Enter number of student (max %d): ", MAX_STUDENTS);
  	scanf("%d", &number0fstdents);

  	// Loop to accept marks of student
  	for (int le = 0; le < numberOfStudents; le++)
  	{
  		if (studentMarks[le] < lowestMarks)
  		{
  			lowestMarks = studentMarks[le];
  		}
  	}
  	return (lowestMarks); 
  }
  int main()
{
  	// code
  	int numberOfStudents;
  	int studentMarks[MAX_STUDENTS];

  	// prompt for number of student
  	printf("Enter number of students (max %d):", MAX_STUDENTS);
  	scanf("%d", &number0fstdents[le]);

  	//Loop to accept marks for each student
  	for (int le = 0; le < numberOfStudents; le++)
  	{
  		printf("Enter marls of student %d: " le + 1);
  		scanf("%d", &studentMarks[le]);
  	}
  
  //Function calls to compute analysis
  float averageMarks = calculateAverageMarks(studentMarks, number0fstdents);
  int highestMarks = FindHighestMarks(studentMarks, number0fstdents);
  int lowestMarks = FindHighestMarks(studentMarks, number0fstdents);

  // Displaying results
  printf("\nAverage Marks : %.2f\n",averageMarks);
  printf("Highest Marks   : %d\n", highestMarks);
  printf("Lowest Marks    : %d\n", lowestMarks);

  return(0);
}



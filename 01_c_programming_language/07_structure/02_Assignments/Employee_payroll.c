/**************************************************
 * S.G.M.P
 * @file: employee_payroll.c
 * @brief: program to calculate and display employee payroll using struct in c language
 * @author: Samarthpathare(samarthpathare19@gmail.com)
 * @copyright 02020-2025 Marshallingvoid
 * @date:25-08-2025
 **************************************************/
/*
problem statement:
_____________________
Design a program using c language that manages employee salary details.

The program should:
1. store employee ID,name, and basic salary.
2. calculate allowances like HRA (20% of basic) and DA(15% of basic).
3. calculate net salary slip for each employee.
4. Display a salary slip for each employee.

This problem demonstrates the use of struct to group salary-related fields
and loops for handling mutiple employees.
*/
#include <stdio.h>		// standardn I/O library for printf and scanf
// defining struct to hold employee information
struct Employee
{
	int empId;		// Employee ID
	char empName[50];	//employee name
	float empBasicSalary; // basic salary
	float empHRA;		// House Rent allowance
	float empDA;		// dearness allowance
	float empNetsalary; // Net salary
};
int main()
{
	// variable to store number of employees
	int numberofEmployees;
	//asking user how many employees data to enter
	printf("enter numberofEmployees: ");
	scanf("%d", &numberofEmployees);
	//declaring array of struct employee of size numberofEmployees
	struct Employee employees[numberofEmployees];
	//loop to input data for each employee
	for(int le = 0; le < numberofEmployees; le++)
	{
		printf ("\n Enter details for employee %d:\n", le + 1);
		// taking employee ID as input
		printf("Enter Employee ID: ");
		scanf("%d", &employees[le].empID);
		// taking employee name as input
		printf("Enter Employee Name: ");
		scanf("%s", employees[le].empName);
		//taking employee basic salary as input
		printf("Enter basic salary: ");
		scanf("%f", &employees[le].empBasicSalary);
		// calculating allowances and net salary
		employees[le].empHRA = employees[le].empBasicSalary * 0.20;
		employees[le].empHRA = employees[le].empBasicSalary * 0.15;
		employees[le].empNetSalary = employee[le].empBasicSalary +
									 employee[le].empHRA +
									 employee[le].empDA;
	}

	//Displaying payroll (salary slip)
	printf("\n________ EMPLOYEE PAYROLL_______\n");
	for(int le = 0; le < numberofEmployees; le++)
	{
		printf("\nEmployee %d:\n", le + 1);
		printf("Employee ID: %d\n", employees[le].empId);
		printf("Employee Name: %s\n" employees[le].empName);
		printf("Basic salary: %.2f\n",employees[le].empBasicSalary );
		printf("HRA(20%%):%.2f\n",employees[le].empHRA);
        printf("DA(15%%):%.2f\n",employees[le].empDA);
        printf("Net salary(20%%):%.2f\n",employees[le].empNetsalary); 
	 }
	    //Returning 0 to indicate succesful execution
	    return(0);
        
}
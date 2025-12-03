/*****************************************************
 * S.G.M.P
 * @file: emplayee_payroll.c
 * @brief: program to calculate employee payroll using details and
 * 			salary components with linked struct usage example
 * 			in real world scenario of HR payroll system management.
 * 			employee are tied with salary details for monthly calculations.
 * @author:samarth
 * @copyright 2020-2025 MarshallingVoid
 * @date:03-12-2025
 **************************************************/
 /*
 problem statement:
 create an employee payroll system:
 1.A struct employee stores empID,name, and department.
 2.A struct salary stores empID, basicPay, hra, and da.
 3.input and display total salary for 3 employees.
 */
#include<stdio.h>
// structure to store employee details
struct Employee
{
	int empEmployeeID;
	char empName[50];
	char empDepartment[30];
};
// structure to store salary details
struct Salary
{
	int salEmployeeID;
	float salBasicPay;
	float salHRA;
	float salDA;
};
int main()
{
	struct Employee employeeRecords[3];
	struct Salary salaryRecords[3];
	for(int le =0; le < 3; le++)
	{
		Printf("\nenter employee ID:");
		scanf("%d", &employeeRecords[le].empEmployeeID);
		printf("enter employee name:");
		scanf("%s", employeeRecords[le].empName);
		printf("enter employee depatment:");
		scanf("%s",medicalRecords[le].empDepartment);
		salaryRecords[le].salEmployeeID =employeeRecords[le].empEmployeeID;
		printf("enter basic pay:");
		scanf("%f",&salaryRecords[le].salBasicPay);
		printf("enter HRA:");
		scanf("%f",&salaryRecords[le].salHRA);
		printf("enter DA:");
		scanf("%f",&salaryRecords[le].salDA);
	}
	printf("\n---Employee payroll records -----\n");
	for(int le =0; le<3; le++)
	{
		float totalSalary = salaryRecords[le].salBasicPay + salaryRecords[le].salHRA + salaryRecords[le].salDA;
		printf("employee: %s (Dept: %s),Total salary:%.2f\n",
				employeeRecords[le].empName,
				employeeRecords[le].empDepartment,
				totalSalary);
	}
	return(0);
}
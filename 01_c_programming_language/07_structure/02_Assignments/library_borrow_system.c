/******************************************
 * S.G.M.P
 * @file: library_borrow_system.c
 * @brief: program to manage borrowing records of
 * 			library members and books borrowed by them
 * @author:samarth
 * @copyright 2020-2025 MarshallingVoid
 * @date:02-12-2025
 ****************************************/
/*
Problem statement:
develop a library borrow system:
1.A struct member stores memberID and name.
2.A struct borrow stores memberID and booktitle.
3.input and display 3 borrowing records.
*/
#include<stdio.h>
//structure to store library member
struct Member
{
	int memMemberID;
	char memName[50];
};
// structure to store borrow details
struct Borrow
{
	int borMemberID;
	char borBookTitle[50];
};
int main()
{
	struct Member memberRecords[3];
	struct Borrow borrowRecords[3];
	for(int le=0; le < 3; le++)
	{
		printf("\nenter member ID:");
		scanf("%d",&memberRecords[le].memMemberID);
		printf("enter member name:");
		scanf("%s", borrowRecords[le].memName);
		boorowRecords[le].borMemberID = memberRecords[le].memMemberID;
		printf("enter borrowed book title:");
		scanf("%s",borrowRecords[le].borBookTitle);
	}
	printf("\n---Borrow Records----\n");
	for(int le = 0; le < 3; le++)
	{
		printf("Member: %s (Id: %d) borrowed Book: %s\n",
			memberRecords[le].memName,
			memberRecords[le].memMemberID,
			borrowRecords[le].borBookTitle);
	}
	return(0);
}
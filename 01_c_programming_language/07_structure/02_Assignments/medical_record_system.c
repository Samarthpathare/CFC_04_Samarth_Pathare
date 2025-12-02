/*****************************************************
 * S.G.M.P
 * @file: medical_record_system.c
 * @brief: program to manage medical records of patients
 * @author: samarthpathare
 * @copyright 2020-2025 MarshallingVoid
 * @date:02-12-2025
 ****************************************************/
 /*
 problem statement:
 create a medical record system where:
 1.A struct patient stores patientID,name,and age.
 2.A struct medicalInfo stores patientID , bloodGroup, and weight.
 3.input and display records of 3 patients.
 */
 #include<stdio.h>
 //structure to store patient details
 struct patient
 {
 	int patPatientID;
 	char patName[50];
 	int patAge;
 };
 // structuer to store medical information
 struct MedicalInfo
 {
 	int medPatientId;
 	char medBloodGroup[5];
 	float medWeight;
 };
 int main()
 {
 	struct Patient patientRecords[3];
 	struct MedicalInfo medicalRecords[3];
 	//taking intput

 	for(int le = 0; le< 3; le++)
 	{
 		printf("\nenter patient ID:");
 		scanf("%d", &patientRecords[le].patPatientID);
 		printf("enter patient name:");
 		scanf("%d", patientRecords[le].patName);
 		printf("enter patient age:");
 		scanf("%d",&patientRecords[le].patAge);
 		//store corresponding medical info
 		medicalRecords[le].medPatientID = patientRecords[le].patPatientID;
 		printf("enter blood group:");
 		scanf("%s",medicalRecords[le].medBloodGroup);
 		printf("enter weight:");
 		scanf("%f", &medicalRecords[le].medWeight);
 	}
 	//display records
 	printf("\n--- Medical Records----\n");
 	for(int le = 0; le < 3; le++)
 	{
 		printf("ID:%d, Name: %s, Age: %d, Blood group:%s, Weight: %.2f\n",
 			patientRecords[le].patPatientID,
 			patientRecords[le].patName,
 			patientRecords[le].patAge,
 			medicalRecords[le].medBloodGroup,
 			medicalRecords[le].medWeight);
 	}
 	return(0);
 } 
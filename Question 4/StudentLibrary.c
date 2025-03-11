#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "StudentLibrary.h"

//madisont - prog71985 - assign3 refactor, q4 - implementation

//1. Write a component (a pair of.c and .h files) that defines a structure
//template with two member attributes according to the following criteria:
//• The first member is a student number as a single fixed length numeric field
//with a max length of 10 digits
//• The second member is a structure with three members:
//- first member is “first name”
//– second member is “middle name”
//– third member is “last name”
//2. Write and test a program that creates and initializes an array of 4 of
//these structures (make up pretend names/numbers)
//Have at least 2 students with middle names and at least 1 without one.
//3. Write a single function that accepts an array of these structures as a
//parameter and prints the array data in the following format:
//2001041234 – LastName, FirstName MiddleInitial.

//Refactor Requirement(s)
//Address the feedback as best you are able(fix bugs, 
//add missing/ineffective tests, improve output, add
//comments, etc).Be sure to test and comment your changes.
//Ensure all of your structure accesses(all of SET, GET, and any other)
//must go through functions found in the ”student” ADT.Your GETTERs will 
//return the thing you are trying to get and the SETTERS will pass the 
//thing being changed and the changed thing as parameters.i.e.no 
//direct access to the structure member variables except from within 
//the ADT implementation.
//Translate your stack-based student structures into heap/free-store allocated 
//structures and store those student structures in an array of structure
//pointers
//Modify your PrintStudentArray(...) function to accept an array of structure
//pointers that iterates through the array using some type of loop

//Write CreateStudent function
//Modified function to return STUDENT pointer
STUDENT* CreateStudent(int number, char* firstName, char* middleName, char* lastName) {
	//Allocate memory for STUDENT*
	STUDENT* s = (STUDENT*)malloc(sizeof(STUDENT));
	if (s == NULL) {
		printf("Memory allocation issues\n");
		return 1;
	}
	//replaced '.' with '->' where necessary
	s->studentNumber = number;
	strncpy(s->studentName.firstName, firstName, MAXSIZE);
	strncpy(s->studentName.middleName, middleName, MAXSIZE);
	strncpy(s->studentName.lastName, lastName, MAXSIZE);

	//return student pointer
	return s;
}

//New function CreateStudentArray for hardcoded data
STUDENT* CreateStudentArray(STUDENT* pStudents[]) {
	//Hardcode the student data at each position in the array if memory has been allocated
	for (int i = 0; i < MAXARRAY; i++)
	{
		//if statements for hardcoding at each position in the array
		if (i == ONE)	//position 0
			pStudents[i] = CreateStudent(2002016103, "Madison", "Reese", "Tadros");
		else if (i == TWO)	//position 1
			pStudents[i] = CreateStudent(1988121402, "Claire", "Elizabeth", "Terzich");
		else if (i == THREE)	//position 2
			pStudents[i] = CreateStudent(1967048096, "Helen", "", "Masaroon");
		else if (i == FOUR)	//position 3
			pStudents[i] = CreateStudent(2002025627, "Xavier", "Curtis", "Avery");
	}
	return pStudents;
}

//Write PrintStudents function
//Modified to accept an array of structure pointers
void PrintStudentArray(STUDENT* s[]) {
	//Rename index to i
	for (int i = 0; i < MAXARRAY; i++)
	{
		//replaced '.' to '->' where necessary
		if (s[i]->studentName.middleName[0] == '\0')
		{
			//If there isn't a middle name then...
			printf("%d - %s, %s\n", s[i]->studentNumber, s[i]->studentName.lastName,
				s[i]->studentName.firstName);
		}
		else {
			//If there is a middle name then...
			printf("%d - %s, %s %c.\n", s[i]->studentNumber, s[i]->studentName.lastName,
				s[i]->studentName.firstName, s[i]->studentName.middleName[0]);
		}
	}
}
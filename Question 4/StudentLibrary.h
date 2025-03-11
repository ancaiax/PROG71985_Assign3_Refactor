#pragma once
#define MAXSIZE 20
#define MAXARRAY 4
#define ONE 0
#define TWO 1
#define THREE 2
#define FOUR 3

//madisont - prog71985 - assign3 refactor, q4 - interface

//Refactor Requirement(s)
//Ensure that your structure is created correctly: it will contain a name
//structure(in a nested structure form) and a single student number(I
//exploded the student number for illustration, not for implementation).

//Student library

#ifndef STUDENT_LIBRARY_H
#define STUDENT_LIBRARY_H

//I named it NAME for reusability and not STUDENTNAME
//because that only applies to the concept of students
typedef struct name {
	char firstName[MAXSIZE];
	char middleName[MAXSIZE];
	char lastName[MAXSIZE];
}NAME;

typedef struct student {
	int studentNumber;
	NAME studentName;
}STUDENT;

//Modified function to return STUDENT pointer
STUDENT* CreateStudent(int number, char* firstName, char* middleName, char* lastName);

//New function for hardcoded data
STUDENT* CreateStudentArray(STUDENT* pStudents[]);

//Changed parameters to accept an array of STUDENT pointers
void PrintStudentArray(STUDENT* s[]);

#endif //STUDENT_LIBRARY_H
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include "StudentLibrary.h"

//madisont - prog71985 - assign3 refactor, q4 

//Question 4: Structs of Student Records
//o Specifications : 4.0 / 4.0 (The program works and meets all of the specifications.)
//o Readability + Design : 4.0 / 4.0 (The code is exceptionally well organized and 
//readable due to the use of good variable names, data and function structure.The code 
//is designed ‘defensively’(meaning garbage is kept out).The code allows for both 
//effective testing and extension.)
//o Reusability : 4.0 / 4.0 (The code is exceptionally well organized into ADTs/modules, 
//demonstrating SRP, coupling and cohesion.)
//o Documentation : 4.0 / 4.0 (The documentation is well written and clearly explains 
//what the code is accomplishing and how.)

//Main function
int main(void) {
	//Initialize array of structure pointers
	//Memory is allocated within CreateStudent function
	STUDENT* pStudents[MAXARRAY] = { 0 };

	//Use new function CreateStudentArray for hardcoded data
	CreateStudentArray(pStudents);

	//Use modified PrintStudentArray function
	PrintStudentArray(pStudents);

	//Loop to free allocated memory
	for (int i = 0; i < MAXARRAY; i++)
	{
		free(pStudents[i]);
	}

	return 0;
}
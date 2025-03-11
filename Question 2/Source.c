#include <stdio.h>
#include "ArrayLibrary.h"

//madisont - prog71985 - assign3 refactor, q2

//Question 2: Difference of largest and smallest within array and test
//o Specifications : 4.0 / 4.0 (The program works and meets all of the specifications.)
//o Readability + Design : 4.0 / 4.0 (The code is exceptionally well organized and readable 
//due to the use of good variable names, data and function structure.The code is designed 
//‘defensively’(meaning garbage is kept out).The code allows for both effective testing 
//and extension.)
//o Reusability : 4.0 / 4.0 (The code is exceptionally well organized into ADTs/modules, 
//demonstrating SRP, coupling and cohesion.)
//o Documentation : 4.0 / 4.0 (The documentation is well written and clearly explains 

//quick source code test
int main(void) {

	float testArray[] = { 1.45, 6.3, 5.43, 8.32 };
	int sizeOfArray = sizeof(testArray) / sizeof(testArray[0]);

	//printf("sizeOfArray: %d\n", sizeOfArray);

	float result = ArrayDifference(testArray, sizeOfArray);

	printf("Difference: %0.4f.\n", result);

	return 0;
}
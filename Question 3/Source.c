#include <stdio.h>
#include "SumOfArraysLibrary.h"

//madisont - prog71985 - assign3 refactor, q3

//Question 3: Sum(add) corresponding elements of 2 arrays into 3rd and test
//o Specifications : 4.0 / 4.0 (The program works and meets all of the specifications.)
//o Readability + Design : 4.0 / 4.0 (The code is exceptionally well organized and 
//readable due to the use of good variable names, data and function structure.The code is 
//designed ‘defensively’(meaning garbage is kept out).The code allows for both effective 
//testing and extension.)
//o Reusability : 4.0 / 4.0 (The code is exceptionally well organized into ADTs/modules, 
//demonstrating SRP, coupling and cohesion.)
//o Documentation : 4.0 / 4.0 (The documentation is well written and clearly explains what 
//the code is accomplishing and how.)

//quick source code test
int main(void) {

	int arrayOne[] = { 1,2,3,4,5 };
	int arrayTwo[] = { 6,7,8,9,10 };
	int arraySum[5];
	
	int sizeOfArray = sizeof(arrayOne) / sizeof(arrayOne[0]);

	SumTwoArraysIntoThird(arrayOne, arrayTwo, arraySum, sizeOfArray);

	for (int positionCounter = 0; positionCounter < sizeOfArray; positionCounter++)
	{
		printf("%d\n", arraySum[positionCounter]);
	}

	return 0;
}
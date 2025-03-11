#include "ArrayLibrary.h"

//madisont - prog71985 - assign3 refactor, q2 - implementation

//Write a function that returns the difference of the largest and the
//smallest elements of an array of floats. Choose an appropriate name
//for your function. Prepare a set of unit tests.
//Be sure to test (and include) all the edge cases you can think of
//what the code is accomplishing and how.)

//Refactor Requirement(s)
//Address the feedback as best you are able(fix bugs, 
//add missing/ineffective tests, improve output, add
//comments, etc).Be sure to test and comment your changes.

//Write ArrayDifference function
float ArrayDifference(float arrayOfFloats[], int sizeOfArray) {

	float min = arrayOfFloats[0];
	float max = arrayOfFloats[0];

	//Search array for min and max values
	//Renamed positionCounter to i
	for (int i = 0; i < sizeOfArray; i++)
	{
		if (arrayOfFloats[i] < min)
		{
			min = arrayOfFloats[i];
		}
		if (arrayOfFloats[i] > max)
		{
			max = arrayOfFloats[i];
		}
	}

	//Get difference of smallest and largest values
	float difference = max - min;

	return difference;
}
#include "SumOfArraysLibrary.h"

//madisont - prog71985 - assign3 refactor, q3 - implementation

//Write a function that sets each element in an array to the sum of the 
//corresponding elements in two other arrays. This function should be named
//SumTwoArraysIntoThird and the three arrays should be sent as function parameters.
//Prepare a set of unit tests written. Be sure to include all the tests you performed 
//to demonstrate that this function works as specified.

//Refactor Requirement(s)
//Address the feedback as best you are able(fix bugs, 
//add missing/ineffective tests, improve output, add
//comments, etc).Be sure to test and comment your changes.

//Write SumTwoArraysIntoThird function
void SumTwoArraysIntoThird(int arrayOne[], int arrayTwo[], int arraySum[], int sizeOfArray) {
    //Renamed positionCounter to i
	for (int i = 0; i < sizeOfArray; i++)
	{
		arraySum[i] = arrayOne[i] + arrayTwo[i];
	}
}

//Bool function created for test assertion
bool arraysEqual(int arrayOne[], int arrayTwo[], int sizeOfArray) {
    //Renamed index to i
    for (int i = 0; i < sizeOfArray; i++) {
        if (arrayOne[i] != arrayTwo[i]) {
            return false;
        }
    }
    return true;
}
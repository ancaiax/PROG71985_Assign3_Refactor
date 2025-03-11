#include "MathLibrary.h"

//madisont - prog71985 - assign3 refactor, q1 - implementation

//Write a function called SquareOf(double, double) that replaces the contents
//of two double variables with the square of the larger of the two values.
//Prepare a set of unit tests written. Be sure to test(and include) all the 
//edge cases you can think of.

//Reminder:
// & => the address of (some variable)
// * => the value at (some address)

//Refactor Requirement(s)
//Address the feedback as best you are able(fix bugs, 
//add missing/ineffective tests, improve output, add
//comments, etc).Be sure to test and comment your changes.

//Write SquareOf function
void SquareOf(double* valueOne, double* valueTwo) {

	double valueOneSquared = *valueOne * *valueOne;
	double valueTwoSquared = *valueTwo * *valueTwo;

	//Check which squared value is greater
	if (valueOneSquared > valueTwoSquared)
	{
		*valueOne = valueOneSquared;
		*valueTwo = valueOneSquared;
	}
	else if (valueTwoSquared > valueOneSquared)
	{
		*valueOne = valueTwoSquared;
		*valueTwo = valueTwoSquared;
	}
}
#include <stdio.h>
#include "MathLibrary.h"

//madisont - prog71985 - assign3 refactor, q1

//Question 1: SquareOf() function and tests
//o Specifications : 4.0 / 4.0 (The program works and meets all of the specifications.)
//o Readability + Design : 4.0 / 4.0 (The code is exceptionally well organized and 
//readable due to the use of good variable names, data and function structure.The code is 
//designed ‘defensively’(meaning garbage is kept out).The code allows for both effective 
//testing and extension.)
//o Reusability : 4.0 / 4.0 (The code is exceptionally well organized into ADTs/modules,
//demonstrating SRP, coupling and cohesion.)
//o Documentation : 4.0 / 4.0 (The documentation is well written and clearly explains 
//what the code is accomplishing and how.)

//quick source code test
int main(void) {

	double valueOne = 6.5;
	double valueTwo = 8.23;

	//Value One and Two before squaring both values
	printf("Value One = %lf and Value Two = %lf.\n", valueOne, valueTwo);

	SquareOf(&valueOne, &valueTwo);

	//Value One and Two after squaring both values
	//And setting both to the larger of the two results
	printf("Value One = %lf and Value Two = %lf.\n", valueOne, valueTwo);

	return 0;
}
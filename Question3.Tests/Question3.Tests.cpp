#include "pch.h"
#include "CppUnitTest.h"

extern "C" void SumTwoArraysIntoThird(int[], int[], int[], int);
extern "C" bool arraysEqual(int arrayOne[], int arrayTwo[], int sizeOfArray); 

//madisont - prog71985 - assign3, q3

//Write a series of tests for SumTwoArraysIntoThird function

//Arrange: Declaring/initializing
//Act: Call the function
//Assert: Check the result

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Question3Tests
{
	TEST_CLASS(Question3Tests)
	{
	public:
		
		TEST_METHOD(SumTwoArraysTest_AllPositiveValues)
		{
			//Arrange
			int arrayOne[] = { 1,2,3,4,5 };
			int arrayTwo[] = { 6,7,8,9,10 };
			int arraySum[5];
			int sizeOfArray = sizeof(arrayOne) / sizeof(arrayOne[0]);
			int expected[] = { 7,9,11,13,15 };
			//Act
			SumTwoArraysIntoThird(arrayOne, arrayTwo, arraySum, sizeOfArray);
			//Assert
			Assert::IsTrue(arraysEqual(arraySum, expected, sizeOfArray));
		}

		TEST_METHOD(SumTwoArraysTest_AllNegativeValues)
		{
			//Arrange
			int arrayOne[] = { -1,-2,-3,-4,-5 };
			int arrayTwo[] = { -6,-7,-8,-9,-10 };
			int arraySum[5];
			int sizeOfArray = sizeof(arrayOne) / sizeof(arrayOne[0]);
			int expected[] = { -7,-9,-11,-13,-15 };
			//Act
			SumTwoArraysIntoThird(arrayOne, arrayTwo, arraySum, sizeOfArray);
			//Assert
			Assert::IsTrue(arraysEqual(arraySum, expected, sizeOfArray)); 
		}

		TEST_METHOD(SumTwoArraysTest_arrayOneisPositive_arrayTwoisNegative)
		{
			//Arrange
			int arrayOne[] = { -1,-2,-3,-4,-5 };
			int arrayTwo[] = { 6,7,8,9,10 };
			int arraySum[5];
			int sizeOfArray = sizeof(arrayOne) / sizeof(arrayOne[0]);
			int expected[] = { 5,5,5,5,5 };
			//Act
			SumTwoArraysIntoThird(arrayOne, arrayTwo, arraySum, sizeOfArray);
			//Assert
			Assert::IsTrue(arraysEqual(arraySum, expected, sizeOfArray));
		}

		TEST_METHOD(SumTwoArraysTest_AllZeroValues)
		{
			//Arrange
			int arrayOne[] = { 0,0,0 };
			int arrayTwo[] = { 0,0,0 };
			int arraySum[3];
			int sizeOfArray = sizeof(arrayOne) / sizeof(arrayOne[0]);
			int expected[] = { 0,0,0 };
			//Act
			SumTwoArraysIntoThird(arrayOne, arrayTwo, arraySum, sizeOfArray);
			//Assert
			Assert::IsTrue(arraysEqual(arraySum, expected, sizeOfArray));
		}

		TEST_METHOD(SumTwoArraysTest_arrayOneSmaller)
		{
			//Arrange
			int arrayOne[] = { 1,2,3,4 };
			int arrayTwo[] = { 6,7,8,9,10 };
			int arraySum[4];
			int sizeOfArray = sizeof(arrayOne) / sizeof(arrayOne[0]);
			int expected[] = { 7,9,11,13 };
			//Act
			SumTwoArraysIntoThird(arrayOne, arrayTwo, arraySum, sizeOfArray);
			//Assert
			Assert::IsTrue(arraysEqual(arraySum, expected, sizeOfArray));
		}
		//Added test for mixture of + and - values in both arrays
		TEST_METHOD(SumTwoArraysTest_randomizedValues)
		{
			//Arrange
			int arrayOne[] = { -1,2,-8,-4 };
			int arrayTwo[] = { 6,-4,8,-9 };
			int arraySum[4];
			int sizeOfArray = sizeof(arrayOne) / sizeof(arrayOne[0]);
			int expected[] = { 5,-2,0,-13 };
			//Act
			SumTwoArraysIntoThird(arrayOne, arrayTwo, arraySum, sizeOfArray);
			//Assert
			Assert::IsTrue(arraysEqual(arraySum, expected, sizeOfArray));
		}
	};
}

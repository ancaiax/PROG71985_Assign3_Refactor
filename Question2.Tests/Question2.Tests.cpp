#include "pch.h"
#include "CppUnitTest.h"

extern "C" float ArrayDifference(float[], int);

//madisont - prog71985 - assign3, q2 - tests

//Write a series of tests for ArrayDifference function

//Arrange: Declaring/initializing
//Act: Call the function
//Assert: Check the result

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Question2Tests
{
	TEST_CLASS(Question2Tests)
	{
	public:
		
		TEST_METHOD(ArrayDifferenceTest_MinFirst_MaxLast)
		{
			//Arrange
			float testArray[] = { 1.45, 6.3, 5.43, 8.32 };
			int sizeOfArray = sizeof(testArray) / sizeof(testArray[0]);
			float Expected = 8.32f - 1.45f;
			//Act
			float Actual = ArrayDifference(testArray, sizeOfArray);
			//Assert
			Assert::AreEqual(Actual, Expected);
		}

		TEST_METHOD(ArrayDifferenceTest_MinLast_MaxFirst)
		{
			//Arrange
			float testArray[] = { 8.32, 6.3, 5.43, 1.45 };
			int sizeOfArray = sizeof(testArray) / sizeof(testArray[0]);
			float Expected = 8.32f - 1.45f;
			//Act
			float Actual = ArrayDifference(testArray, sizeOfArray);
			//Assert
			Assert::AreEqual(Actual, Expected);
		}

		TEST_METHOD(ArrayDifferenceTest_MinAndMaxAreEqual)
		{
			//Arrange
			float testArray[] = { 3.14, 3.14, 3.14 };
			int sizeOfArray = sizeof(testArray) / sizeof(testArray[0]);
			float Expected = 3.14f - 3.14f;
			//Act
			float Actual = ArrayDifference(testArray, sizeOfArray);
			//Assert
			Assert::AreEqual(Actual, Expected);
		}

		TEST_METHOD(ArrayDifferenceTest_ArrayOfZeros)
		{
			//Arrange
			float testArray[] = { 0, 0, 0, 0 };
			int sizeOfArray = sizeof(testArray) / sizeof(testArray[0]);
			float Expected = 0;
			//Act
			float Actual = ArrayDifference(testArray, sizeOfArray);
			//Assert
			Assert::AreEqual(Actual, Expected);
		}

		TEST_METHOD(ArrayDifferenceTest_MinNegative_MaxPositive)
		{
			//Arrange
			float testArray[] = { 1.2, -2.34, 4.56, 7.82 };
			int sizeOfArray = sizeof(testArray) / sizeof(testArray[0]);
			float Expected = 7.82f - -2.34f;
			//Act
			float Actual = ArrayDifference(testArray, sizeOfArray);
			//Assert
			Assert::AreEqual(Actual, Expected);
		}

		TEST_METHOD(ArrayDifferenceTest_MinAndMaxAreNegative)
		{
			//Arrange
			float testArray[] = { -6.78, -2.79, -9.54, -3.46 };
			int sizeOfArray = sizeof(testArray) / sizeof(testArray[0]);
			float Expected = -2.79f - -9.54f;
			//Act
			float Actual = ArrayDifference(testArray, sizeOfArray);
			//Assert
			Assert::AreEqual(Actual, Expected);
		}
	};
}

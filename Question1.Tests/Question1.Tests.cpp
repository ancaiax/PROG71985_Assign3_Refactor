#include "pch.h"
#include "CppUnitTest.h"

extern "C" void SquareOf(double*, double*);

//madisont - prog71985 - assign3, q1 - tests

//Write a series of tests for SquareOf function

//Arrange: Declaring/initializing
//Act: Call the function
//Assert: Check the result

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Question1Tests
{
	TEST_CLASS(Question1Tests)
	{
	public:
		
		TEST_METHOD(SquareOfTest_ValueTwo_Larger)
		{
			//Arrange
			double valueOne = 6.5;
			double valueTwo = 8.23;
			double Expected = 8.23 * 8.23;
			//Act
			SquareOf(&valueOne, &valueTwo);
			//Assert
			Assert::AreEqual(valueOne, valueTwo, Expected);
		}

		TEST_METHOD(SquareOfTest_ValueOne_Larger)
		{
			//Arrange
			double valueOne = 7.239;
			double valueTwo = 2.34;
			double Expected = 7.239 * 7.239;
			//Act
			SquareOf(&valueOne, &valueTwo);
			//Assert
			Assert::AreEqual(valueOne, valueTwo, Expected);
		}

		TEST_METHOD(SquareOfTest_ValuesAreNegative)
		{
			//Arrange
			double valueOne = -6.78;
			double valueTwo = -3.4;
			double Expected = -6.78 * -6.78;
			//Act
			SquareOf(&valueOne, &valueTwo);
			//Assert
			Assert::AreEqual(valueOne, valueTwo, Expected);
		}

		TEST_METHOD(SquareOfTest_ValuesAreEqual)
		{
			//Arrange
			double valueOne = 7.8;
			double valueTwo = 7.8;
			double Expected = 7.8 * 7.8;
			//Act
			SquareOf(&valueOne, &valueTwo);
			//Assert
			Assert::AreEqual(valueOne, valueTwo, Expected);
		}

		TEST_METHOD(SquareOfTest_ValuesAreZero)
		{
			//Arrange
			double valueOne = 0;
			double valueTwo = 0;
			double Expected = 0;
			//Act
			SquareOf(&valueOne, &valueTwo);
			//Assert
			Assert::AreEqual(valueOne, valueTwo, Expected);
		}
		//Added to test one negative one positive
		TEST_METHOD(SquareOfTest_ValueOneNegative)
		{
			//Arrange
			double valueOne = -3.5;
			double valueTwo = 9;
			double Expected = -3.5 * 9;
			//Act
			SquareOf(&valueOne, &valueTwo);
			//Assert
			Assert::AreEqual(valueOne, valueTwo, Expected);
		}
		//Added to test one negative one positive
		TEST_METHOD(SquareOfTest_ValueTwoNegative)
		{
			//Arrange
			double valueOne = 4.4;
			double valueTwo = -6.23;
			double Expected = 4.4 * -6.23;
			//Act
			SquareOf(&valueOne, &valueTwo);
			//Assert
			Assert::AreEqual(valueOne, valueTwo, Expected);
		}
	};
}

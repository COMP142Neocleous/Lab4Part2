#include "pch.h"
#include "CppUnitTest.h"
#include "../Matrix.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestBoolFunction
{
	TEST_CLASS(UnitTestBoolFunction)
	{
	public:
		
		//Tests if method isSquare can produce a false result
		TEST_METHOD(TestMethod_isSquare_false)
		{
			//Arrange
			const int ROW = 5;
			const double mat[ROW][MAX_COL] = { 0 };
			bool yesItIs;

			//Act
			yesItIs = isSquare(mat, ROW);

			//Assert
			Assert::IsFalse(yesItIs);
		}

		//Tests if method isSquare can produce a true result
		TEST_METHOD(TestMethod_isSquare_true)
		{
			//Arrange
			const int ROW = 2;
			const double mat[ROW][MAX_COL] = { 0 };
			bool yesItIs;

			//Act
			yesItIs = isSquare(mat, ROW);

			//Assert
			Assert::IsTrue(yesItIs);

		}

		//Tests if method findMaxElement can track a different maximum other than [0,0]
		TEST_METHOD(TestMethod_findMax)
		{
			//Arrange
			const int ROW = 3;
			double mat[ROW][MAX_COL] = { 0 };
			mat[1][1] = 5;
			double maximum;

			//Act
			maximum = findMaxElement(mat, ROW);

			//Assert
			Assert::AreNotEqual(mat[0][0], maximum);

		}
	};
}

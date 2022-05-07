#include "pch.h"
#include "CppUnitTest.h"
#include "../Matrix.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestBoolFunction
{
	TEST_CLASS(UnitTestBoolFunction)
	{
	public:
		
		TEST_METHOD(TestMethod_isSquare)
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
	};
}

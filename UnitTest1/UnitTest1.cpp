#include "pch.h"
#include "CppUnitTest.h"
#include "../1.1/Complex.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{ // Arrange
			Progression progression;
			double a0 = 2.0;
			double r = 3.0;
			progression.Init(a0, r);

			// Act
			double result = progression.elementJ(3);

			// Assert
			Assert::AreEqual(54.0, result); // Перевіряємо, чи елемент з індексом 3 дорівнює 54.0
		}
	};
}
#include "pch.h"
#include "CppUnitTest.h"
#include "../lab 5.1/lab 5.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double result = h(2, 3);
			Assert::AreEqual(result, 2 * 2 * sin(3) + 3 * 3 * cos(2), 0.0001);
		}
	};
}

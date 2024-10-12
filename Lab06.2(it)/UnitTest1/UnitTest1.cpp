#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab06.2(it)/Lab06.2(it).cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int a[5] = { 1, 3, -5, 7, 2 };
			int expected_max = 7;
			Assert::AreEqual(expected_max, MaxElement(a, 5));
		}
	};
}

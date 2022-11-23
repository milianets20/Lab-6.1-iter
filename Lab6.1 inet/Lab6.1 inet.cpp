#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab6.1 inter/Lab6.1 inter.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Lab61inet
{
	TEST_CLASS(Lab61inet)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int arr[6] = { -5, -1, 1, -4, 7, 9 };
			int t = 0;
			t = Sum(arr, 6);
			Assert::AreEqual(-10, t);
		}
	};
}

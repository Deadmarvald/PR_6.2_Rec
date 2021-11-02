#include "pch.h"
#include "CppUnitTest.h"
#include "../PR6.2Rec/Lab_06_2_Rec.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UT62Rec
{
	TEST_CLASS(UT62Rec)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int t;
			const int k = 2;
			int a[k] = { 1, 2 };
			t = Max(a, k, 1, a[0]);
			Assert::AreEqual(2, t);
		}
	};
}

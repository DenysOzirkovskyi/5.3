#include "pch.h"
#include "CppUnitTest.h"
#include "../5.3.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest2
{
	TEST_CLASS(UnitTest2)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int m;
			m = f(0);
			Assert::AreEqual(m, 0);

		}
	};
}

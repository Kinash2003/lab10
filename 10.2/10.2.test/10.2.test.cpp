#include "pch.h"
#include "CppUnitTest.h"
#include "../10.2/10.2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace My102test
{
	TEST_CLASS(My102test)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int t;
			t = false;
			Assert::AreEqual(t, 0);

		}
	};
}

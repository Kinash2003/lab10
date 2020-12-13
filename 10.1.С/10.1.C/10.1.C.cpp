#include "pch.h"
#include "CppUnitTest.h"
#include "../10.1.С/10.1.С.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace My101C
{
	TEST_CLASS(My101C)
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

#include "stdafx.h"
#include "CppUnitTest.h"

#include "..\task3\num.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestALarger)
		{
			Assert::IsTrue(max(20,15));
		}

		TEST_METHOD(TestBLarger)
		{
			Assert::IsTrue(max(10, 11));
		}

	};
}
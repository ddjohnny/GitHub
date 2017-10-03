#include "stdafx.h"
#include "CppUnitTest.h"

#include "..\task2\funcs.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace testTask2
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestPrimes)
		{
			Assert::IsTrue(is_prime(3));
			Assert::IsTrue(is_prime(11));
			Assert::IsTrue(is_prime(37));
		}

		TEST_METHOD(TestNotPrimes)
		{
			Assert::IsFalse(is_prime(10));
			Assert::IsFalse(is_prime(20));
			Assert::IsFalse(is_prime(50));

		}

	};
}





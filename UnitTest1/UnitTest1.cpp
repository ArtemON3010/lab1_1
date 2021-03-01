#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab1_1/FloatPower.h"
#include "../Lab1_1/FloatPower.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			FloatPower a, b;
			a.Init(2, 4);
			b.Init(0.5, -2);

			double res1, res2;
			res1 = a.power();
			res2 = b.power();
			Assert::AreEqual(res1, 16.0);
			Assert::AreEqual(res2, 4.0);
	
		}
	};
}

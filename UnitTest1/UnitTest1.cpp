#include "pch.h"
#include "CppUnitTest.h"
#include "../lab1.5(2)/Triad.h"
#include "../lab1.5(2)/Time.h"
#include "../lab1.5(2)/Triad.cpp"
#include "../lab1.5(2)/Time.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			/*Triad t2;
			t2.Init(1, 2, 3);*/
			Triad t1,t2;
			t1.Init(1, 2, 3);
			t2.Init(1, 2, 3);
			bool t = t1.Equals(t1,t2);
			Assert::AreEqual(t, false);
		}
		TEST_METHOD(TestMethod2)
		{
			/*Triad t2;
			t2.Init(1, 2, 3);*/
			Time t1;
			t1.Init1(1,2,3);
			bool t = t1.Equal();
			Assert::AreEqual(t, true);
		}
	};
}

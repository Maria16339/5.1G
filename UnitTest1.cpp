#include "pch.h"
#include "CppUnitTest.h"
#include "C://Users/User/source/repos/5.1G/5.1G/MyDerivedException.cpp"
#include "C://Users/User/source/repos/5.1G/5.1G/MyException.cpp"
#include "C://Users/User/source/repos/5.1G/5.1G/Pair.cpp"
#include "C://Users/User/source/repos/5.1G/5.1G/Rectangle.cpp"
#include "C://Users/User/source/repos/5.1G/5.1G/Object.cpp"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Rectangle T(3, 4);
			Assert::AreEqual(T.Square(), 12.0);
		}
	};
}

#include "pch.h"
#include "CppUnitTest.h"
#include "c:\users\misha\source\repos\1.2\1.2\1.2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int rowCount = 3;
			int colCount = 3;
			int Low = 0;
			int High = 10;
			float** a = new float* [rowCount];
			for (int i = 0; i < rowCount; i++)
				a[i] = new float[colCount];
			Matrix p;
			p.Create(a, rowCount, colCount, Low, High);
			 
			
			p.Read();
			p.Display();
			p.Print(a);
			int f = p.Max(a, rowCount, colCount);
			Assert::AreEqual(f, 4);
		}
	};
}

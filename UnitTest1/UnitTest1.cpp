#include "pch.h"
#include "C:\Users\Misha\source\repos\1.2\1.2\Матриця.cpp"
#include "c:\users\misha\source\repos\1.2\1.2\Матриця.h"
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
			int rowCount = 2;
			int colCount = 2;

			float** a = new float* [rowCount];
			for (int i = 0; i < rowCount; i++)
				a[i] = new float[colCount];
			Matrix l;
			a[0][0] = 0;
			a[0][1] = 1;
			a[1][0] = 2;
			a[1][1] = 1;
			l.setCols(2);
			l.setRows(2);
			l.setB(a);
			int result = l.Summa(a);

			Assert::AreEqual(result, 4);
		}
	};
}

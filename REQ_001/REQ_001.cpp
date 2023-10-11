#include "pch.h"
#include "CppUnitTest.h"

extern "C" int getPerimeter(int* length, int* width);
extern "C" int getArea(int* length, int* width);
extern "C" void setLength(int input, int* length);
extern "C" void setWidth(int input, int* width);

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace REQ001
{
	TEST_CLASS(REQ001)
	{
	public:

		TEST_METHOD(Perimeter)
		{
			int length = 2;
			int width = 4;
			int result = getPerimeter(&length, &width);
			Assert::AreEqual(12, result);
		}

		TEST_METHOD(Area)
		{
			int length = 2;
			int width = 4;
			int result = getArea(&length, &width);
			Assert::AreEqual(8, result);
		}
		TEST_METHOD(Length1)
		{
			int result = 100;
			int input = 100;
			int length = 1;
			setLength(input, &length);
			result = length;
			Assert::AreEqual(100, result);

		}
		TEST_METHOD(Length2)
		{
			char input = 's';
			int length = 1;
			setLength(input, &length);
			int result = length;
			Assert::AreEqual(1, result);
		}
		TEST_METHOD(Length3)
		{
			int result = 0;
			int input = 0;
			int length = 1;
			setLength(input, &length);
			result = length;
			Assert::AreEqual(0, result);
		}
		TEST_METHOD(Width1)
		{
			int result = 0;
			int input = 0;
			int width = 1;
			setWidth(input, &width);
			result = width;
			Assert::AreEqual(0, result);
		}
		TEST_METHOD(Width2)
		{
			char input = 's';
			int width = 1;
			setWidth(input, &width);
			int result = width;
			Assert::AreEqual(1, result);

		}
		TEST_METHOD(Width3)
		{
			int result = 100;
			int input = 100;
			int width = 1;
			setWidth(input, &width);
			result = width;
			Assert::AreEqual(100, result);
		}
		
	};
};
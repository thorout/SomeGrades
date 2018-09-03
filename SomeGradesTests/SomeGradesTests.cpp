// SomeGradesTests.cpp : Defines the entry point for the console application.
//

#include "gtest/gtest.h"
#include "gmock/gmock.h"


TEST(testCategory, testName)
{
	ASSERT_EQ(1, 1);
}

int main(int argc, char** argv) {
	std::cout << "Running main() from gmock_main.cc\n";
	testing::InitGoogleMock(&argc, argv);
	return RUN_ALL_TESTS();
}

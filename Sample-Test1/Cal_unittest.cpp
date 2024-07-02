#include "pch.h"
#include "../getWhat/Cal.cpp"

TEST(TestCaseName, TestName) {
  EXPECT_EQ(1, 1);
  EXPECT_TRUE(true);
}

TEST(TestCaseName, TestZegop) {
	Cal calculator;
	EXPECT_EQ(calculator.getZegop(1), 1);
	EXPECT_EQ(calculator.getZegop(5), 25);
	EXPECT_EQ(calculator.getZegop(10), 100);
	EXPECT_EQ(calculator.getZegop(11), 121);
	EXPECT_EQ(calculator.getZegop(17), 289);
}

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

TEST(TestCaseName, minusTest) {
  Cal cal;
  EXPECT_EQ(cal.getMinus(3, 1), 2);
}

TEST(TestCaseCal, TestSum)
{
  Cal c;
  int sum = c.getSum(1, 1);

  EXPECT_EQ(2, sum);
}

TEST(TestCaseCal, TestSumSum)
{
    Cal c;
    int sum = c.getSumSum(1, 1, 1);

    EXPECT_EQ(3, sum);
}

TEST(TestCaseName, getGop1) {
	Cal cal;
	int gopResult = cal.getGop(5, 7);
	EXPECT_EQ(35, gopResult);
}

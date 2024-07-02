#include "pch.h"
#include "../getWhat/Cal.cpp"

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

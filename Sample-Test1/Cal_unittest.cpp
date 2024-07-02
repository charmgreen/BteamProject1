#include "pch.h"
#include "../getWhat/Cal.cpp"

TEST(TestCaseName, minusTest) {
  Cal cal;
  EXPECT_EQ(cal.getMinus(3, 1), 2);
}
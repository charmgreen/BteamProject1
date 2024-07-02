#include "pch.h"
#include "../getWhat/Cal.cpp"

TEST(TestCaseName, TestName) {
  EXPECT_EQ(1, 1);
  EXPECT_TRUE(true);
}


TEST(TsCalcDivide, TcCalcDivide000) {

	Cal c;
	EXPECT_EQ(c.getDivide(100, 10), 10);
}

TEST(TsCalcDivide, TcCalcDivide001) {

	Cal c;
	EXPECT_EQ(c.getDivide(1, 1), 1);
}

TEST(TsCalcDivide, TcCalcDivide002) {

	Cal c;
	EXPECT_EQ(c.getDivide(0, 1), 0);
}

TEST(TsCalcDivide, TcCalcDivide003) {

	Cal c;
	// Check Divide By Zero 회피
	EXPECT_EQ(c.getDivide(100, 0), 2147483647);
}

TEST(TsCalcDivide, TcCalcDivide004) {

	Cal c;
	EXPECT_EQ(c.getDivide(-100, 0), -2147483648);
}
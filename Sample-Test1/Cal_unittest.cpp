#include "pch.h"
#include "../getWhat/Cal.cpp"

TEST(TestCaseName, getGop1) {
	Cal cal;
	int gopResult = cal.getGop(5, 7);
	EXPECT_EQ(35, gopResult);
}


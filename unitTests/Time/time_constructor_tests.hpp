#ifndef __TIME_CONSTRUCTOR_TESTS__
#define __TIME_CONSTRUCTOR_TESTS__

#include "gtest/gtest.h"

#include "../../attributeClasses/Time.hpp"

TEST(Time_Constructor, Default_Constructor){
	
	Time* test = new Time();

	EXPECT_EQ(test->getHour(), 0);
	EXPECT_EQ(test->getMinute(), 0);

	delete test;

}

TEST(Time_Constructor, Hour_Param_Only){

	Time* test = new Time(1);

	EXPECT_EQ(test->getHour(), 1);
	EXPECT_EQ(test->getMinute(), 0);

	delete test;

}

TEST(Time_Constructor, All_Params){

	Time* test = new Time(1, 1);

	EXPECT_EQ(test->getHour(), 1);
	EXPECT_EQ(test->getMinute(), 1);

	delete test;

}

#endif

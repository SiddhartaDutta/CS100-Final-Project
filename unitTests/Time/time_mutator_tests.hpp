#ifndef __TIME_MUTATOR_TESTS__
#define __TIME_MUTATOR_TESTS__

#include "gtest/gtest.h"

#include "../../attributeClasses/Time.hpp"

// HOUR TESTS
TEST(Time_Hour_Mutator, Expected_Input){

	Time* test = new Time();

	test->setHour(1);

	EXPECT_EQ(test->getHour(), 1);
	EXPECT_EQ(test->getMinute(), 0);

        delete test;

}

TEST(Time_Hour_Mutator, Zero_Input){

        Time* test = new Time(1);

        test->setHour(0);

        EXPECT_EQ(test->getHour(), 0);
        EXPECT_EQ(test->getMinute(), 0);

        delete test;

}

TEST(Time_Hour_Mutator, Negative_Input){

        Time* test = new Time();

        test->setHour(-1);

        EXPECT_EQ(test->getHour(), -1);
        EXPECT_EQ(test->getMinute(), 0);

        delete test;

}

// MINUTE TESTS
TEST(Time_Minute_Mutator, Expected_Input){

	Time* test = new Time();

	test->setMinute(1);

	EXPECT_EQ(test->getHour(), 0);
	EXPECT_EQ(test->getMinute(), 1);

        delete test;

}

TEST(Time_Minute_Mutator, Zero_Input){

        Time* test = new Time(0, 1);

        test->setMinute(0);

        EXPECT_EQ(test->getHour(), 0);
        EXPECT_EQ(test->getMinute(), 0);

        delete test;

}

TEST(Time_Minute_Mutator, Negative_Input){

        Time* test = new Time();

        test->setMinute(-1);

        EXPECT_EQ(test->getHour(), 0);
        EXPECT_EQ(test->getMinute(), -1);

        delete test;

}

#endif

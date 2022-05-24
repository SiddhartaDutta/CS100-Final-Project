#ifndef __TIME_MUTATOR_TESTS__
#define __TIME_MUTATOR_TESTS__

#include "gtest/gtest.h"

#include "../../attributeClasses/Time.hpp"

// HOUR TESTS
TEST(TimeHourMutator, ExpectedInput){

	Time* test = new Time();

	test->setHour(1);

	EXPECT_EQ(test->getHour(), 1);
	EXPECT_EQ(test->getMinute(), 0);

}

TEST(TimeHourMutator, ZeroInput){

        Time* test = new Time(1);

        test->setHour(0);

        EXPECT_EQ(test->getHour(), 0);
        EXPECT_EQ(test->getMinute(), 0);

}

TEST(TimeHourMutator, NegativeInput){

        Time* test = new Time();

        test->setHour(-1);

        EXPECT_EQ(test->getHour(), -1);
        EXPECT_EQ(test->getMinute(), 0);

}

#endif

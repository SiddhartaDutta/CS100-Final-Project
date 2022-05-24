#ifndef __DATE_MUTATOR_TESTS__
#define __DATE_MUTATOR_TESTS__

#include "gtest/gtest.h"

#include "../../attributeClasses/Date.hpp"

TEST(DateMonthMutator, ExpectedInput){

	Date* test = new Date();

	test->setMonth(1);

	EXPECT_EQ(test->getMonth(), 1);
	EXPECT_EQ(test->getDay(), 0);
	EXPECT_EQ(test->getYear(), 0);

}

TEST(DateMonthMutator, ZeroInput){

	Date* test = new Date(1);

	test->setMonth(0);
	
	EXPECT_EQ(test->getMonth(), 0);
	EXPECT_EQ(test->getDay(), 0);
	EXPECT_EQ(test->getYear(), 0);

}

TEST(DateMonthMutator, NegativeInput){
	Date* test = new Date();

        test->setMonth(-1);

        EXPECT_EQ(test->getMonth(), -1);
        EXPECT_EQ(test->getDay(), 0);
        EXPECT_EQ(test->getYear(), 0);
}

#endif

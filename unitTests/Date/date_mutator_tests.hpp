#ifndef __DATE_MUTATOR_TESTS__
#define __DATE_MUTATOR_TESTS__

#include "gtest/gtest.h"

#include "../../attributeClasses/Date.hpp"

// MONTH TESTS
TEST(Date_Month_Mutator, Expected_Input){

	Date* test = new Date();

	test->setMonth(1);

	EXPECT_EQ(test->getMonth(), 1);
	EXPECT_EQ(test->getDay(), 0);
	EXPECT_EQ(test->getYear(), 0);

        delete test;

}

TEST(Date_Month_Mutator, Zero_Input){

	Date* test = new Date(1);

	test->setMonth(0);
	
	EXPECT_EQ(test->getMonth(), 0);
	EXPECT_EQ(test->getDay(), 0);
	EXPECT_EQ(test->getYear(), 0);

        delete test;

}

TEST(Date_Month_Mutator, Negative_Input){

	Date* test = new Date();

        test->setMonth(-1);

        EXPECT_EQ(test->getMonth(), -1);
        EXPECT_EQ(test->getDay(), 0);
        EXPECT_EQ(test->getYear(), 0);

        delete test;
}

// DAY TESTS
TEST(Date_Day_Mutator, Expected_Input){
	
	Date* test = new Date();

	test->setDay(1);

	EXPECT_EQ(test->getMonth(), 0);
	EXPECT_EQ(test->getDay(), 1);
	EXPECT_EQ(test->getYear(), 0);

        delete test;

}

TEST(Date_Day_Mutator, Zero_Input){

        Date* test = new Date(0, 1);

        test->setDay(0);

        EXPECT_EQ(test->getMonth(), 0);
        EXPECT_EQ(test->getDay(), 0);
        EXPECT_EQ(test->getYear(), 0);

        delete test;

}

TEST(Date_Day_Mutator, Negative_Input){

        Date* test = new Date();

        test->setDay(-1);

        EXPECT_EQ(test->getMonth(), 0);
        EXPECT_EQ(test->getDay(), -1);
        EXPECT_EQ(test->getYear(), 0);

        delete test;

}

// YEAR TESTS
TEST(Date_Year_Mutator, Expected_Input){

        Date* test = new Date();

        test->setYear(1);

        EXPECT_EQ(test->getMonth(), 0);
        EXPECT_EQ(test->getDay(), 0);
        EXPECT_EQ(test->getYear(), 1);

        delete test;

}

TEST(Date_Year_Mutator, Zero_Input){

        Date* test = new Date(0, 0, 1);

        test->setYear(0);

        EXPECT_EQ(test->getMonth(), 0);
        EXPECT_EQ(test->getDay(), 0);
        EXPECT_EQ(test->getYear(), 0);

        delete test;

}

TEST(Date_Year_Mutator, Negative_Input){

        Date* test = new Date();

        test->setYear(-1);

        EXPECT_EQ(test->getMonth(), 0);
        EXPECT_EQ(test->getDay(), 0);
        EXPECT_EQ(test->getYear(), -1);

        delete test;

}

#endif

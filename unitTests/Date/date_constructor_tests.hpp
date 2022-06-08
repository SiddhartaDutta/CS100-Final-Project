#ifndef __DATE_CONSTRUCTOR_TESTS__
#define __DATE_CONSTRUCTOR_TESTS__

#include "gtest/gtest.h"

#include "../../attributeClasses/Date.hpp"

TEST(DateConstructor, DefaultConstructor){

	Date* test = new Date();

	EXPECT_EQ(test->getMonth(), 0);
	EXPECT_EQ(test->getDay(), 0);
	EXPECT_EQ(test->getYear(), 0);

	delete test;

}

TEST(DateConstructor, MonthParamOnly){

	Date* test = new Date(1);

	EXPECT_EQ(test->getMonth(), 1);
	EXPECT_EQ(test->getDay(), 0);
	EXPECT_EQ(test->getYear(), 0);

	delete test;

}

TEST(DateConstructor, MonthAndDayParamOnly){

	Date* test = new Date(1, 31);
	
	EXPECT_EQ(test->getMonth(), 1);
	EXPECT_EQ(test->getDay(), 31);
	EXPECT_EQ(test->getYear(), 0);

	delete test;

}

TEST(DateConstructor, AllParams){

	Date* test = new Date(1, 31, 2022);

	EXPECT_EQ(test->getMonth(), 1);
	EXPECT_EQ(test->getDay(), 31);
	EXPECT_EQ(test->getYear(), 2022);

	delete test;

}

#endif

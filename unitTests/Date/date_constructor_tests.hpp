#ifndef __DATE_CONSTRUCTOR_TESTS__
#define __DATE_CONSTRUCTOR_TESTS__

#include "gtest/gtest.h"

#include "../../attributeClasses/Date.hpp"

TEST(Date_Constructor, Default_Constructor){

	Date* test = new Date();

	EXPECT_EQ(test->getMonth(), 0);
	EXPECT_EQ(test->getDay(), 0);
	EXPECT_EQ(test->getYear(), 0);

	delete test;

}

TEST(Date_Constructor, Month_Param_Only){

	Date* test = new Date(1);

	EXPECT_EQ(test->getMonth(), 1);
	EXPECT_EQ(test->getDay(), 0);
	EXPECT_EQ(test->getYear(), 0);

	delete test;

}

TEST(Date_Constructor, Month_And_Day_Param_Only){

	Date* test = new Date(1, 31);
	
	EXPECT_EQ(test->getMonth(), 1);
	EXPECT_EQ(test->getDay(), 31);
	EXPECT_EQ(test->getYear(), 0);

	delete test;

}

TEST(Date_Constructor, All_Params){

	Date* test = new Date(1, 31, 2022);

	EXPECT_EQ(test->getMonth(), 1);
	EXPECT_EQ(test->getDay(), 31);
	EXPECT_EQ(test->getYear(), 2022);

	delete test;

}

#endif

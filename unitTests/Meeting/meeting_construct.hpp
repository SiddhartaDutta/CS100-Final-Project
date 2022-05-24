#ifndef __MEETINGS_CONSTRUCT__
#define __MEETINGS_CONSTRUCT__

#include "gtest/gtest.h"

//#include "../../Tasks/ParentTask.hpp"
#include "../../Tasks/Meeting/Meeting.hpp"

//#include "../../attributeClasses/Date.hpp"

TEST(MeetingConstructor, ExpectedFormat){

	Meeting* test = new Meeting("New Meeting", 5, 22, 2022, "UCR", 9, 20, 11, 59);

	// Test title
	EXPECT_EQ(test->getTitle(), "New Meeting");

	// Test month
	EXPECT_EQ(test->getDate()->getMonth(), 5);

	// Test day
	EXPECT_EQ(test->getDate()->getDay(), 22);

	// Test year
	EXPECT_EQ(test->getDate()->getYear(), 2022);

	// Test location
	EXPECT_EQ(test->getLocation(), "UCR");

	// Test start hour
	EXPECT_EQ(test->getStartTime()->getHour(), 9);

	// Test start minute
	EXPECT_EQ(test->getStartTime()->getMinute(), 20);

	// Test end hour
	EXPECT_EQ(test->getEndTime()->getHour(), 11);

	// Test end minute
	EXPECT_EQ(test->getEndTime()->getMinute(), 59);

}

TEST(MeetingConstructor, EmptyConstructor){
	
	Meeting* test = new Meeting();

	// Test title
	EXPECT_EQ(test->getTitle(), "");

	// Test month
	EXPECT_EQ(test->getDate()->getMonth(), 0);

	// Test day
	EXPECT_EQ(test->getDate()->getDay(), 0);

	// Test year
	EXPECT_EQ(test->getDate()->getYear(), 0);

	// Test location
	EXPECT_EQ(test->getLocation(), "");

	// Test start hour
	EXPECT_EQ(test->getStartTime()->getHour(), 0);

	// Test start minute
	EXPECT_EQ(test->getStartTime()->getMinute(), 0);
	
	// Test end hour
	EXPECT_EQ(test->getEndTime()->getHour(), 0);

	// Test end minute
	EXPECT_EQ(test->getEndTime()->getMinute(), 0); 
	
}



#endif

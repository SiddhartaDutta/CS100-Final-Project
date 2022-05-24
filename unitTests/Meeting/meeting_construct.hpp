#ifndef __MEETING_CONSTRUCTORS_TESTS__
#define __MEETING_CONSTRUCTORS_TESTS__

#include "gtest/gtest.h"

#include "../../Tasks/Meeting/Meeting.hpp"

TEST(MeetingConstructor, ExpectedInputs){

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

TEST(MeetingConstructor, UnexpectedInputs){

	Meeting* test = new Meeting("123", 0, -10, -10, "123", 100, -10, -10, 100);

	// Test title
	EXPECT_EQ(test->getTitle(), "123");

	// Test month
	EXPECT_EQ(test->getDate()->getMonth(), 0);

	// Test day
	EXPECT_EQ(test->getDate()->getDay(), -10);

	// Test year
	EXPECT_EQ(test->getDate()->getYear(), -10);

	// Test location
	EXPECT_EQ(test->getLocation(), "123");

	// Test start hour
	EXPECT_EQ(test->getStartTime()->getHour(), 100);

	// Test start minute
	EXPECT_EQ(test->getStartTime()->getMinute(), -10);

	// Test end hour
	EXPECT_EQ(test->getEndTime()->getHour(), -10);

	// Test end minute
	EXPECT_EQ(test->getEndTime()->getMinute(), 100);

}

#endif

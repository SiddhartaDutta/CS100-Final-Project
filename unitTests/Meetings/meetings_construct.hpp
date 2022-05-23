#ifndef __MEETINGS_CONSTRUCT__
#define __MEETINGS_CONSTRUCT__

#include "gtest/gtest.h"

#include "../../Tasks/ParentTask.hpp"
#include "../../Tasks/Meetings/Meetings.hpp"

#include "../../attributeClasses/Date.hpp"

TEST(MeetingConstructor, T1){

	ParentTask* test = new Meetings("New Meeting", 5, 22, 2022, UCR, 9, 20, 11, 59);

	// Test title
	EXPECT_EQ(test->getTitle(), "New Meeting");

	// Test month
	EXPECT_EQ(test->getDate()->getMonth(), 5);

}

#endif

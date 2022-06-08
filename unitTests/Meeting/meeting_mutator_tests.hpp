#ifndef __MEETING_MUTATOR_TESTS__
#define __MEETING_MUTATOR_TESTS__

#include "gtest/gtest.h"

#include "../../Tasks/Meeting/Meeting.hpp"

TEST(Meeting_Location_Mutator, Expected_Input){
    Meeting* test = new Meeting();

    test->setLocation("Test Location: 12345 Street Blvd, LA, CA 12345");

    EXPECT_EQ(test->getLocation(), "Test Location: 12345 Street Blvd, LA, CA 12345");
}

TEST(Meeting_Location_Mutator, EmptyInput){
    Meeting* test = new Meeting("New Meeting", 5, 22, 2022, "UCR", 9, 20, 11, 59);

    EXPECT_EQ(test->getLocation(), "UCR");

    test->setLocation("");

    EXPECT_EQ(test->getLocation(), "");
}

#endif
#ifndef __GENERICTASK_CONSTRUCTOR_TESTS__
#define __GENERICTASK_CONSTRUCTOR_TESTS__

#include "gtest/gtest.h"

#include "../../Tasks/GenericTask/GenericTask.hpp"

TEST(GenericTask_Constructor, Expected_Inputs){

    GenericTask* test = new GenericTask("Test title", "Test Desc. of task @ 123");

    // Test title
    EXPECT_EQ(test->getTitle(), "Test title");

    // Test desc
    EXPECT_EQ(test->getDescription(), "Test Desc. of task @ 123");

    delete test;

}

TEST(GenericTask_Constructor, Empty_Desc){
    
    GenericTask* test = new GenericTask("Test title");

    // Test title
    EXPECT_EQ(test->getTitle(), "Test title");

    // Test desc
    EXPECT_EQ(test->getDescription(), "");

    delete test;

}

TEST(GenericTask_Constructor, Default_Constructor){

    GenericTask* test = new GenericTask();

    // Test title
    EXPECT_EQ(test->getTitle(), "");

    // Test desc
    EXPECT_EQ(test->getDescription(), "");

    delete test;

}

TEST(GenericTask_Constructor, Unexpected_Inputs){

    GenericTask* test = new GenericTask("!2#$%^&*()_+-=/~`?<>,.", "!2#$%^&*()_+-=/~`?<>,.");

    // Test title
    EXPECT_EQ(test->getTitle(), "!2#$%^&*()_+-=/~`?<>,.");

    // Test desc
    EXPECT_EQ(test->getDescription(), "!2#$%^&*()_+-=/~`?<>,.");

    delete test;

}

#endif
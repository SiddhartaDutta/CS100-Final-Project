#ifndef __GENERICTASK_CONSTRUCTOR_TESTS__
#define __GENERICTASK_CONSTRUCTOR_TESTS__

#include "gtest/gtest.h"

#include "../../Tasks/GenericTask/GenericTask.hpp"

TEST(GenericTask_Constructor, ExpectedInputs){

    GenericTask* test = new GenericTask("Test title", "Test Desc. of task @ 123");

    // Test title
    EXPECT_EQ(test->getTitle(), "Test title");

    // Test desc
    EXPECT_EQ(test->getDescription(), "Test Desc. of task @ 123");

    delete test;

}

TEST(GenericTask_Constructor, EmptyDesc){
    
    GenericTask* test = new GenericTask("Test title");

    // Test title
    EXPECT_EQ(test->getTitle(), "Test title");

    // Test desc
    EXPECT_EQ(test->getDescription(), "");

    delete test;

}

TEST(GenericTask_Constructor, EmptyConstructor){

    GenericTask* test = new GenericTask();

    // Test title
    EXPECT_EQ(test->getTitle(), "");

    // Test desc
    EXPECT_EQ(test->getDescription(), "");

    delete test;

}

TEST(GenericTask_Constructor, UnexpectedInputs){

    GenericTask* test = new GenericTask("!2#$%^&*()_+-=/~`?<>,.", "!2#$%^&*()_+-=/~`?<>,.");

    // Test title
    EXPECT_EQ(test->getTitle(), "!2#$%^&*()_+-=/~`?<>,.");

    // Test desc
    EXPECT_EQ(test->getDescription(), "!2#$%^&*()_+-=/~`?<>,.");

    delete test;

}

#endif
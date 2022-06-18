#ifndef __GENERICTASK_MUTATOR_TESTS__
#define __GENERICTASK_MUTATOR_TESTS__

#include "gtest/gtest.h"

#include "../../Tasks/GenericTask/GenericTask.hpp"

TEST(GenericTask_Description_Mutator, Expected_Input){

    GenericTask* test = new GenericTask("Test title", "Test Desc. of task @ 123");

    test->setDescription("New Title");

    EXPECT_EQ(test->getDescription(), "New Title");

}

TEST(GenericTask_Description_Mutator, Empty_Input){

    GenericTask* test = new GenericTask("Test title", "Test Desc. of task @ 123");

    test->setDescription("");

    EXPECT_EQ(test->getDescription(), "");

}

TEST(GenericTask_Description_Mutator, Unexpected_Input){

    GenericTask* test = new GenericTask("Test title", "Test Desc. of task @ 123");

    test->setDescription("!2#$%^&*()_+-=/~`?<>,.");

    EXPECT_EQ(test->getDescription(), "!2#$%^&*()_+-=/~`?<>,.");

}

#endif
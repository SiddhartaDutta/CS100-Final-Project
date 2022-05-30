#ifndef __PARENTTASK_MUTATOR_TESTS__
#define __PARENTTASK_MUTATOR_TESTS__

#include "gtest/gtest.h"

#include "../../Tasks/ParentTask.hpp"
#include "../../Tasks/Meeting/Meeting.hpp"

TEST(ParentTask_NoMenuMutator, ExpectedInput){
    
    ParentTask* test = new Meeting();

    test->setTitle("Sample Title - Event in 2 days.");
    
    EXPECT_EQ(test->getTitle(), "Sample Title - Event in 2 days.");

}

TEST(ParentTask_NoMenuMutator, NumericalInput){

    ParentTask* test = new Meeting();

    test->setTitle("123456.789");
    
    EXPECT_EQ(test->getTitle(), "123456.789");
}

TEST(ParentTask_NoMenuMutator, EmptyInput){

    ParentTask* test = new Meeting();

    test->setTitle("");
    
    EXPECT_EQ(test->getTitle(), "");

}

#endif

#ifndef __PARENTTASK_MUTATOR_TESTS__
#define __PARENTTASK_MUTATOR_TESTS__

#include "gtest/gtest.h"

#include <string>
#include <sstream>

#include "../../Tasks/ParentTask.hpp"
#include "../../Tasks/Meeting/Meeting.hpp"

// Standard Mutator - No Menu
TEST(ParentTask_NoMenuMutator, ExpectedInput){
    
    ParentTask* test = new Meeting();
    string expectedString = "Sample Title - Event in 2 days."

    test->setTitle(expectedString);
    
    EXPECT_EQ(test->getTitle(), expectedString);

}

TEST(ParentTask_NoMenuMutator, NumericalInput){

    ParentTask* test = new Meeting();
    string expectedString = "123456.789"

    test->setTitle(expectedString);
    
    EXPECT_EQ(test->getTitle(), expectedString);
}

TEST(ParentTask_NoMenuMutator, EmptyInput){

    ParentTask* test = new Meeting("Test Title");

    test->setTitle("");
    
    EXPECT_EQ(test->getTitle(), "");

}

// Non-Standard Mutator - With Menu
TEST(ParentTask_MenuMutator, ExpectedInput){

    string titleInput = "Sample Title - Event in 2 days.";

    istringstream input.str(titleInput);
    ostringstream output;

    //input.str(expectedString);

    ParentTask* test = new Meeting();

    test->setTitleFromMenu(input, output);

    string expectedOutput("Input new title: " + "Saved...\n");
    EXPECT_EQ(output.str(), expectedOutput);
}

#endif

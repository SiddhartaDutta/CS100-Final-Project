#ifndef __HOMEWORK_CONSTRUCTORS_TESTS__
#define __HOMEWORK_CONSTRUCTORS_TESTS__

#include "gtest/gtest.h"
#include "../../Tasks/Homework/Homework.hpp"


TEST(Constructor, Inputs){
    Homeworks* test1 = new Homework("new Title", 8, 10, 2023, 4, 15);

    EXPECT_EQ(test->getTitle(), "New Meeting");

	EXPECT_EQ(test->getDate()->getMonth(), 8);

	EXPECT_EQ(test->getDate()->getDay(), 10);

	EXPECT_EQ(test->getDate()->getYear(), 2023);

    EXPECT_EQ(test->GetDueDate()->getHour(), 4);

	EXPECT_EQ(test->GetDueDate()->getMinute(), 15);
}

TEST(Constructor, EditDueDate){

    Homework* test2 = new Homework();

    EXPECT_EQ(test->GetDueDate()->getHour(), 8);

	EXPECT_EQ(test->GetDueDate()->getMinute(), 3);
}

TEST(Constructor, EditDueTime){

    Homework* test3 = new Homework();
    
    EXPECT_EQ(test->GetDueDate()->getHour(), 7);

	EXPECT_EQ(test->GetDueDate()->getMinute(), 45);
}



#endif

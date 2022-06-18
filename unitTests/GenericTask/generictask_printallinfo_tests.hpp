#ifndef __GENERICTASK_PRINTALLINFO_TESTS_HPP__
#define __GENERICTASK_PRINTALLINFO_TESTS_HPP__

#include "gtest/gtest.h"

#include <string>
#include <sstream>

#include "../../Tasks/GenericTask/GenericTask.hpp"

TEST(GenericTask_PrintAllInfo, Expected_Output){

    GenericTask* test = new GenericTask("Test title", "Test Desc. of task @ 123");

    std::ostringstream output;

    std::string str1 = "Title: ";
    std::string str2 = "Test title\n";
    std::string str3 = "\tTask Type: Generic Task\n";
    std::string str4 = "\tDescription: ";
    std::string str5 = "Test Desc. of task @ 123";
    std::string str6 = "\n\n";

    std::string expectedOutput = str1 + str2 + str3 + str4 + str5 + str6;

    test->printAllInfo(output);

    EXPECT_EQ(output.str(), expectedOutput);

}

TEST(GenericTask_PrintAllInfo, Deafult_Constructor_Output){

    GenericTask* test = new GenericTask();

    std::ostringstream output;

    std::string str1 = "Title: ";
    std::string str2 = "\n";
    std::string str3 = "\tTask Type: Generic Task\n";
    std::string str4 = "\tDescription: ";
    std::string str5 = "";
    std::string str6 = "\n\n";

    std::string expectedOutput = str1 + str2 + str3 + str4 + str5 + str6;

    test->printAllInfo(output);

    EXPECT_EQ(output.str(), expectedOutput);

}

TEST(GenericTask_PrintAllInfo, Title_Only_Constructor_Output){

    GenericTask* test = new GenericTask("Test title");

    std::ostringstream output;

    std::string str1 = "Title: ";
    std::string str2 = "Test title\n";
    std::string str3 = "\tTask Type: Generic Task\n";
    std::string str4 = "\tDescription: ";
    std::string str5 = "";
    std::string str6 = "\n\n";

    std::string expectedOutput = str1 + str2 + str3 + str4 + str5 + str6;

    test->printAllInfo(output);

    EXPECT_EQ(output.str(), expectedOutput);

}

#endif
#ifndef __MEETING_PRINTALLINFO_TESTS_HPP__
#define __MEETING_PRINTALLINFO_TESTS_HPP__

#include "gtest/gtest.h"

#include <string>
#include <sstream>

#include "../../Tasks/Meeting/Meeting.hpp"

TEST(Meeting_PrintAllInfo, Expected_Output){

    Meeting* test = new Meeting("Test Title", 1, 1, 2001, "UCR", 0, 0, 23, 59);

    std::ostringstream output;

    std::string str1 = "Title: ";
    std::string str2 = "Test Title\n";
    std::string str3 = "\tTask Type: Meeting\n";
    std::string str4 = "\tDate: 1/1/2001\n";
    std::string str5 = "\tStart Time: 0:0\n";
    std::string str6 = "\tEnd Time: 23:59\n";
    std::string str7 = "\tLocation: UCR";
    std::string str8 = "\n\n";

    std::string expectedOutput = str1 + str2 + str3 + str4 + str5 + str6 + str7 + str8;

    test->printAllInfo(output);

    EXPECT_EQ(output.str(), expectedOutput);

}

TEST(Meeting_PrintAllInfo, Default_Constructor_Output){

    Meeting* test = new Meeting();

    std::ostringstream output;

    std::string str1 = "Title: ";
    std::string str2 = "\n";
    std::string str3 = "\tTask Type: Meeting\n";
    std::string str4 = "\tDate: 0/0/0\n";
    std::string str5 = "\tStart Time: 0:0\n";
    std::string str6 = "\tEnd Time: 0:0\n";
    std::string str7 = "\tLocation: ";
    std::string str8 = "\n\n";

    std::string expectedOutput = str1 + str2 + str3 + str4 + str5 + str6 + str7 + str8;

    test->printAllInfo(output);

    EXPECT_EQ(output.str(), expectedOutput);

}

#endif
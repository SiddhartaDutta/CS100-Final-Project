#ifndef __DATE_FULL_MUTATOR_TESTS__
#define __DATE_FULL_MUTATOR_TESTS__

#include "gtest/gtest.h"

#include <string>
#include <sstream>

#include "../../attributeClasses/Date.hpp"

// TEST(Date_FullMutator, ExpectedInput){

//     std::istringstream input;
//     std::ostringstream output;

//     Date* test = new Date();

//     input.str("1");

//     test->setDate(input, ouput);

//     // Check to output
//     std::string s1 = "Input new year (enter number): ";
//     std::string s2 = "Input new month (enter number): ";
//     std::string s3 = "Input new day (enter number): ";
//     std::string s4 = "Saved...\n";
//     std::string expectedString = s1 + s2 + s3 + s4;
//     EXPECT_EQ(output.str(), expectedString);

//     // Get Date member vars
//     EXPECT_EQ(test->getMonth(), 1);
//     EXPECT_EQ(test->getDay(), 1);
//     EXPECT_EQ(test->getYear(), 1);    
    
// }
/*
TEST(Date_FullMutator, InvalidMonth){

    std::istringstream input;
    std::ostringstream output;

    Date* test = new Date(1, 1, 1);

    input.str("13");

    test->setDate(input, ouput);

    // Check to output
    std::string s1 = "Input new year (enter number): ";
    std::string s2 = "Input new month (enter number): ";
    std::string s3 = " Error: Invalid month with value: 13\n";
    std::string s4 = " Operation aborted.\n";
    std::string expectedString = s1 + s2 + s3 + s4;
    EXPECT_EQ(output.str(), expectedString);

    // Check Date member vars
    EXPECT_EQ(test->getMonth(), 1);
    EXPECT_EQ(test->getDay(), 1);
    EXPECT_EQ(test->getYear(), 1);

}

TEST(Date_FullMutuator, NonnumericalInput){

    std::istringstream input;
    std::ostringstream output;

    Date* test = new Date(1, 1, 1);

    input.str("Test");

    test->setDate(input, ouput);

    // Check to output
    std::string s1 = "Input new year (enter number): ";
    std::string s2 = " Error: Invalid input with input: Test\n";
    std::string s3 = " Operation aborted.\n";
    std::string expectedString = s1 + s2 + s3;
    EXPECT_EQ(output.str(), expectedString);

    // Get Date member vars
    EXPECT_EQ(test->getMonth(), 1);
    EXPECT_EQ(test->getDay(), 1);
    EXPECT_EQ(test->getYear(), 1);

}
*/
#endif
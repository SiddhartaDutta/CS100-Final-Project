#ifndef __DATE_PRINT_TESTS__
#define __DATE_PRINT_TESTS__

#include "gtest/gtest.h"

#include <string>
#include <sstream>

#include "../../attributeClasses/Date.hpp"

TEST(Date_Print, Expected_Output){

    Date* test = new Date();

    std::ostringstream output;

    test->print(output);

    EXPECT_EQ(output.str(), "0/0/0\n");

    delete test;

}

#endif
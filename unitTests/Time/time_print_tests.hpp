#ifndef __TIME_PRINT_TESTS__
#define __TIME_PRINT_TESTS__

#include "gtest/gtest.h"

#include <string>
#include <sstream>

#include "../../attributeClasses/Time.hpp"

TEST(Time_Print, Expected_Output){

    Time* test = new Time();

    std::ostringstream output;

    test->print(output);

    EXPECT_EQ(output.str(), "0:0\n");

}

#endif
#include "gtest/gtest.h"

// Meeting Class Unit Tests
#include "unitTests/Meeting/meeting_construct.hpp"

// GenericTask Class Unit Tests

// Homework Class Unit Tests

// Shopping Class Unit Tests

// Date Class Unit Tests
#include "unitTests/Date/date_constructor_tests.hpp"

// Time Class Unit Tests


int main(int argc, char **argv){
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}

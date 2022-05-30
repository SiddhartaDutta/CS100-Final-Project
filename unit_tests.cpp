#include "gtest/gtest.h"

// ParentTask Class Unit Tests
#include "unitTests/ParentTask/parenttask_mutator_tests.hpp"

// Meeting Class Unit Tests
#include "unitTests/Meeting/meeting_construct.hpp"

// GenericTask Class Unit Tests

// Homework Class Unit Tests

// Shopping Class Unit Tests

// Date Class Unit Tests
#include "unitTests/Date/date_constructor_tests.hpp"
#include "unitTests/Date/date_mutator_tests.hpp"

// Time Class Unit Tests
#include "unitTests/Time/time_constructor_tests.hpp"
#include "unitTests/Time/time_mutator_tests.hpp"

int main(int argc, char **argv){
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}

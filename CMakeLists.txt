CMAKE_MINIMUM_REQUIRED(VERSION 2.8)
SET(CMAKE_CXX_STANDARD 11)
ADD_SUBDIRECTORY(googletest)



ADD_EXECUTABLE(test
	unit_tests.cpp
	Tasks/ParentTask.cpp
	Tasks/Meeting/Meeting.cpp
	Tasks/GenericTask/GenericTask.cpp
)

ADD_EXECUTABLE(main
	main.cpp
	Tasks/ParentTask.cpp
	Tasks/Meeting/Meeting.cpp
	Tasks/GenericTask/GenericTask.cpp
)



TARGET_LINK_LIBRARIES(test gtest)
TARGET_COMPILE_DEFINITIONS(test PRIVATE gtest_disable_pthreads=ON)

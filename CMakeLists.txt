cmake_minimum_required(VERSION 3.20)
project(Lab__7_1)

set(CMAKE_CXX_STANDARD 14)

add_executable(Lab__7_1 main.cpp
        "Classes and methods/Student after first term/StudentFirstTerm.cpp"
        "Classes and methods/Student after first term/StudentFirstTerm.h"
        "Classes and methods/Student/Student.cpp"
        "Classes and methods/Student/Student.h"
        "Classes and methods/Student after second term/StudentSecondTerm.cpp"
        "Classes and methods/Student after second term/StudentSecondTerm.h")


# 'Google_test' is the subproject name
project(Google_tests)

# 'lib' is the folder with Google Test sources
add_subdirectory(googletest)
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

# 'Google_Tests_run' is the target name
# 'test1.cpp tests2.cpp' are source files with tests
add_executable(Google_Tests_run
        "Classes and methods/Student/Student.cpp"
        "Classes and methods/Student/Student.h"
        "Classes and methods/Student after first term/StudentFirstTerm.h"
        "Classes and methods/Student after first term/StudentFirstTerm.cpp"
        "Classes and methods/Student after second term/StudentSecondTerm.h"
        "Classes and methods/Student after second term/StudentSecondTerm.cpp"
        "Tests/TestsForStudent.cpp")
target_link_libraries(Google_Tests_run gtest gtest_main)


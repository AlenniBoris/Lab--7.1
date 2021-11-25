#include "gtest/gtest.h"
#include "Student.h"

TEST(TestForGet, GetGroupNumberCase1) {
    Student TestName("Boris", 4, 1, 2004);
    ASSERT_EQ(TestName.GetGroup(), 4);
}
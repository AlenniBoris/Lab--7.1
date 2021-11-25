#include "gtest/gtest.h"
#include "../Classes and methods/Student/Student.h"

TEST(TestForGet, GetGroupCase1) {
    Student TestName("Boris", 4, 1, 2004);
    ASSERT_EQ(TestName.GetGroup(), 4);
}
TEST(TestForGet, GetGroupCase2) {
    Student TestName("Boris", 8, 1, 2004);
    ASSERT_EQ(TestName.GetGroup(), 8);
}
TEST(TestForGet, GetGroupCase3) {
    Student TestName("Boris", 2, 1, 2004);
    ASSERT_EQ(TestName.GetGroup(), 2);
}

TEST(TestForGet, GetCourseCase1) {
    Student TestName("Boris", 2, 1, 2004);
    ASSERT_EQ(TestName.GetCourse(), 1);
}
TEST(TestForGet, GetCourseCase2) {
    Student TestName("Boris", 2, 18, 2004);
    ASSERT_EQ(TestName.GetCourse(), 18);
}
TEST(TestForGet, GetCourseCase3) {
    Student TestName("Boris", 2, 108, 2004);
    ASSERT_EQ(TestName.GetCourse(), 108);
}

TEST(TestForGet, GetGradebookCase1) {
    Student TestName("Boris", 2, 1, 2004);
    ASSERT_EQ(TestName.GetGradebook(), 2004);
}
TEST(TestForGet, GetGradebookCase2) {
    Student TestName("Boris", 2, 18, 14004);
    ASSERT_EQ(TestName.GetGradebook(), 14004);
}
TEST(TestForGet, GetGradebookCase3) {
    Student TestName("Boris", 2, 108, 004);
    ASSERT_EQ(TestName.GetGradebook(), 4);
}
#include "gtest/gtest.h"
#include "../Classes and methods/Student after first term/StudentFirstTerm.h"

TEST(TestsForGettingMarks, TestFirstMarkTerm1) {
    StudentFirstTerm TestStudent("Boris", 1, 1, 20004, 10, 9, 8, 7);
    ASSERT_EQ(TestStudent.GetFirstMark(), 10);
}

TEST(TestsForGettingMarks, TestSecondMarkTerm1) {
    StudentFirstTerm TestStudent("Boris", 1, 1, 20004, 10, 9, 8, 7);
    ASSERT_EQ(TestStudent.GetSecondMark(), 9);
}

TEST(TestsForGettingMarks, TestThirdMarkTerm1) {
    StudentFirstTerm TestStudent("Boris", 1, 1, 20004, 10, 9, 8, 7);
    ASSERT_EQ(TestStudent.GetThirdMark(), 8);
}

TEST(TestsForGettingMarks, TestFourthMarkTerm1) {
    StudentFirstTerm TestStudent("Boris", 1, 1, 20004, 10, 9, 8, 7);
    ASSERT_EQ(TestStudent.GetFourthMark(), 7);
}

TEST(TestsForAverageMark, TestAverageMarkTerm1Case1) {
    StudentFirstTerm TestStudent("Boris", 1, 1, 20004, 10, 9, 8, 7);
    ASSERT_EQ(TestStudent.AverageMark(), 8);
}

TEST(TestsForAverageMark, TestAverageMarkTerm1Case2) {
    StudentFirstTerm TestStudent("Boris", 1, 1, 20004, 6, 5, 4, 3);
    ASSERT_EQ(TestStudent.AverageMark(), 4);
}

TEST(TestsForAverageMark, TestAverageMarkTerm1Case3) {
    StudentFirstTerm TestStudent("Boris", 1, 1, 20004, 10, 5, 3, 1);
    ASSERT_EQ(TestStudent.AverageMark(), 4);
}

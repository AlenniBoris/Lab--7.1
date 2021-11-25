#include "gtest/gtest.h"
#include "../Classes and methods/Student after second term/StudentSecondTerm.h"

TEST(TestsForGettingMarks,TestFirstMarkTerm2){
    StudentSecondTerm TestStudent("Boris",4,1,20020,5,4,3,2,1);
    ASSERT_EQ(TestStudent.GetFirstMark2(),5);
}
TEST(TestsForGettingMarks,TestSecondMarkTerm2){
    StudentSecondTerm TestStudent("Boris",4,1,20020,5,4,3,2,1);
    ASSERT_EQ(TestStudent.GetSecondMark2(),4);
}
TEST(TestsForGettingMarks,TestThirdMarkTerm2){
    StudentSecondTerm TestStudent("Boris",4,1,20020,5,4,3,2,1);
    ASSERT_EQ(TestStudent.GetThirdMark2(),3);
}
TEST(TestsForGettingMarks,TestFourthMarkTerm2){
    StudentSecondTerm TestStudent("Boris",4,1,20020,5,4,3,2,1);
    ASSERT_EQ(TestStudent.GetFourthMark2(),2);
}
TEST(TestsForGettingMarks,TestFifthMarkTerm2){
    StudentSecondTerm TestStudent("Boris",4,1,20020,5,4,3,2,1);
    ASSERT_EQ(TestStudent.GetFifthMark2(),1);
}
TEST(TestsForAverageMark, TestAverageMarkTerm2Case1){
    StudentSecondTerm TestStudent("Boris",4,1,20020,5,4,3,2,1);
    ASSERT_EQ(TestStudent.AverageMark2(),3);
}
TEST(TestsForAverageMark, TestAverageMarkTerm2Case2){
    StudentSecondTerm TestStudent("Boris",4,1,20020,5,4,6,2,1);
    ASSERT_EQ(TestStudent.AverageMark2(),3.6);
}
TEST(TestsForAverageMark, TestAverageMarkTerm2Case3){
    StudentSecondTerm TestStudent("Boris",4,1,20020,0,0,0,0,1);
    ASSERT_EQ(TestStudent.AverageMark2(),0.2);
}

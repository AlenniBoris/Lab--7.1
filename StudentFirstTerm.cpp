#include "StudentFirstTerm.h"

int StudentFirstTerm::GetFirstMark() const {
    return FirstMark;
}

void StudentFirstTerm::SetFirstMark(int FirstMark) {
    (*this).FirstMark = FirstMark;
}

int StudentFirstTerm::GetSecondMark() const {
    return SecondMark;
}

void StudentFirstTerm::SetSecondMark(int SecondMark) {
    (*this).SecondMark = SecondMark;
}

int StudentFirstTerm::GetThirdMark() const {
    return ThirdMark;
}

void StudentFirstTerm::SetThirdMark(int ThirdMark) {
    (*this).ThirdMark = ThirdMark;
}

int StudentFirstTerm::GetFourthMark() const {
    return FourthMark;
}

void StudentFirstTerm::SetFourthMark(int FourthMark) {
    (*this).FourthMark = FourthMark;
}

double StudentFirstTerm::AverageMark() {
    int sum = (FirstMark) + (SecondMark) + (ThirdMark) + (FourthMark);
    return (sum / 4);
}

StudentFirstTerm::StudentFirstTerm(char *StudentName, int NumGroup, int Course, int NumGradebook, int FirstMark,
                                   int SecondMark, int ThirdMark, int FourthMark) : Student(StudentName, NumGroup,
                                                                                            Course, NumGradebook) {
    (*this).FirstMark = FirstMark;
    (*this).SecondMark = SecondMark;
    (*this).ThirdMark = ThirdMark;
    (*this).FourthMark = FourthMark;
    assert(FirstMark >= 0 && FirstMark <= 12);
    assert(SecondMark >= 0 && SecondMark <= 12);
    assert(ThirdMark >= 0 && ThirdMark <= 12);
    assert(FourthMark >= 0 && FourthMark <= 12);
}

StudentFirstTerm::StudentFirstTerm(StudentFirstTerm *student) : Student(student) {
    FirstMark = student->FirstMark;
    SecondMark = student->SecondMark;
    ThirdMark = student->ThirdMark;
    FourthMark = student->FourthMark;
}

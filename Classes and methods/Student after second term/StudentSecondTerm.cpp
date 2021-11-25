#include "StudentSecondTerm.h"

int StudentSecondTerm::GetFirstMark2() {
    return FirstTerm2;
}

int StudentSecondTerm::GetSecondMark2() {
    return SecondTerm2;
}

int StudentSecondTerm::GetThirdMark2() {
    return ThirdTerm2;
}

int StudentSecondTerm::GetFourthMark2() {
    return FourthTerm2;
}

int StudentSecondTerm::GetFifthMark2() {
    return FifthTerm2;
}

double StudentSecondTerm::AverageMark2() {
    double sum2 = (FirstTerm2) + (SecondTerm2) + (ThirdTerm2) + (FourthTerm2) + (FifthTerm2);
    return (sum2 / 5);
}

StudentSecondTerm::StudentSecondTerm(char *StudentName, int NumGroup, int Course, int NumGradebook, int FirstTerm2,
                                     int SecondTerm2, int ThirdTerm2, int FourthTerm2, int FifthTerm2) :
        Student(StudentName, NumGroup, Course, NumGradebook) {
    (*this).FirstTerm2 = FirstTerm2;
    (*this).SecondTerm2 = SecondTerm2;
    (*this).ThirdTerm2 = ThirdTerm2;
    (*this).FourthTerm2 = FourthTerm2;
    (*this).FifthTerm2 = FifthTerm2;
    assert(FirstTerm2 >= 0 && FirstTerm2 <= 12);
    assert(SecondTerm2 >= 0 && SecondTerm2 <= 12);
    assert(ThirdTerm2 >= 0 && ThirdTerm2 <= 12);
    assert(FourthTerm2 >= 0 && FourthTerm2 <= 12);
    assert(FifthTerm2 >= 0 && FifthTerm2 <= 12);
}

StudentSecondTerm::StudentSecondTerm(StudentSecondTerm *student) : Student(student) {
    FirstTerm2 = student->FirstTerm2;
    SecondTerm2 = student->SecondTerm2;
    ThirdTerm2 = student->ThirdTerm2;
    FourthTerm2 = student->FourthTerm2;
    FifthTerm2 = student->FifthTerm2;
}

void StudentSecondTerm::SetFirstMark2(int FirstTerm2) {
    (*this).FirstTerm2 = FirstTerm2;
}

void StudentSecondTerm::SetSecondMark2(int SecondTerm2) {
    (*this).SecondTerm2 = SecondTerm2;
}

void StudentSecondTerm::SetThirdMark2(int ThirdTerm2) {
    (*this).ThirdTerm2 = ThirdTerm2;
}

void StudentSecondTerm::SetFourthMark2(int FourthTerm2) {
    (*this).FourthTerm2 = FourthTerm2;
}

void StudentSecondTerm::SetFifthMark2(int FifthTerm2) {
    (*this).FifthTerm2 = FifthTerm2;
}





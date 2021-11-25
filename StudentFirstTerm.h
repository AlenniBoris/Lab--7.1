#ifndef LAB__7_STUDENTFIRSTTERM_H
#define LAB__7_STUDENTFIRSTTERM_H

#include "Student.h"

class StudentFirstTerm : public Student {
private:
    int FirstMark;
    int SecondMark;
    int ThirdMark;
    int FourthMark;
public:
    StudentFirstTerm(char *StudentName, int NumGroup, int Course, int NumGradebook, int FirstMark, int SecondMark,
                     int ThirdMark, int FourthMark);

    explicit StudentFirstTerm(StudentFirstTerm *classStudentFirst);

    int GetFirstMark() const;

    int GetSecondMark() const;

    int GetThirdMark() const;

    int GetFourthMark() const;

    double AverageMark();

    void SetFirstMark(int FirstMark);

    void SetSecondMark(int SecondMark);

    void SetThirdMark(int ThirdMark);

    void SetFourthMark(int FourthMark);
};


#endif //LAB__7_STUDENTFIRSTTERM_H

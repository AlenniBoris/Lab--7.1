#ifndef LAB__7_STUDENTSECONDTERM_H
#define LAB__7_STUDENTSECONDTERM_H

#include "StudentFirstTerm.h"

class StudentSecondTerm : public Student {
private:
    int FirstTerm2;
    int SecondTerm2;
    int ThirdTerm2;
    int FourthTerm2;
    int FifthTerm2;
public:
    StudentSecondTerm(char *StudentName, int NumGroup, int Course, int NumGradebook, int FirstTerm2, int SecondTerm2,
                      int ThirdTerm2, int FourthTerm2, int FifthTerm2);

    explicit StudentSecondTerm(StudentSecondTerm *student);

    int GetFirstMark2();

    void SetFirstMark2(int FirstTerm2);

    int GetSecondMark2();

    void SetSecondMark2(int SecondTerm2);

    int GetThirdMark2();

    void SetThirdMark2(int ThirdTerm2);

    int GetFourthMark2();

    void SetFourthMark2(int FourthTerm2);

    int GetFifthMark2();

    void SetFifthMark2(int FifthTerm2);

    double AverageMark2();

};


#endif //LAB__7_STUDENTSECONDTERM_H

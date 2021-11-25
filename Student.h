#ifndef LAB__7_STUDENT_H
#define LAB__7_STUDENT_H

#include <iostream>
#include <cassert>
#include <vector>

using namespace std;

class Student {
private:
    char *StudentName;
    int Course, NumGroup, NumGradebook;
    int nullID = 0 + rand() % 10000;
    int ID;
public:
    Student(char *StudentName, int NumGroup, int Course, int NumGradebook);

    explicit Student(Student *classStudent);

    void SetName(char *StudentName);

    char *GetName() const;

    int GetGradebook() const;

    void SetCourse(int *Course);

    int GetCourse() const;

    void SetGroup(int *NumGroup);

    int GetGroup() const;

    int getID();

    friend ostream &operator<<(ostream &out, Student &exStudent);
};

void Solution();

#endif //LAB__7_STUDENT_H

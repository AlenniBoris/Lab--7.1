#include "Student.h"
#include "StudentFirstTerm.h"
#include "StudentSecondTerm.h"

Student::Student(char *StudentName, int NumGroup, int Course, int NumGradebook) {
    srand(time(NULL));
    (*this).StudentName = StudentName;
    (*this).NumGroup = NumGroup;
    (*this).Course = Course;
    (*this).NumGradebook = NumGradebook;
    ID = nullID + (0 + rand() % 100000);
    assert(NumGroup > 0);
    assert(Course > 0);
    assert(NumGradebook > 0);
}

char *Student::GetName() const {
    return StudentName;
}

void Student::SetName(char *StudentName) {
    (*this).StudentName = StudentName;
}

int Student::GetGroup() const {
    return NumGroup;
}

void Student::SetGroup(int *NumGroup) {
    (*this).NumGroup = *NumGroup;
}

int Student::GetCourse() const {
    return Course;
}

void Student::SetCourse(int *Course) {
    (*this).Course = *Course;
}

int Student::GetGradebook() const {
    return NumGradebook;
}

Student::Student(Student *classStudent) {
    NumGroup = classStudent->NumGroup;
    NumGradebook = classStudent->NumGradebook;
    Course = classStudent->Course;
    ID = classStudent->ID;
    StudentName = classStudent->StudentName;
}

int Student::getID() {
    return ID;
}

ostream &operator<<(ostream &out, Student &exStudent) {
    cout << "ID: " << exStudent.getID() << endl;
    cout << "Number of gradebook: " << exStudent.GetGradebook() << endl;
    cout << "Student name: " << exStudent.GetName() << endl;
    cout << "Number of group: " << exStudent.GetGroup() << endl;
    cout << "Course: " << exStudent.GetCourse() << endl;
    return out;
}

ostream &operator<<(ostream &out, StudentFirstTerm &exStudent) {
    cout << "Marks first term:" << endl;
    cout << "First mark: " << exStudent.GetFirstMark() << endl;
    cout << "Second mark: " << exStudent.GetSecondMark() << endl;
    cout << "Third mark: " << exStudent.GetThirdMark() << endl;
    cout << "Fourth mark: " << exStudent.GetFourthMark() << endl;
    cout << "First term average mark: " << exStudent.AverageMark() << endl;
    return out;
}

ostream &operator<<(ostream &out, StudentSecondTerm &exStudent) {
    cout << "Marks second term:" << endl;
    cout << "First mark: " << exStudent.GetFirstMark2() << endl;
    cout << "Second mark: " << exStudent.GetSecondMark2() << endl;
    cout << "Third mark: " << exStudent.GetThirdMark2() << endl;
    cout << "Fourth mark: " << exStudent.GetFourthMark2() << endl;
    cout << "Fifth mark: " << exStudent.GetFifthMark2() << endl;
    cout << "Second term average mark: " << exStudent.AverageMark2() << endl;
    return out;
}

double AverageYear(StudentSecondTerm &StudentSecond, StudentFirstTerm &StudentFirst) {
    double average = (StudentFirst.AverageMark() + StudentSecond.AverageMark2());
    return average / 2;
}


bool IsInGroup(Student *Student, int group) {
    if (Student->GetGroup() == group) {
        return true;
    }
    return false;
}

void GetGroupAverageSecondTerm(vector<StudentSecondTerm *> Group) {
    double sum = 0;
    for (int j = 0; j < Group.size(); j++) {
        if (IsInGroup(Group[j], 4)) {
            sum += Group[j]->AverageMark2();
        } else {
            cout << "Students are in different groups";
        }
    }
    cout << "Average mark of group after second term: " << (sum / (Group.size())) << endl;
}

void GetGroupAverageFirstTerm(vector<StudentFirstTerm *> Group) {
    double sum = 0;
    for (int j = 0; j < Group.size(); j++) {
        if (IsInGroup(Group[j], 4)) {
            sum += Group[j]->AverageMark();
        } else {
            cout << "Students are in different groups";
        }
    }
    cout << "Average mark of group after first term: " << (sum / (Group.size())) << endl;
}

void Solution() {
    Student Boris("Boris", 4, 1, 2004);
    cout << Boris;
    cout << "-------------------------------" << endl;
    StudentFirstTerm BorisFirst("Boris", 4, 1, 2004, 9, 9, 10, 7);
    cout << BorisFirst;
    cout << "-------------------------------" << endl;
    StudentSecondTerm BorisSecond("Boris", 4, 1, 2004, 3, 6, 2, 9, 0);
    cout << BorisSecond;
    cout << "-------------------------------" << endl;
    cout << "Average year mark: " << AverageYear(BorisSecond, BorisFirst) << endl;
    cout << "-------------------------------" << endl;

    vector<Student *> Students;
    Students.push_back(&Boris);

    vector<StudentFirstTerm *> StudentsFirst;
    StudentFirstTerm Danila("Danila", 4, 1, 2004, 4, 9, 8, 7);
    StudentsFirst.push_back(&Danila);
    StudentFirstTerm Nikita("Nikita", 1, 1, 2004, 11, 2, 12, 11);
    StudentsFirst.push_back(&Nikita);
    StudentFirstTerm Anton("Anton", 4, 1, 2004, 6, 5, 6, 7);
    StudentsFirst.push_back(&Anton);
    StudentFirstTerm Egor("Anton", 4, 1, 2004, 4, 12, 9, 7);
    StudentsFirst.push_back(&Egor);

    vector<StudentSecondTerm *> StudentsSecond;
    StudentSecondTerm Danila2("Danila", 5, 1, 2004, 4, 9, 8, 7, 8);
    StudentsSecond.push_back(&Danila2);
    StudentSecondTerm Nikita2("Nikita", 4, 1, 2004, 11, 2, 12, 11, 0);
    StudentsSecond.push_back(&Nikita2);
    StudentSecondTerm Anton2("Anton", 4, 1, 2004, 6, 5, 6, 7, 5);
    StudentsSecond.push_back(&Anton2);
    StudentSecondTerm Egor2("Anton", 2, 1, 2004, 4, 12, 9, 7, 1);
    StudentsSecond.push_back(&Egor2);


    GetGroupAverageFirstTerm(StudentsFirst);
    GetGroupAverageSecondTerm(StudentsSecond);
}

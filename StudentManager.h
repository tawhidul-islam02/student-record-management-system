#ifndef STUDENT_MANAGER_H
#define STUDENT_MANAGER_H

#include "Student.h"
#include <vector>

using namespace std;

class StudentManager
{
private:
    vector<Student> students;

    void saveToFile() const;

public:
    StudentManager();

    void loadFromFile();

    void addStudent();
    void displayAllStudents() const;
    void searchStudent() const;
    void updateStudent();
    void deleteStudent();
};

#endif
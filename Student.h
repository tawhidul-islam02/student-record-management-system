#ifndef STUDENT_H
#define STUDENT_H

#include <string>
using namespace std;

class Student
{
private:
    int id;
    string name;
    string program;
    double gpa;

public:
    Student();

    Student(int studentId, string studentName,
            string studentProgram, double studentGpa);

    int getId() const;
    string getName() const;
    string getProgram() const;
    double getGpa() const;

    void setId(int studentId);
    void setName(string studentName);
    void setProgram(string studentProgram);
    void setGpa(double studentGpa);

    void display() const;
};

#endif
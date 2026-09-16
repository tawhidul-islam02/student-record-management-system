#include "Student.h"
#include <iostream>

using namespace std;

Student::Student()
{
    id = 0;
    name = "";
    program = "";
    gpa = 0.0;
}

Student::Student(int studentId, string studentName,
                 string studentProgram, double studentGpa)
{
    id = studentId;
    name = studentName;
    program = studentProgram;
    gpa = studentGpa;
}

int Student::getId() const
{
    return id;
}

string Student::getName() const
{
    return name;
}

string Student::getProgram() const
{
    return program;
}

double Student::getGpa() const
{
    return gpa;
}

void Student::setId(int studentId)
{
    id = studentId;
}

void Student::setName(string studentName)
{
    name = studentName;
}

void Student::setProgram(string studentProgram)
{
    program = studentProgram;
}

void Student::setGpa(double studentGpa)
{
    gpa = studentGpa;
}

void Student::display() const
{
    cout << "ID: " << id << endl;
    cout << "Name: " << name << endl;
    cout << "Program: " << program << endl;
    cout << "GPA: " << gpa << endl;
}
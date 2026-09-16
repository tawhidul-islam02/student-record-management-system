#include "StudentManager.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

using namespace std;

StudentManager::StudentManager()
{
    loadFromFile();
}

void StudentManager::loadFromFile()
{
    ifstream file("students.txt");

    if (!file)
    {
        return;
    }

    students.clear();

    string line;

    while (getline(file, line))
    {
        stringstream ss(line);

        string idText;
        string name;
        string program;
        string gpaText;

        getline(ss, idText, '|');
        getline(ss, name, '|');
        getline(ss, program, '|');
        getline(ss, gpaText);

        if (idText.empty() || gpaText.empty())
        {
            continue;
        }

        int id = stoi(idText);
        double gpa = stod(gpaText);

        Student student(id, name, program, gpa);

        students.push_back(student);
    }

    file.close();
}

void StudentManager::saveToFile() const
{
    ofstream file("students.txt");

    if (!file)
    {
        cout << "Error opening file.\n";
        return;
    }

    for (const Student& student : students)
    {
        file << student.getId() << "|"
             << student.getName() << "|"
             << student.getProgram() << "|"
             << student.getGpa() << endl;
    }

    file.close();
}

void StudentManager::addStudent()
{
    int id;
    string name;
    string program;
    double gpa;

    cout << "\nEnter student ID: ";
    cin >> id;

    for (const Student& student : students)
    {
        if (student.getId() == id)
        {
            cout << "A student with this ID already exists.\n";
            return;
        }
    }

    cin.ignore();

    cout << "Enter student name: ";
    getline(cin, name);

    cout << "Enter program: ";
    getline(cin, program);

    cout << "Enter GPA: ";
    cin >> gpa;

    Student newStudent(id, name, program, gpa);

    students.push_back(newStudent);

    saveToFile();

    cout << "Student added successfully.\n";
}

void StudentManager::displayAllStudents() const
{
    if (students.empty())
    {
        cout << "\nNo student records found.\n";
        return;
    }

    cout << "\n===== Student Records =====\n";

    for (const Student& student : students)
    {
        student.display();
        cout << "---------------------------\n";
    }
}

void StudentManager::searchStudent() const
{
    int id;

    cout << "\nEnter student ID to search: ";
    cin >> id;

    for (const Student& student : students)
    {
        if (student.getId() == id)
        {
            cout << "\nStudent found:\n";
            student.display();
            return;
        }
    }

    cout << "Student not found.\n";
}

void StudentManager::updateStudent()
{
    int id;

    cout << "\nEnter student ID to update: ";
    cin >> id;

    for (Student& student : students)
    {
        if (student.getId() == id)
        {
            string name;
            string program;
            double gpa;

            cin.ignore();

            cout << "Enter new name: ";
            getline(cin, name);

            cout << "Enter new program: ";
            getline(cin, program);

            cout << "Enter new GPA: ";
            cin >> gpa;

            student.setName(name);
            student.setProgram(program);
            student.setGpa(gpa);

            saveToFile();

            cout << "Student updated successfully.\n";
            return;
        }
    }

    cout << "Student not found.\n";
}

void StudentManager::deleteStudent()
{
    int id;

    cout << "\nEnter student ID to delete: ";
    cin >> id;

    for (auto it = students.begin(); it != students.end(); ++it)
    {
        if (it->getId() == id)
        {
            students.erase(it);

            saveToFile();

            cout << "Student deleted successfully.\n";
            return;
        }
    }

    cout << "Student not found.\n";
}
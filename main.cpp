#include <iostream>
#include "StudentManager.h"

using namespace std;

int main()
{
    StudentManager manager;
    int choice;

    do
    {
        cout << "\n===== Student Record Management System =====\n";
        cout << "1. Add Student\n";
        cout << "2. Display All Students\n";
        cout << "3. Search Student\n";
        cout << "4. Update Student\n";
        cout << "5. Delete Student\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";

        cin >> choice;

        switch (choice)
        {
            case 1:
                manager.addStudent();
                break;

            case 2:
                manager.displayAllStudents();
                break;

            case 3:
                manager.searchStudent();
                break;

            case 4:
                manager.updateStudent();
                break;

            case 5:
                manager.deleteStudent();
                break;

            case 6:
                cout << "Exiting program...\n";
                break;

            default:
                cout << "Invalid choice. Please enter a number from 1 to 6.\n";
        }

    } while (choice != 6);

    return 0;
}
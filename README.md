# Student Record Management System

C++ console application for managing student records using OOP, STL containers, searching, and file handling.

## Features

- Add new student records
- Display all student records
- Search for students by ID
- Update existing student information
- Delete student records
- Prevent duplicate student IDs
- Save student records to a text file
- Automatically load saved records when the program starts

## Concepts Used

- C++
- Object-Oriented Programming (OOP)
- Classes and objects
- Encapsulation
- Constructors
- STL `vector`
- Linear search
- File I/O
- Multi-file program structure

## Project Structure

- `main.cpp` - Program menu and user interaction
- `Student.h` - Student class declaration
- `Student.cpp` - Student class implementation
- `StudentManager.h` - StudentManager class declaration
- `StudentManager.cpp` - Student management and file-handling logic

## Compile

```bash
g++ main.cpp Student.cpp StudentManager.cpp -o student_records
```

## Run

```bash
./student_records
```

## Future Improvements

- Input validation
- Sorting student records
- Improved error handling
- Additional search options

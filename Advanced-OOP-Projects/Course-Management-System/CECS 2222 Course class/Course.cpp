//File Course.cpp
#include <iostream>
#include <string>
#include "Course.h"

using namespace::std;
Course::Course() :courseName(""), courseCode(""), instructor(), textbook() {
}
Course::Course(string course, string code, string instrLastName, string instrFirstName, string instrOffice, string textTitle, string author, string publisher)
{
    // Assign the course name. 
    courseName = course;
    // Assigns the course code.
    courseCode = code;
    // Assign the instructor. 
    instructor.set(instrLastName, instrFirstName, instrOffice);
    // Assign the textbook. 
    textbook.set(textTitle, author, publisher);
}

Course::Course(string course, string code, Instructor anInstructor, TextBook aTextbook)
{
    setCourseName(course);
    setCourseCode(code);
    setInstructor(anInstructor);
    setTextBook(aTextbook);
}

Course::Course(const Course& aCourse)
{
    setCourseName(aCourse.getCourseName());
    setCourseCode(aCourse.getCourseName());
    setInstructor(aCourse.getInstructor());
    setTextBook(aCourse.getTextBook());
}

void Course::setCourse(string course, string code, string instrLastName, string instrFirstName, string instrOffice, string textTitle, string author, string publisher)
{
    // Assign the course name.
    courseCode = code;
    // Assigns the course code.
    courseName = course;
    // Assign the instructor. 
    instructor.set(instrLastName, instrFirstName, instrOffice);
    // Assign the textbook. 
    textbook.set(textTitle, author, publisher);
}

void Course::setCourse(string course, string code, Instructor anInstructor, TextBook aTextbook)
{
    // Assign the course name.
    courseCode = code;
    // Assigns the course code.
    courseName = course;
    // Assign the instructor. 
    instructor.set(anInstructor);
    // Assign the textbook. 
    textbook.set(aTextbook);
}

void Course::setCourseName(string tmpCourseName)
{
    courseName = tmpCourseName;
}

void Course::setCourseCode(string code)
{
    courseCode = code;
}

void Course::setInstructor(const Instructor& obj)
{
    instructor.set(obj.getLastName(), obj.getFirstName(), obj.getOfficeNumber());
}

void Course::setInstructor(string instrLastName, string instrFirstName, string instrOffice)
{
    instructor.set(instrLastName, instrFirstName, instrOffice);
}

void Course::setTextBook(const TextBook& obj)
{
    textbook.set(obj.getTitle(), obj.getAuthor(), obj.getPublisher());
}

void Course::setTextBook(string textTitle, string author, string publisher)
{
    textbook.set(textTitle, author, publisher);
}

string Course::getCourseName() const
{
    return courseName;
}

string Course::getCourseCode() const
{
    return courseCode;
}

Instructor Course::getInstructor() const
{
    return instructor;
}

TextBook Course::getTextBook() const
{
    return textbook;
}

// print function 
void Course::print() const
{
    cout << "Course code: " << courseCode << endl;
    cout << "Course name: " << courseName << endl << endl;
    cout << "Instructor Information:\n";
    instructor.print();
    cout << "\nTextbook Information:\n";
    textbook.print();
    cout << endl;
}

ostream& operator<<(ostream& out, Course& obj)
{
    out << "Course code: " << obj.getCourseCode() << endl;
    out << "Course name: " << obj.getCourseName() << endl << endl;
    out << "Instructor Information:\n";
    out << obj.instructor;
    out << "\nTextbook Information:\n";
    out << obj.textbook;
    out << endl;
    return out;
}

istream& operator>>(istream& inp, Course& obj)
{
    string tmpCourseName;
    string tmpCourseCode;
    Instructor tmpInstructor;
    TextBook tmpTextBook;

    
    cout << "\nEnter the course code: ";
    cin.ignore();
    getline(cin, tmpCourseCode, '\n');
    cout << "Enter the course name: ";
    getline(cin, tmpCourseName, '\n');
    obj.setCourseCode(tmpCourseCode);
    obj.setCourseName(tmpCourseName);
    inp >> tmpInstructor;
    inp >> tmpTextBook;
    obj.setInstructor(tmpInstructor);
    obj.setTextBook(tmpTextBook);
    return inp;
}

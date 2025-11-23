//File Course.h
#ifndef COURSE
#define COURSE
#include <iostream>
#include <string>
#include "Instructor.h"
#include "TextBook.h"
using namespace std;

class Course
{
private:
    string courseName; // Course name 
    string courseCode; // Course code
    Instructor instructor; // Instructor 
    TextBook textbook; // Textbook 
public:
    // Constructor 
    Course();
    Course(string course,string code, string instrLastName,
        string instrFirstName, string instrOffice,
        string textTitle, string author,
        string publisher);
    Course(string course, string code, Instructor anInstructor, TextBook aTextbook);
    Course(const Course& aCourse); //copy constructor
    // print function 
    void setCourse(string course, string code, string instrLastName,
        string instrFirstName, string instrOffice,
        string textTitle, string author,
        string publisher);
    void setCourse(string course, string code,
        Instructor anInstructor, TextBook aTextbook);
    void setCourseName(string tmpCourseName);
    void setCourseCode(string code);
    void setInstructor(const Instructor& obj);
    void setInstructor(string instrLastName, string instrFirstName, string instrOffice);
    void setTextBook(const TextBook& obj);
    void setTextBook(string textTitle, string author, string publisher);
    string getCourseName() const;
    string getCourseCode() const;
    Instructor getInstructor() const;
    TextBook getTextBook() const;
    void print() const;
    // I/O Stream Operators
    friend ostream& operator << (ostream& out, Course& obj);
    friend istream& operator >> (istream& inp, Course& obj);
};
#endif

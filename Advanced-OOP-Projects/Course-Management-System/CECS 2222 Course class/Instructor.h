//File Instructor.h
#ifndef INSTRUCTOR
#define INSTRUCTOR
#include <iostream>
#include <string>
using namespace std;

// Instructor class 
class Instructor
{
private:
    string lastName; // Last name 
    string firstName; // First name 
    string officeNumber; // Office number 
public:
    // The default constructor stores empty strings 
    // in the string objects. 
    Instructor();
    // Constructor 
    Instructor(string lname, string fname, string office);
    Instructor(const Instructor& anInstructor);
    ~Instructor();
    // set function 
    void set(string lname, string fname, string office);
    void set(Instructor anInstructor);
    void setLastName(string lname);
    void setFirstName(string fname);
    void setOfficeNumber(string office);
    string getLastName() const;
    string getFirstName() const;
    string getOfficeNumber() const;
    // print function 
    void print() const;
    friend ostream& operator << (ostream& out, Instructor& obj);
    friend istream& operator >> (istream& inp, Instructor& obj);
};
#endif


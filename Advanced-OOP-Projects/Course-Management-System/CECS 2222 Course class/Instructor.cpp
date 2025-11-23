//File Instructor.cpp
#include "Instructor.h"
Instructor::Instructor()
{
    set("DEFAULT", "DEFAULT", "DEFAULT");
}

// Constructor 
Instructor::Instructor(string lname, string fname, string office)
{
    set(lname, fname, office);
}

Instructor::Instructor(const Instructor& anInstructor)
{
    setLastName(anInstructor.getLastName());
    setFirstName(anInstructor.getFirstName());
    setOfficeNumber(anInstructor.getOfficeNumber());
}

Instructor::~Instructor()
{
    //cout << "Destruyendo objeto\n";
}

// set function 
void Instructor::set(string lname, string fname, string office)
{
    lastName = lname;
    firstName = fname;
    officeNumber = office;
}

void Instructor::set(Instructor anInstructor)
{
    set(anInstructor);
}

void Instructor::setLastName(string lname)
{
    lastName = lname;
}

void Instructor::setFirstName(string fname)
{
    firstName = fname;
}
void Instructor::setOfficeNumber(string office)
{
    officeNumber = office;
}

string Instructor::getLastName() const
{
    return lastName;
}

string Instructor::getFirstName() const
{
    return firstName;
}

string Instructor::getOfficeNumber() const
{
    return officeNumber;
}

// print function 
void Instructor::print() const
{
    cout << "Last name: " << lastName << endl;
    cout << "First name: " << firstName << endl;
    cout << "Office number: " << officeNumber << endl;
}

ostream& operator<<(ostream& out, Instructor& obj)
{
    out << "Last name: " << obj.getLastName() << endl;
    cout << "First name: " << obj.getFirstName() << endl;
    cout << "Office number: " << obj.getOfficeNumber() << endl;
    return out;
}

istream& operator>>(istream& inp, Instructor& obj)
{
    string instLastName;
    string instFirstName;
    string instOfficeNumber;

    cout << "Enter the first name of the profesor: ";
    getline(cin, instFirstName, '\n');
    cout << "Enter the last name of the profesor ";
    getline(cin, instLastName, '\n');
    cout << "Enter the office number: #";
    getline(cin, instOfficeNumber, '\n');

    obj.set(instLastName, instFirstName, instOfficeNumber);
    return inp;
}

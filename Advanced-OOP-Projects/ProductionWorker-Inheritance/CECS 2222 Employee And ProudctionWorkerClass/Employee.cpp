#include "Employee.h"

Employee::Employee() : date(){
	name = "";
	employeeNumber = 0;
}

Employee::Employee(string name, int employeeNumber, int month, int day, int year) : date(month, day, year)
{
	this->name = name;
	this->employeeNumber = employeeNumber;
}

void Employee::setName(string name)
{
	this->name = name;
}

void Employee::setEmployeeNumber(int employeeNumber)
{
	this->employeeNumber = employeeNumber;
}

void Employee::setDate(Date date)
{
	this->date = date;
}

void Employee::setDate(int month, int day, int year)
{
	date.setDate(month, day, year);
}

string Employee::getName() const
{
	return name;
}

int Employee::getEmployeeNumber() const
{
	return employeeNumber;
}

Date Employee::getDate() const
{
	return date;
}

ostream& operator<<(ostream& strm, const Employee& obj)
{
	strm << "Name: " << obj.getName();
	strm << "\nNumber of Employee #" << obj.getEmployeeNumber();
	strm << "\nHire Date\n";
	strm << obj.getDate();
	return strm;
}

istream& operator>>(istream& strm, Employee& obj)
{
	cout << "Enter the name of the employee: ";
	strm >> obj.name;
	cout << "Enter the mumber of the employee: ";
	strm >> obj.employeeNumber;
	cout << "Hire Date\n";
	strm >> obj.date;
	return strm;
}

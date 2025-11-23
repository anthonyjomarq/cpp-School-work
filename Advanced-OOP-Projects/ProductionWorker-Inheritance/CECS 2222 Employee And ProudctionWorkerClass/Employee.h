#pragma once
#include <iostream>
#include "Date.h"
using namespace::std;
class Employee
{
private:
	string name;
	int employeeNumber;
	Date date;
public:
	Employee();
	Employee(string name, int employeeNumber, int month, int day, int year);
	//mutators
	void setName(string aName);
	void setEmployeeNumber(int num);
	void setDate(Date date);
	void setDate(int month, int day, int year);
	//getters
	string getName() const;
	int getEmployeeNumber() const;
	Date getDate() const;
	//Operators
	friend ostream& operator << (ostream& strm, const Employee& obj);
	friend istream& operator >> (istream& strm, Employee& obj);
};


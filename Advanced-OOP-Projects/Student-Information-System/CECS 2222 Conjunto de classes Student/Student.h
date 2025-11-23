#pragma once
#include "PhoneNumber.h"
#include "Date.h"
#include "MyString.h"
#include<iostream>
using namespace::std;

class Student {
	friend ostream& operator<<(ostream&, const Student&);
	friend istream& operator>>(istream&, Student&);
private:
	MyString firstName;
	MyString fatherName;
	MyString motherName;
	MyString address;
	MyString studentNum;
	Date entryDate;
	Date birthDate;
	Phone phone;
public:
	//Constructors and Destructor
	Student(const MyString& first_name, const MyString& father_name, const MyString& mother_name, const MyString& n_address, const MyString& student_num, const Date& entry_date, const Date& birth_date, const Phone& n_phone);
	Student(const Student&);
	Student();
	~Student();

	//Mutators
	void setValues(const MyString& first_name, const MyString& father_name, const MyString& mother_name, const MyString& n_address, const MyString& student_num, const Date& entry_date, const Date& birth_date, const Phone& n_phone);
	void setFirstName(const MyString&);
	void setFatherName(const MyString&);
	void setMotherName(const MyString&);
	void setAddress(const MyString&);
	void setStudentNum(const MyString&);
	void setEntryDate(const Date&);
	void setBirthDate(const Date&);
	void setPhone(const Phone&);

	//Accesors
	const MyString& getFirstName() const;
	const MyString& getFatherName() const;
	const MyString& getMotherName() const;
	const MyString& getAddress() const;
	const MyString& getStudentNum() const;
	const Date& getEntryDate() const;
	const Date& getBirthDate() const;
	const Phone& getPhone()const;




};//end class Student
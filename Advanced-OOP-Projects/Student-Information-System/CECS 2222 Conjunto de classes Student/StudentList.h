#pragma once
#include "Student.h"
#include "MyString.h"
#include <iostream>
using namespace::std;


const int MAX = 100;
class StudentList
{
private:
	Student list[MAX];
	int size;

public:
	StudentList();
	StudentList(const StudentList& obj);
	~StudentList();

	void add();
	void del();
	void modify();
	void search() const;
	void print() const;
	MyString askID() const;
	int getIndex(const MyString& id) const;
	bool idExists(const MyString& id) const;

	void mySwap(int i);
	int run();
};

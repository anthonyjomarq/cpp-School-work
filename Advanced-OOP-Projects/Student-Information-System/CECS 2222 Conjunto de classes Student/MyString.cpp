#include <iostream>
using namespace std;

#include "MyString.h"

MyString::MyString(const char* s)
{
	(*this) = s;
}

MyString::MyString(char ch)
{
	(*this) = ch;
}

MyString::MyString(const MyString& aMyString)
{
	(*this) = aMyString;
}

MyString::~MyString()
{

}

MyString& MyString::operator=(const char* s)
{
	strcpy_s(this->s, MAX_LEN + 1, s);
	return (*this);
}

MyString& MyString::operator=(char ch)
{
	(*this) = "";
	(*this) = (*this) + ch;
	return(*this);
}

MyString& MyString::operator=(const MyString& aMyString)
{
	strcpy_s(this->s, MAX_LEN + 1, aMyString.s);
	return(*this);
}


void MyString::setS(const char* s)
{
	strcpy_s(this->s, MAX_LEN + 1, s);
}

const char* MyString::getS() const
{
	return(this->s);
}

MyString MyString::operator+(const char* s) const
{
	MyString r(*this);

	strcat_s(r.s, MAX_LEN + 1, s);
	return(r);
}

MyString MyString::operator+(char ch)const
{
	MyString r(*this);

	if ((this->len() + 1 <= MAX_LEN))
	{
		(r.s)[this->len()] = ch;
		(r.s)[this->len() + 1] = '\0';
	}
	return(r);
}

MyString MyString::operator+(const MyString& aMyString)const
{
	return((*this) + aMyString.s);
}

MyString operator+(const char* s, const MyString& aMyString)
{
	return(MyString(s) + aMyString);
}

MyString operator+(char ch, const MyString& aMyString)
{
	return(MyString(ch) + aMyString);
}
bool operator==(MyString left, MyString right)
{
	return strcmp(left.s, right.s) == 0;
}
//*********************************************************
// Overloaded != operator. *
//*********************************************************
bool operator!=(MyString left, MyString right)
{
	return strcmp(left.s, right.s) != 0;
}
//******************************************************
// Overloaded > operator. *
//******************************************************
bool operator>(MyString left, MyString right)
{
	return (strcmp(left.s, right.s) > 0);
}
//******************************************************
// Overloaded < operator. *
//******************************************************
bool operator<(MyString left, MyString right)
{
	return (strcmp(left.s, right.s) < 0);
}
//*****************************************************
// Overloaded >= operator. *
//*****************************************************
bool operator>=(MyString left, MyString right)
{
	return (strcmp(left.s, right.s) >= 0);
}
//*****************************************************
// Overloaded <= operator. *
//*****************************************************
bool operator<=(MyString left, MyString right)
{
	return (strcmp(left.s, right.s) <= 0);
}

istream& operator >>(istream& in, MyString& aMyString)
{
	char ch;

	aMyString = "";

	ch = in.get();
	while (ch == '\n')
		ch = in.get();

	while (ch != '\n')
	{
		aMyString = aMyString + ch;
		ch = in.get();
	}

	return(in);
}

ostream& operator <<(ostream& out, const MyString& aMyString)
{
	out << aMyString.s;

	return (out);
}

int MyString::len()const
{
	return(strlen(this->s));
}
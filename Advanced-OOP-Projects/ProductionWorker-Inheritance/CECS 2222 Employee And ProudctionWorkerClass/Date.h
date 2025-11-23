//File Date.h
#ifndef DATE_H
#define DATE_H
#include <iostream>
using namespace std;

class Date {
private:
	int month, day, year;
public:
	Date();
	Date(int m, int d, int y); // default constructor
	Date(const Date& aDate);
	void setDate(int, int, int); // set month, day, year
	int getMonth() const;
	int getYear() const;
	int getDay() const;
	void helpIncrement();
	Date& operator++(); // prefix increment operator
	Date operator++(int); // postfix increment operator
	bool operator==(const Date& obj);
	Date& operator=(const Date& obj);
	bool leapYear(int); // is date in a leap year?
	bool endOfMonth(int); // is date at the end of month?
	friend ostream& operator<<(ostream&, const Date&);
	friend istream& operator>>(istream&, Date&);
	static const int days[]; // array of days per month
}; // end class Date
#endif
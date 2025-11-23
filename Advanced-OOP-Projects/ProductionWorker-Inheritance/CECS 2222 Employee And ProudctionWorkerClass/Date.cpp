// Fig. 11.7: Date.cpp
// Date class member- and friend-function definitions.
#include <iostream>
#include<iomanip>
#include <string>
using namespace std;
#include "Date.h"
// initialize static member; one classwide copy
const int Date::days[] =
{ 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
Date::Date()
{
	month = 0;
	day = 0;
	year = 0;
}
// Date constructor
Date::Date(int month, int day, int year)
{
	setDate(month, day, year);
} // end Date constructor
Date::Date(const Date& aDate)
{
	setDate(aDate.getMonth(), aDate.getDay(), aDate.getYear());
}
// set month, day and year
void Date::setDate(int mm, int dd, int yy)
{
	if (mm >= 1 && mm <= 12)
		month = mm;
	else
		throw invalid_argument("Month must be 1-12");
	if (yy >= 1900 && yy <= 2100)
		year = yy;
	else
		throw invalid_argument("Year must be >= 1900 and <= 2100");
	// test for a leap year
	if ((month == 2 && leapYear(year) && dd >= 1 && dd <= 29) ||
		(dd >= 1 && dd <= days[month]))
		day = dd;
	else
		throw invalid_argument("Day is out of range for current month and year");
} // end function setDate
int Date::getMonth() const {
	return month;
}
int Date::getYear() const {
	return year;
}
int Date::getDay() const {
	return day;
}
Date& Date::operator=(const Date& tempDate)
{
	this->month = tempDate.getMonth();
	this->day = tempDate.getDay();
	this->year = tempDate.getYear();
	return *this;
}//end function operator=
// overloaded prefix increment operator
Date& Date::operator++()
{
	helpIncrement(); // increment date
	return *this; // reference return to create an lvalue
} // end function operator++
// overloaded postfix increment operator; note that the
// dummy integer parameter does not have a parameter name
Date Date::operator++(int)
{
	Date temp = *this; // hold current state of object
	helpIncrement();
	// return unincremented, saved, temporary object
	return temp; // value return; not a reference return
} // end function operator++
bool Date::operator==(const Date& obj)
{
	if (getMonth() == obj.getMonth() && getDay() == obj.getDay() && getYear() == obj.getYear())
		return true;
	else
		return false;
}
//add specified number of days to date
//if the year is a leap year, return true; otherwise, return false
bool Date::leapYear(int testYear)
{
	if (testYear % 400 == 0 ||
		(testYear % 100 != 0 && testYear % 4 == 0))
		return true; // a leap year
	else
		return false; // not a leap year
} // end function leapYear
// determine whether the day is the last day of the month
bool Date::endOfMonth(int testDay)
{
	if (month == 2 && leapYear(year))
		return testDay == 29; // last day of Feb. in leap year
	else
		return testDay == days[month];
} // end function endOfMonth
// function to help increment the date
void Date::helpIncrement()
{
	// day is not end of month
	if (!endOfMonth(day))
		++day; // increment day
	else
		if (month < 12) // day is end of month and month < 12
		{
			++month; // increment month
			day = 1; // first day of new month
		} // end if
		else // last day of year
		{
			++year; // increment year
			month = 1; // first month of new year
			day = 1; // first day of new month
		} // end else
} // end function helpIncrement
// overloaded output operator
ostream& operator<<(ostream& output, const Date& d)
{
	static string monthName[13] = { "", "January", "February",
	"March", "April", "May", "June", "July", "August",
	"September", "October", "November", "December" };
	output << monthName[d.month] << ' ' << d.day << ", " << d.year;
	return output; // enables cascading
} // end function operator<<
istream& operator>>(istream& input, Date& number)
{
	do {
		cout << "Enter the month: ";
		input >> number.month;
		if (number.month < 1 || number.month > 12) {
			cout << "Error! Invalid month!\n";
		}
	} while (number.month < 1 || number.month > 12);
	do {
		cout << "Enter the day: ";
		input >> number.day;
		if (number.day < 0 || number.day > 31) {
			cout << "Error! Invalid day!\n";
		}
	} while (number.day < 0 || number.day > 31);
	do {
		cout << "Enter the year: ";
		input >> number.year;
		if (number.year < 1900 || number.year > 2100) {
			cout << "Error! Invalid year!\n";
		}
	} while (number.year < 1900 || number.year > 2100);
	return input;
} // end function operator>>
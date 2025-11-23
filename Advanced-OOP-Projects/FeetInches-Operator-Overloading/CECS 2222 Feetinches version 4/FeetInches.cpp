#include "FeetInches.h"

void FeetInches::simplify() {
	if (inches >= 12) {
		feet += (inches / 12);
		inches = inches % 12;
	}
	else if (inches < 0) {
		feet -= ((abs(inches) / 12) + 1);
		inches = 12 - (abs(inches) % 12);
	}
}

FeetInches FeetInches::operator + (const FeetInches& right) {
	FeetInches temp;

	temp.inches = inches + right.inches;
	temp.feet = feet + right.feet;
	temp.simplify();
	return temp;
}

FeetInches FeetInches::operator - (const FeetInches& right) {
	FeetInches temp;

	temp.inches = inches - right.inches;
	temp.feet = feet - right.feet;
	temp.simplify();
	return temp;
}

FeetInches FeetInches::operator++()
{
	++inches;
	simplify();
	return *this;
}

FeetInches FeetInches::operator++(int)
{
	FeetInches temp(feet, inches);
	inches++;
	simplify();
	return temp;
}

bool FeetInches::operator > (const FeetInches& right)
{
	bool status;
	if (feet > right.feet)
		status = true;
	else if (feet == right.feet && inches > right.inches)
		status = true;
	else
		status = false;
	return status;
}

bool FeetInches::operator < (const FeetInches& right)
{
	bool status;
	if (feet < right.feet)
		status = true;
	else if (feet == right.feet && inches < right.inches)
		status = true;
	else
		status = false;
	return status;
}

bool FeetInches::operator == (const FeetInches& right)
{
	bool status;
	if (feet == right.feet && inches == right.inches)
		status = true;
	else
		status = false;
	return status;
}

ostream& operator << (ostream& strm, const FeetInches& obj)
{
	strm << " feet: " << obj.feet << endl << " inches: " << obj.inches << endl;
	return strm;
}

istream& operator >> (istream& strm, FeetInches& obj)
{
	// Prompt the user for the feet.
	cout << "Feet: ";
	strm >> obj.feet;
	// Prompt the user for the inches.
	cout << "Inches: ";
	strm >> obj.inches;
	// Normalize the values.
	obj.simplify();
	return strm;
}


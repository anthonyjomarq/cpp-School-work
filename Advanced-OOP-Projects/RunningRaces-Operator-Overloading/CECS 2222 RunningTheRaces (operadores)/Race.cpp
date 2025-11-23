#include <iostream>
using namespace::std;
#include "Race.h"

//Constructors 
Race::Race(int aHours, int aMinutes, int aSeconds, string aName) {
	setName(aName);
	setHours(aHours);
	setMinutes(aMinutes);
	setSeconds(aSeconds);
}
//Copy Constructor
Race::Race(const Race& obj) {
	setName(obj.getName());
	setHours(obj.getHours());
	setMinutes(obj.getMinutes());
	setSeconds(obj.getSeconds());
}
//Destructor
Race::~Race() {
	cout << "Destruyendo objeto\n";
	//display();
	system("pause");
}
//Mutators
void Race::setName(string aName) {
	name = aName;
}
void Race::setHours(int aHours) {
	hours = aHours;
}
void Race::setMinutes(int aMinutes) {
	minutes = aMinutes;
}
void Race::setSeconds(int aSeconds) {
	seconds = aSeconds;
}
//Accessor
string Race::getName() const {
	return name;
}
int Race::getHours() const {
	return hours; 
}
int Race::getMinutes() const {
	return minutes;
}
int Race::getSeconds() const {
	return seconds; 
}
void Race::convert() {
	simplified = (hours * 3600) + (minutes * 60) + seconds;

}
bool Race::operator < (const Race& right)
{
	bool status;
	if (this->simplified < right.simplified)
		status = true;
	else
		status = false;
	return status;
}
bool Race::operator > (const Race& right)
{
	bool status;
	if (this->simplified > right.simplified)
		status = true;
	else
		status = false;
	return status;
}
ostream& operator << (ostream& strm, const Race& obj) {
	strm << obj.name << endl;
	return strm;
}
istream& operator >> (istream& strm, Race& obj) {
	//Entra el usuario el tiempo 
	cout << "Enter name: ";
	strm >> obj.name;
	cout << "Enter the time it took the runner to finish (H:MM:SS).\n";
	do {
		cout << "Enter hour: ";
		strm >> obj.hours;
		if (obj.hours < 0) {
			cout << "Invalid hours. It cannot be less than 0!\n";
		}
	} while (obj.hours < 0);
	do {
		cout << "Enter minute: ";
		strm >> obj.minutes;
		if (obj.minutes < 0) {
			cout << "Invalid minutes. It cannot be less than 0!\n";
		}
	} while (obj.minutes < 0);
	do {
		cout << "Enter seconds: ";
		strm >> obj.seconds;
		if (obj.seconds < 0) {
			cout << "Invalid seconds. It cannot be less than 0!\n";
		}
	} while (obj.seconds < 0);
	obj.convert();
	return strm;
}
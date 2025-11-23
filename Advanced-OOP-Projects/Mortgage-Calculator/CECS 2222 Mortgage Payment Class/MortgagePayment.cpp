#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
#include "MortgagePayment.h"
using namespace::std;

Mortgage::Mortgage() {
	name = "Default";
	ss = "Default";
	number = "Default";
	direction = "Default";
	loan = 0;
	rate = 0;
	years = 0;
}
Mortgage::Mortgage(string aName, string aSS, string aNumber, string aDirection, double aLoan, double aRate, int aYears) {
	setName(aName);
	setSocialSecurity(aSS);
	setNumber(aNumber);
	setDirection(aDirection);
	setLoan(aLoan);
	setRate(aRate);
	setYears(aYears);
}
Mortgage::Mortgage(const Mortgage &anMortgage) {
	setName(anMortgage.getName());
	setSocialSecurity(anMortgage.getSocialSecurity());
	setNumber(anMortgage.getNumber());
	setDirection(anMortgage.getDirection());
	setLoan(anMortgage.getLoan());
	setRate(anMortgage.getRate());
	setYears(anMortgage.getYears());
}
Mortgage::~Mortgage() {
	cout << "\nDESTROYING OBJECT";
	system("pause");
}
//Mutators functions
void Mortgage::setName(string aName) {
	name = aName;
}
void Mortgage::setSocialSecurity(string aSS) {
	ss = aSS;
}
void Mortgage::setNumber(string aNumber) {
	number = aNumber;
}
void Mortgage::setDirection(string aDirection) {
	direction = aDirection;
}
void Mortgage::setLoan(double aLoan) {
	if (aLoan > 0)
		loan = aLoan;
	else
	{
		cout << "Error! The loan cannot be less than 0!";
		exit(EXIT_FAILURE);
	}
}
void Mortgage::setRate(double aRate) {
	rate = aRate;
}
void Mortgage::setYears(int aYears) {
	if (aYears > 0)
		years = aYears;
	else {
		cout << "Error! The years cannot be less than 0!";
		exit(EXIT_FAILURE);
	}
}
//Accesor function
string Mortgage::getName() const {
	return name;
}
string Mortgage::getSocialSecurity() const {
	return ss;
}
string Mortgage::getNumber() const {
	return number;
}
string Mortgage::getDirection() const {
	return direction;
}
double Mortgage::getLoan() const {
	return loan;
}
double Mortgage::getRate() const {
	return rate;
}
int Mortgage::getYears() const {
	return years;
}
double Mortgage::getTerms() const {
	return (pow((1 + ((rate / 100.0) / 12.0)), (12.0 * years)));
}
double Mortgage::getPayment() const {
	return ((loan * ((rate / 100.0) / 12.0) * getTerms()) / (getTerms() - 1));
}
double Mortgage::getTotal() const {
	return 12.0 * years * getPayment();
}

//Member functions 
void Mortgage::display() const {
	cout << "\n\tMORTAGE\n";
	cout << "Name: " << getName() << endl;
	cout << "Social Security: " << getSocialSecurity() << endl;
	cout << "Number: #" << getNumber() << endl;
	cout << "Direction: " << getDirection() << endl;
	cout << "Monthly Payment: $" << fixed << setprecision(2) << getPayment() << endl;
	cout << "Total Payment: $" << fixed << setprecision(2) << getTotal() << endl;
}

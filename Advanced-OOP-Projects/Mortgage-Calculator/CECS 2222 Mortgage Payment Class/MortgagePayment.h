#ifndef MORTGAGEPAYMENT_H
#define MORTGAGEPAYMENT_H
#include <iostream>
#include <string>
using namespace::std;

class Mortgage {
private:
	string name;
	string ss; //social security 
	string number;
	string direction;
	double loan;
	double rate;
	int years;
public:
	//Constructor function
	Mortgage();
	Mortgage(string, string, string, string, double, double, int); //Default constructor
	Mortgage(const Mortgage&); //Copy constructor
	//Destructor
	~Mortgage();
	//Mutators functions
	void setName(string);
	void setSocialSecurity(string);
	void setNumber(string);
	void setDirection(string);
	void setLoan(double);
	void setRate(double);
	void setYears(int);
	//Accesor function
	string getName() const;
	string getSocialSecurity() const;
	string getNumber() const;
	string getDirection() const;
	double getLoan() const;
	double getRate() const;
	int getYears() const;
	double getTerms() const;
	double getPayment() const;
	double getTotal() const;
	//Member functions 
	void display() const;

};
#endif
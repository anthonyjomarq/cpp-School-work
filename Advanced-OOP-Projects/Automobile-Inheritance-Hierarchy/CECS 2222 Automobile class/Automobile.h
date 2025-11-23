#ifndef AUTOMOBILE_H
#define AUTOMOBILE_H
#include <string>
#include <iostream>
using namespace std;

// The Automobile class holds general data 
// about an automobile in inventory. 
class Automobile {
private:
	string make; // The auto's make 
	int model; // The auto's year model 
	int mileage; // The auto's mileage 
	double price; // The auto's price 
public:
	// Default constructor 
	Automobile();
	// Constructor 
	Automobile(string autoMake, int autoModel,
		int autoMileage, double autoPrice);
	// Accessors 
	void setMake(string autoMake);
	void setModel(int autoModel);
	void setMileage(int autoMileage);
	void setPrice(double autoPrice);
	string getMake() const;
	int getModel() const;
	int getMileage() const;
	double getPrice() const;
	friend ostream& operator << (ostream& strm, const Automobile& obj);
	friend istream& operator >> (istream& strm, Automobile& obj);
};
#endif
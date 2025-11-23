/*
* CECS 2223, Computer Programming II Lab
* Spring 2021, Sec. 05
* Date: April 28, 2021
* Topic: Lab 6 - Composition
* File name: Car.cpp
* Anthony J. Colon Dominguez, ID#108365 and Diamaris Gonzalez Rodriguez ID#: 121589
*/
#include "Car.h"
#include <string>
// initialize static variable to 0
int Car::count = 0;

// The default constructor initializes strings to "" and adds 1 to count
Car::Car() {
	brand = "";
	model = "";
	serialNumber = "";
	count++;
}

// The parameterized constructor initializes the name and brand fields 
// to the parameter value and adds 1 to count
// calls the method to set the serial number
Car::Car(string brand, string model) {
	this->brand = strToUpper(brand);
	this->model = strToUpper(model);
	setSerialNumber();
	count++;
}

// destroys a Car object and prints the phrase
// "Car [brand name] [model name], serial number [serial number] has been removed"
Car::~Car() {
	cout << "Car " << getBrand() << " " << getModel() << ", serial number " << getSerialNumber() << " has been removed" << endl;
	count--;
}

// this is a private method which can only be invoked by the object itself
// sets the serial number for each new Car object
// the serial number is composed of the first two letters of the brand and model
// with the count value, in three digits, appended at the end.
// for example, if brand is Kia, model is Rio, and count is 1
// the serialnumber would be KiRi001
void Car::setSerialNumber() {
	//add * to fill space after characters
	int fieldLength = stars(brand);
	if (fieldLength == 0)
		serialNumber = brand.substr(0, 3);
	else {
		// how many stars to add 
		serialNumber = brand.substr(0, fieldLength == 2 ? 2 : 1);
		for (int i = 0; i < fieldLength; i++)
			serialNumber += "*";
	}
	fieldLength = stars(model);
	if (fieldLength == 0)
		serialNumber += model.substr(0, 3);
	else {
		//how many stars to add
		serialNumber += model.substr(0, fieldLength == 2 ? 2 : 1);
		for (int i = 0; i < fieldLength; i++)
			serialNumber += "*";
	}
	// now add the zeros
	int zero = zeros();
	for (int i = 0; i < zero; i++)
		serialNumber += "0";
	serialNumber += to_string(count);
}

//This method retunrs the amount of 0 to be added to the string
int Car::zeros() {

	if (log10(count) < 1)// changed from log10(count) == 0
		return 2;
	else if (log10(count) < 2) // changed from log10(count) == 1
		return 1; //changed from return 2
	else
		return 0; // changed from return 3
}

int Car::stars(string field)
{
	if ((int)field.length() > 2)
		return 0;
	else
		return (int)brand.length() == 2 ? 1 : 2;
}

string Car::strToUpper(string str)
{
	for (size_t i = 0; i < str.length(); i++)
		str[i] = (char)toupper(str[i]);
	return str;
}
// Sets the brand field to the parameter value
void Car::setBrand(string aBrand) {
	if (brand == "") {
		brand = strToUpper(aBrand);
		if (model != "")
			setSerialNumber();
	}
}
// Sets the model field to the parameter value
void Car::setModel(string aModel) {
	if (model == "") {
		model = strToUpper(aModel);
		if (brand != "")
			setSerialNumber();
	}
}
// returns the brand field's value
string Car::getBrand() const {
	return brand;
}
// returns the model field's value
string Car::getModel() const {
	return model;
}
// returns a car's serial number
string Car::getSerialNumber() const {
	return serialNumber;
}
// returns the count of Car objects created
int Car::getCount() const {
	return count;
}
// prints the details about each car in the form
// serial number, brand name, model name
void Car::printCar() const {
	printf("%-14s%-14s%s\n", serialNumber.c_str(), brand.c_str(), model.c_str());
}

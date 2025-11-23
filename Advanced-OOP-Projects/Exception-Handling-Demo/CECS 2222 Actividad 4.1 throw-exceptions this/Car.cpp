#include "Car.h"
using namespace::std;

Car::Car() {
	yearModel = 0;
	make = "Empty";
	speed = 0;
}
//Default constructor
Car::Car(int aYearModel, string aMake, int aSpeed) {
	setYearModel(aYearModel);
	setMake(aMake);
	setSpeed(aSpeed);
}
//Copy constructor
Car::Car(const Car &anCar) {
	setYearModel(anCar.getYearModel());
	setMake(anCar.getMake());
	setSpeed(anCar.getSpeed());
}
//Destructor
Car::~Car() {
	cout << "\nDESTROYING OBJECT\n";
	system("pause");
}
//Mutators functions
Car& Car::setYearModel(int aYearModel) {
	yearModel = aYearModel;
	return *this;
}
Car& Car::setMake(string aMake) {
	(*this).make = aMake;
	return *this;
}
Car& Car::setSpeed(int aSpeed) {
	this->speed = aSpeed;
	return *this;
}
//Accesor functions
int Car::getYearModel() const {
	return yearModel;
}
string Car::getMake() const {
	return (*this).make;
}
int Car::getSpeed() const {
	return this->speed;
}
//Member functions
void Car::accelerate() {
	speed += 5;
}
void Car::brake() {
	speed -= 5;
}
void Car::display() const {
	cout << "The " << this->getYearModel() << " " << (*this).getMake() << " is at a speed of " << this->getSpeed() << " miles per hour." << endl;
}
/**/
#ifndef CAR_H
#define CAR_H
#include <iostream>
using namespace::std;

class Car {
private: 
	int yearModel;
	string make;
	int speed;
public:
	//Constructor function
	Car();
	Car(int, string, int);//Default constructor
	Car(const Car&); // Copy constructor
	~Car();//Destructor
	//Mutators functions
	Car& setYearModel(int);
	Car& setMake(string);
	Car& setSpeed(int);
	//Accesor functions
	int getYearModel() const;
	string getMake() const;
	int getSpeed() const;
	//Member functions
	void accelerate();
	void brake();
	void display() const;
};
#endif

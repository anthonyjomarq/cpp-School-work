#include <iostream>
#include <string>
#include "Soccer_Class.h"
using namespace std;

Soccer::Soccer() : name("Default"), number(000), score(0)
{

}

Soccer::Soccer(string aName, int aNumber, int aScore)
{
	name = aName;
	number = aNumber;
	score = aScore;
}

Soccer::~Soccer()
{

}

void Soccer::setName(string aName)
{
	name = aName;
}

void Soccer::setNumber(int aNumber)
{
	number = aNumber;
}

void Soccer::setScore(int aScore)
{
	score = aScore;
}

string Soccer::getName() const
{
	return name;
}

int Soccer::getNumber() const
{
	return number;
}

int Soccer::getScore() const
{
	return score;
}

void Soccer::display() const
{
	cout << "Player name: " << getName() << endl
		<< "Player number: " << getNumber() << endl
		<< "Player score: " << getScore() << endl;
	cout << endl;
}
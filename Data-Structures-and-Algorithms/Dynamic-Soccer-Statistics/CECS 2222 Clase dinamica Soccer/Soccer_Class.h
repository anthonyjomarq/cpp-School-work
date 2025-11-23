#pragma once
#include <iostream>
#include <string>
using namespace std;

class Soccer
{
private:
	string name;
	int number;
	int score;
public:
	Soccer();
	Soccer(string name, int number, int score);
	~Soccer();
	void setName(string aName);
	void setNumber(int aNumber);
	void setScore(int aScore);
	string getName() const;
	int getNumber() const;
	int getScore() const;
	void display() const;
};
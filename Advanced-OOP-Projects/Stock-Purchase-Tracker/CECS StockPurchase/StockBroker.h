#pragma once
#include <iostream>
#include <string>
#include <iomanip>
using namespace::std;
class StockBroker
{
private:
	string broker_name;
	double commission_percent;
public:
	//Constructor & Destructor
	StockBroker(string name = "DEFAULT", double percent = 0.0);
	StockBroker(const StockBroker& obj);
	~StockBroker();
	//Mutators
	void setName(string name);
	void setPercent(double percent);
	//Accesors
	string getName() const;
	double getPercent() const;
	//Utils
	double calculateCommission(double sale) const;
	//friends
	friend ostream& operator << (ostream& out, const StockBroker& obj);
	friend istream& operator >> (istream& in, StockBroker& obj);
};


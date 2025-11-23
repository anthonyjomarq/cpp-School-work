//File Race.h
#ifndef RACE_H
#define RACE_H
#include <iostream>
using namespace::std;
class Race
{
private:
	int hours;
	int minutes;
	int seconds;
	int simplified;
	string name;
	void convert();//Takes every time and makes it into seconds
public:
	//Constructor
	Race(int aHours = 0, int aMinutes = 0, int aSeconds = 0, string aName = "");
	//Copy Constructor
	Race(const Race& obj);
	//Destructor
	~Race();
	//Mutators
	void setName(string aName);
	void setHours(int aHours);
	void setMinutes(int aMinutes);
	void setSeconds(int aSeconds);
	//Accessor
	string getName() const;
	int getHours() const;
	int getMinutes() const;
	int getSeconds() const;
	
	// Overloaded operator functions
	bool operator > (const Race&); // Overloaded >
	bool operator < (const Race&); // Overloaded <
	

	// Friends
	friend ostream& operator << (ostream&, const Race&);
	friend istream& operator >> (istream&, Race&);

};
#endif


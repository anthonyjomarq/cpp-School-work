#pragma once
#include "ProductionWorker.h"
#include <iomanip>
class TeamLeader : public ProductionWorker
{
private:
	double bonus;
	int requiredHours;
	int attendHours;
public:
	TeamLeader();
	TeamLeader(string name, int employeeNumber, int month, int day, int year, int shift, double payrate, double bonus, int requiredHours, int attendHours);
	//mutators
	void setBonus(double bonus);
	void setRequiredHours(int requiredHours);
	void setAttendHours(int attendHours);
	//getters
	double getBonus() const;
	double getRequiredHours() const;
	double getAttendHours() const;
	friend ostream& operator << (ostream& strm, const TeamLeader& obj);
	friend istream& operator >> (istream& strm, TeamLeader& obj);

};


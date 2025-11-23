
#include <iostream>
#include <string>
#include "Soccer_Class.h"
using namespace std;


void getNumberMembers(int* size);
void getTeamMember(Soccer* team1, int size);
void displayTeamMembers(Soccer team1[], int size);
void displayHighestScore(Soccer team1[], int size);
void displayLowestScore(Soccer team1[], int size);
void displaySumOfScores(Soccer team1[], int size);

int main()
{
	Soccer* team1 = nullptr;
	int size;

	getNumberMembers(&size);
	team1 = new Soccer[size];

	getTeamMember(team1, size);

	displayTeamMembers(team1, size);
	displayHighestScore(team1, size);
	displayLowestScore(team1, size);
	displaySumOfScores(team1, size);

	return 0;
}

void getNumberMembers(int* size)
{
	cout << "Enter amount of players: ";
	cin >> *size;
}
void getTeamMember(Soccer* team1, int size)
{
	string name;
	int number;
	int score;

	int index;

	for (index = 0; index < size; index++)
	{
		cin.ignore();
		cout << "Enter the name of the player: ";
		cin >> name; 

		cout << "Enter the player number: ";
		cin >> number;


		cout << "Enter their score: ";
		cin >> score;
		cout << endl;

		team1[index].setName(name);
		team1[index].setNumber(number);
		team1[index].setScore(score);
	}
}
void displayTeamMembers(Soccer team1[], int size)
{
	int index;

	for (index = 0; index < size; index++)
	{
		team1[index].display();

	}
}

void displayHighestScore(Soccer team1[], int size)
{
	int index, highest = 0;

	for (index = 0; index < size; index++)
	{
		if (team1[index].getScore() > highest)
		{
			highest = team1[index].getScore();
		}
	}
	cout << "Highest score: " << highest << endl;
}

void displayLowestScore(Soccer team1[], int size)
{
	int index, lowest = 0;

	for (index = 0, lowest = team1[index].getScore(); index < size; index++)
	{

		if (team1[index].getScore() < lowest)
		{
			lowest = team1[index].getScore();
		}
	}
	cout << "Lowest score: " << lowest << endl;
}

void displaySumOfScores(Soccer team1[], int size)
{
	int index, total = 0;

	for (index = 0; index < size; index++)
	{
		total += team1[index].getScore();
	}
	cout << "Sum of scores: " << total << endl;
}


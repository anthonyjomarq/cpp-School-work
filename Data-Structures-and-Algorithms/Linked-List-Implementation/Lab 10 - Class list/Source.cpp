#include <iostream>
#include <fstream>
#include <string>
using namespace::std;


bool createFile(string);
int openFile(string filename, string& code, string& name, string& section, string students[]);

int main()
{
	string filename = "classlist.txt";
	string code, name, section;
	string students[100];
	int count;
	if (createFile(filename)) {
		count = openFile(filename, code, name, section, students);
		cout << "Code: " << code << endl;
		cout << "Name: " << name << endl;
		cout << "Section: " << section << endl;
		cout << "Number of students: " << count << endl;
		cout << "Names of the students: ";
		for (int i = 0; i < count; i++)
			cout << students[i] << endl;
	}

	return 0;
}
bool createFile(string filename)
{
	ofstream outFile (filename.c_str());;

	int n;

	string code,
		name,
		studentsname,
		section,
		students;


	outFile.open("classlist.txt");

	cout << "This program will help you create a class list in a file txt." << endl;

	cout << "Enter the class code: ";
	cin >> code;
	cin.ignore();

	cout << "Enter the name of the class: ";
	getline(cin, name);

	cout << "Enter the section of the class: ";
	cin >> section;

	cout << "How many students are there in the class: ";
	cin >> n;

	outFile << code << endl;
	outFile << name << endl;
	outFile << section << endl;
	outFile << n << endl;
	cin.ignore(500, '\n');

	for (int count = 1; count <= n; count++)
	{
		cout << "Student " << count << " name: ";
		getline(cin, studentsname);
		outFile << studentsname << endl;
	}
	outFile.close();
	return true;
}
int openFile(string filename, string& code, string& name, string& section, string students[])
{
	int n;
	ifstream infile(filename.c_str());
	if (!infile.is_open())
	{
		cout << "Unable to open file" << endl;
	}

	infile >> code;
	infile.ignore();
	getline(infile, name);
	infile >> section;
	infile >> n;
	infile.ignore();

	for (int i = 0; i < n; i++)
		getline(infile, students[i]);
	
	return n;
}
	
	
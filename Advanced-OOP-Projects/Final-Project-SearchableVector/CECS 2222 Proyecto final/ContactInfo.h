// Contact class specification file (version 2)
#ifndef CONTACTINFO_H
#define CONTACTINFO_H
#include <iostream>
#include <cstring> // Needed for strlen and strcpy
using namespace::std;

// ContactInfo class declaration.
class ContactInfo
{
private:
	char* name; // The contact's name
	char* phone; // The contact's phone number

	//void initName(const char* n);
	//void initPhone(const char* p);


public:
	// Constructors
	ContactInfo(char* n, char* p);
	ContactInfo();
	// Destructor
	//~ContactInfo();

	//Mutators
	void setName(char *name);
	void setPhone(char *phone);

	//Accesors
	const char* getName() const;
	const char* getPhoneNumber() const;

	//Operators
	ContactInfo& operator = (const ContactInfo obj);
	bool operator < (const ContactInfo& obj);
	bool operator > (const ContactInfo& obj);
	bool operator == (const ContactInfo& obj);
	friend ostream& operator << (ostream& out, const ContactInfo& obj);
	friend istream& operator >> (istream& in, ContactInfo& obj);

};
#endif


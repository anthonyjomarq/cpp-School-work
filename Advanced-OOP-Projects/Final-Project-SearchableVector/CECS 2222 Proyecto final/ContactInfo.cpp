#include "ContactInfo.h"

ContactInfo::ContactInfo(char* n, char* p)
{
	// Initialize the name attribute.
	setName(n);
	// Initialize the phone attribute.
	setPhone(p);
}
ContactInfo::ContactInfo()
{
	char tempName[20] = "Jose Rivera";
	char tempPhone[20] = "000-000-0000";
	setName(tempName);
	setPhone(tempPhone);

}

//ContactInfo::~ContactInfo()
//{
//	delete[] name;
//	delete[] phone;
//}

const char* ContactInfo::getName() const
{
	return name;
}

const char* ContactInfo::getPhoneNumber() const
{
	return phone;
}

void ContactInfo::setName(char* n)
{
	name = new char[strlen(n) + 1];
	strcpy_s(name, strlen(n) + 1, n);
}

void ContactInfo::setPhone(char* p)
{
	phone = new char[strlen(p) + 1];
	strcpy_s(phone, strlen(p) + 1, p);
}

ContactInfo& ContactInfo::operator=(const ContactInfo obj)
{
	delete[] name;
	name = new char[strlen(obj.getName()) + 1];
	strcpy_s(name, strlen(obj.getName()) + 1, obj.getName());
	delete[] phone;
	phone = new char[strlen(obj.getPhoneNumber()) + 1];
	strcpy_s(phone, strlen(obj.getPhoneNumber()) + 1, obj.getPhoneNumber());
	return *this;
}

bool ContactInfo::operator<(const ContactInfo& obj)
{
	if (*getName() < *obj.getName())
		return true;
	else
		return false;
}

bool ContactInfo::operator>(const ContactInfo& obj)
{
	if (*getName() > *obj.getName())
		return true;
	else
		return false;
}

bool ContactInfo::operator==(const ContactInfo& obj)
{
	if (*(getName()) == *(obj.getName()) && *(getPhoneNumber()) == *(obj.getPhoneNumber()))
		return true;
	else
		return false;
}


ostream& operator<<(ostream& out, const ContactInfo& obj)
{
	out << obj.getName() << " : " << obj.getPhoneNumber();
	return out;
}

istream& operator>>(istream& in, ContactInfo& obj)
{
	char* n = nullptr;
	char* p = nullptr;
	const int SIZE = 15;
	n = new char[SIZE];
	p = new char[SIZE];
	cout << "\nEnter the Contact's name: ";
	cin >> n;
	cout << "Enter the Contact's phone: ";
	cin >> p;

	obj.setName(n);
	obj.setPhone(p);
	delete[] n;
	delete[] p;
	n = nullptr;
	p = nullptr;
	return in;
}
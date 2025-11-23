#include "Student.h"

ostream& operator<<(ostream& output, const Student& tempStudent)
{
	output << "First Name: " << tempStudent.firstName << endl;
	output << "Paternal Name: " << tempStudent.fatherName << endl;
	output << "Maternal Name: " << tempStudent.motherName << endl;
	output << "Address: " << tempStudent.address << endl;
	output << "Student #: " << tempStudent.studentNum << endl;
	output << "Entry Date: " << tempStudent.entryDate << endl;
	output << "Birth Date: " << tempStudent.birthDate << endl;
	output << "Phone #: " << tempStudent.phone << endl;
	return output;
}//end function operator<<
istream& operator>>(istream& input, Student& obj)
{
	cout << "Enter the student's First Name: ";
	cin >> obj.firstName;
	cout << "Enter the student's Paternal Name: ";
	cin >> obj.fatherName;
	cout << "Enter the student's Maternal Name: ";
	cin >> obj.motherName;
	cout << "Enter the student's Address: ";
	cin >> obj.address;
	cout << "Enter the student's ID Number: ";
	cin >> obj.studentNum;
	cout << "Enter the student's Entry Date: ";
	cin >> obj.entryDate;
	cout << "Enter the student's Birth Date: ";
	cin >> obj.birthDate;
	cout << "Enter the student's Phone Number: ";
	cin >> obj.phone;


	return input;
}//end function operator >>
Student::Student() :firstName("Juan"), fatherName("Del pueblo"), motherName("Izquierdo"), address(), studentNum(), entryDate(), birthDate(), phone()
{
}//end Student
Student::Student(
	const MyString& first_name, const MyString& father_name, //parameters
	const MyString& mother_name, const MyString& n_address,
	const MyString& student_num, const Date& entry_date,
	const Date& birth_date, const Phone& n_phone)

	: firstName(first_name), fatherName(father_name), //Here the children of the composition are being initialized with the parameters.
	motherName(mother_name), address(n_address), studentNum(student_num),
	entryDate(entry_date), birthDate(birth_date), phone(n_phone)
{ //Since all attributes are initialized in the parameters, no body is needed for this constructor.
}//end Student
Student::Student(const Student& obj)
	: firstName(obj.firstName), fatherName(), //Here the children of the composition are being initialized with the parameters.
	motherName(obj.motherName), address(obj.address), studentNum(obj.studentNum),
	entryDate(obj.entryDate), birthDate(obj.birthDate), phone(obj.phone)
{
}//end Student
Student::~Student()
{
	cout << "Student object destructor" << endl;
}//end Student destructor
void Student::setValues(

	const MyString& first_name, const MyString& father_name, const MyString& mother_name,
	const MyString& n_address, const MyString& student_num, const Date& entry_date,
	const Date& birth_date, const Phone& n_phone)
{
	setFirstName(first_name);
	setFatherName(father_name);
	setMotherName(mother_name);
	setAddress(n_address);
	setStudentNum(student_num);
	setEntryDate(entry_date);
	setBirthDate(birth_date);
	setPhone(n_phone);
} //end setValues
void Student::setFirstName(const MyString& tempFirstName)
{
	firstName = tempFirstName;
}//end setFirstName
void Student::setFatherName(const MyString& tempLastName)
{
	fatherName = tempLastName;
}
void Student::setMotherName(const MyString& obj)
{
	motherName = obj;
}
void Student::setAddress(const MyString& obj)
{
	address = obj;
}

void Student::setStudentNum(const MyString& obj)
{
	studentNum = obj;
}

void Student::setPhone(const Phone& tempPhone)
{
	phone.setAreaCode(tempPhone.getAreaCode());
	phone.setExchange(tempPhone.getExchange());
	phone.setLine(tempPhone.getLine());
}//end setPhone

void Student::setBirthDate(const Date& tempDate)
{
	birthDate.setDate(tempDate.getMonth(), tempDate.getDay(), tempDate.getYear());
}//end setDate

void Student::setEntryDate(const Date& tempDate)
{
	entryDate.setDate(tempDate.getMonth(), tempDate.getDay(), tempDate.getYear());
}//end setDate

const MyString& Student::getFirstName() const
{
	return this->firstName;
}
const MyString& Student::getFatherName() const
{
	return fatherName;
}
const MyString& Student::getMotherName() const
{
	return motherName;
}
const MyString& Student::getAddress() const
{
	return address;
}
const MyString& Student::getStudentNum() const
{
	return studentNum;
}
//end firstName

const Phone& Student::getPhone()const
{
	return this->phone;
}//end getPhone
const Date& Student::getBirthDate()const
{
	return this->birthDate;
}//end getPhone

const Date& Student::getEntryDate()const
{
	return this->entryDate;
}//end getPhone
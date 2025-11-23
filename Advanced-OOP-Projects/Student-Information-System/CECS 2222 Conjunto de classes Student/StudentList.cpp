#include "StudentList.h"

StudentList::StudentList()
{
	this->size = 0;
}

StudentList::StudentList(const StudentList& obj)
{
	this->size = obj.size;
	for (int i = 0; i < size; i++) {
		this->list[i] = obj.list[i];
	}
}

StudentList::~StudentList()
{
}

void StudentList::add()
{
	cout << "++++ Anadir Estudiante ++++" << endl;
	MyString id = askID();

	//If any ID matches the entered ID,validId is changed to false and the for loop exits. 
	bool validId = !idExists(id);

	if (!validId) {
		cout << "--ID es invalido!--" << endl;
	}
	else {
		MyString firstName;
		MyString fatherName;
		MyString motherName;
		MyString address;
		Date entryDate;
		Date birthDate;
		Phone phone;

		cout << "Enter the student's First Name: ";
		cin >> firstName;
		cout << "Enter the student's Paternal Name: ";
		cin >> fatherName;
		cout << "Enter the student's Maternal Name: ";
		cin >> motherName;
		cout << "Enter the student's Address: ";
		cin >> address;
		cout << "Enter the student's Entry Date: ";
		cin >> entryDate;
		cout << "Enter the student's Birth Date: ";
		cin >> birthDate;
		cout << "Enter the student's Phone Number: ";
		cin >> phone;

		list[size++] = Student(firstName, fatherName, motherName, address, id, entryDate, birthDate, phone);
	}
}

void StudentList::del()
{
	cout << "++++ Borrar Estudiante ++++" << endl;
	MyString id = askID();
	if (idExists(id)) {
		mySwap(getIndex(id));
	}
	else {
		cout << "--ID es invalido!--" << endl;
	}
}

void StudentList::modify()
{
	cout << "++++ Modificar Estudiante ++++" << endl;
	MyString id = askID();
	if (idExists(id)) {
		MyString firstName;
		MyString fatherName;
		MyString motherName;
		MyString address;
		Date entryDate;
		Date birthDate;
		Phone phone;

		cout << "Enter the student's First Name: ";
		cin >> firstName;
		cout << "Enter the student's Paternal Name: ";
		cin >> fatherName;
		cout << "Enter the student's Maternal Name: ";
		cin >> motherName;
		cout << "Enter the student's Address: ";
		cin >> address;
		cout << "Enter the student's Entry Date: ";
		cin >> entryDate;
		cout << "Enter the student's Birth Date: ";
		cin >> birthDate;
		cout << "Enter the student's Phone Number: ";
		cin >> phone;

		list[getIndex(id)].setValues(firstName, fatherName, motherName, address, id, entryDate, birthDate, phone);
	}
	else {
		cout << "--ID es invalido!--" << endl;
	}
}

void StudentList::search() const
{
	cout << "++++ Buscar Estudiante ++++" << endl;
	MyString id = askID();
	if (idExists(id)) {
		cout << endl << list[getIndex(id)] << endl;
	}
	else {
		cout << "--ID es invalido!--" << endl;
	}
}

void StudentList::print() const
{
	cout << "++++ LISTA DE ESTUDIANTES ++++" << endl;
	for (int i = 0; i < size; i++) {
		cout << "Estudiante: #" << i + 1 << endl;
		cout << list[i] << endl;
	}
}

MyString StudentList::askID() const
{
	MyString str;
	cout << "Entre el #ID del estudiante: ";
	cin >> str;
	return str;
}

int StudentList::getIndex(const MyString& id) const
{
	int target_index = -1;
	for (int i = 0; i < size && target_index == -1; i++) {
		if (list[i].getStudentNum() == id) {
			target_index = i;
		}
	}
	return target_index;
}

bool StudentList::idExists(const MyString& id) const
{
	return getIndex(id) != -1;
}

void StudentList::mySwap(int i)
{
	list[i] = list[size-- - 1];
}

int StudentList::run()
{
	bool done = false;
	while (!done) {
		int option;
		cout << endl << endl;
		cout << "[1] Anadir estudiante." << endl;
		cout << "[2] Remover estudiante." << endl;
		cout << "[3] Modificar estudiante." << endl;
		cout << "[4] Buscar estudiante." << endl;
		cout << "[5] Imprimir list." << endl;
		cout << "[6] Salir." << endl;
		cout << "Escoja una opcion: #";
		cin >> option;

		switch (option) {
		case 1:
			add();
		case 2:
			del();
		case 3:
			modify();
		case 4:
			search();
		case 5:
			print();
		case 6:
			done = true;
		default:
			cout << "ERROR: Opcion invalia!" << endl;
		}
	}
	return 0;
}
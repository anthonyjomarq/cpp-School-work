//File CoursesMain.cpp
#include <iostream>
#include <string>
using namespace::std;
#include "Course.h"

void getCourses(Course *myCourses,  int numberOfCourses);
void displayCourses(Course *myCourses, int numberOfCourses);
int main()
{
    Course* myCourses;

    int numberOfCourses;
    cout << "Enter the amount of courses in the trimester SP21: ";
    cin >> numberOfCourses;
    myCourses = new Course[numberOfCourses];
    getCourses(myCourses, numberOfCourses);
    displayCourses(myCourses, numberOfCourses);
    delete[] myCourses;
    myCourses = nullptr;
    system("pause");
    return 0;
}
void getCourses(Course* myCourses, int numberOfCourses) {
    cout << "Enter the courses in the trimester SP21" << endl;
    for (int i = 0; i < numberOfCourses; i++) {
        cout << "Course #" << i + 1 << endl;
        cin >> myCourses[i];
        /*Course temp;
       cout << "Course #" << i + 1 << endl;
       cin >> temp;
       *(myCourses + i) = temp;*/
    }
}
void displayCourses(Course* myCourses, int numberOfCourses) {
    for (int i = 0; i < numberOfCourses; i++) {
        cout << "\n\tDisplaying...";
        cout << "\nCourse #" << i + 1 << endl;
        cout << myCourses[i];

    }
}
/*Enter the amount of courses in the trimester SP21: 2
Enter the courses in the trimester SP21
Course #1

Enter the course code: CECS 2222
Enter the course name: Computer Programming II
Enter the first name of the profesor: Claudia
Enter the last name of the profesor Talavera
Enter the office number: #M 206
Enter the title of the book: Starting Out with C++
Enter the author of the book: Gaddis
Enter the publisher of the book: Addison-Wesley
Course #2

Enter the course code: CECS 2223
Enter the course name: Computer Programming II Lab
Enter the first name of the profesor: Jose R.
Enter the last name of the profesor de la Cruz Echeandia
Enter the office number: #N/A
Enter the title of the book: Starting Out with C++
Enter the author of the book: Gaddis
Enter the publisher of the book: Addison-Wesley

        Displaying...
Course #1
Course code: CECS 2222
Course name: Computer Programming II

Instructor Information:
Last name: Claudia
First name: Talavera
Office number: #M 206

Textbook Information:
Title: Starting Out with C++
Author: Gaddis
Publisher: Addison-Wesley


        Displaying...
Course #2
Course code: ECS 2223
Course name: Computer Programming II Lab

Instructor Information:
Last name: Jose R.
First name: de la Cruz Echeandia
Office number: #N/A

Textbook Information:
Title: Starting Out with C++
Author: Gaddis
Publisher: Addison-Wesley

Destruyendo objeto
Press any key to continue . . .*/
  

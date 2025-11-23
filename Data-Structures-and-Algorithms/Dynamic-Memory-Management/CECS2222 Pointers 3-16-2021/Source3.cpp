// This program uses a function to perform division. If division 
 // by zero is detected, the function returns. 
#include <iostream>
using namespace std;

// Function prototype. 
double *getNumber();
void divide(double *num1, double *num2);

int main()
{
    double *num1 = nullptr;
    double* num2 = nullptr;

    num1 = new double;
    num2 = new double;
    cout << "Enter two numbers and I will divide the first number by the second number." << endl;
    num1= getNumber();
    num2 = getNumber();
    divide(num1, num2);
    delete num1;
    delete num2;
    num1 = nullptr; 
    num2 = nullptr;
    return 0;
}

//*************************************************************** 
// Definition of function divide. * 
// Uses two parameters: arg1 and arg2. The function divides arg1 * 
// by arg2 and shows the result. If arg2 is zero, however, the * 
// function returns. * 
//*************************************************************** 
double* getNumber() {
    double* num;
    num = new double;
    cout << "Enter number: ";
    cin >> *num;
    return num;
}
void divide(double* arg1, double* arg2)
{
    if (*arg2 == 0.0)
    {
        cout << "Sorry, I cannot divide by zero.\n";
        return;
    }
    cout << "The quotient is " << (*arg1 / *arg2) << endl;
}
/*Enter two numbers and I will divide the first number by the second number.
Enter number: 2
Enter number: 2
The quotient is 1

C:\Users\antho\source\repos\CECS2222 Pointers 3-16-2021\Debug\CECS2222 Pointers 3-16-2021.exe (process 13964) exited with code 0.
Press any key to close this window . . .
*/
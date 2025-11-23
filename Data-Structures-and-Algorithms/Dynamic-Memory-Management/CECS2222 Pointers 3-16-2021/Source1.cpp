 // This program uses a function to perform division. If division 
 // by zero is detected, the function returns. 
 #include <iostream>
 using namespace std;

 // Function prototype. 
 void getNumber(double*, double*);
 void divide(double*, double*);

 int main()
 {
     double num1, num2;
    
     getNumber(&num1, &num2);
     divide(&num1, &num2);
     return 0;
     }

 //*************************************************************** 
 // Definition of function divide. * 
 // Uses two parameters: arg1 and arg2. The function divides arg1 * 
 // by arg2 and shows the result. If arg2 is zero, however, the * 
 // function returns. * 
 //*************************************************************** 
 void getNumber(double* num1, double* num2) {
     cout << "Enter two numbers and I will divide the first\n";
     cout << "number by the second number: ";
     cin >> *num1 >> *num2;
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
 /*Enter two numbers and I will divide the first
number by the second number: 1
2
The quotient is 0.5

C:\Users\antho\source\repos\CECS2222 Pointers 3-16-2021\Debug\CECS2222 Pointers 3-16-2021.exe (process 8800) exited with code 0.
Press any key to close this window . . .
*/
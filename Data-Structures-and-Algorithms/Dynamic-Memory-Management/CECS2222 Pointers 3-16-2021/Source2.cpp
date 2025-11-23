#include <iostream>
using namespace ::std;
int* getNumber();
int* getSum(int* number1, int* number2);
void display(int* number1, int* number2, int* sum);
int main() {

    int* number1 = nullptr, * number2 = nullptr, * sum = nullptr;

    number1 = new int;   //crea la memoria dinamica
    number2 = new int;
    sum = new int;
    number1 = getNumber();
    number2 = getNumber();
    sum = getSum(number1, number2);
    display(number1, number2, sum);
    delete number1;   //libera la memoria
    delete number2;
    delete sum;
    number1 = nullptr;
    number2 = nullptr;
    sum = nullptr;
    system("pause");
    return 0;
} //end main

int* getNumber() {
    int* number;
    number = new int;
    cout << "Entre dos numeros enteros:";
    cin >> *number;
    return number;
}

int* getSum(int* number1, int* number2) {
    int* sum;
    sum = new int;
    *sum = *number1 + *number2;
    return sum;
}

void display(int* number1, int* number2, int* sum) {
    cout << *number1 << "+" << *number2 << "=" << *sum << endl;
}
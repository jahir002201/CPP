#include <iostream>
using namespace std;

int main(){
    double firstNumber, secondNumber, productOfTowNumbers;
    cout << "Enter two numbers: ";
    cin >> firstNumber >> secondNumber;

    productOfTowNumbers = firstNumber * secondNumber;
    cout << "Product = " << productOfTowNumbers;
    return 0;
}
#include<iostream>
#include<conio.h>

using namespace std;

class Calculator {
private:
    double num1, num2;
public:
    void setNumbers(double n1, double n2);
    double add();
    double subtract();
    double multiply();
    double divide();
};
void Calculator::setNumbers(double n1, double n2) {
    num1 = n1;
    num2 = n2;
}
double Calculator::add() {
    return num1 + num2;
}
double Calculator::subtract() {
    return num1 - num2;
}
double Calculator::multiply() {
    return num1 * num2;
}
double Calculator::divide() {
    if (num2 != 0) {
        return num1 / num2;
    } else {
        cout << "Error: Division by zero is not allowed." << endl;
        return 0;
    }
}
int main() {
    Calculator calc;
    double a, b;
    char op;
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;
    cout << "Enter operation (+, -, *, /): ";
    cin >> op;
    calc.setNumbers(a, b);
    switch (op) {
        case '+':
            cout << "Result: " << calc.add() << endl;
            break;
        case '-':
            cout << "Result: " << calc.subtract() << endl;
            break;
        case '*':
            cout << "Result: " << calc.multiply() << endl;
            break;
        case '/':
            cout << "Result: " << calc.divide() << endl;
            break;
        default:
            cout << "Error: Invalid operation." << endl;
    }
    getch();
    return 0;
}
#include <iostream>
using namespace std;

int main() {
    double a, b;
    char op;

    cout << "Enter first number: ";
    cin >> a;

    cout << "Enter operator (+, -, *, /): ";
    cin >> op;

    cout << "Enter second number: ";
    cin >> b;

    if (op == '+')
        cout << "Result = " << a + b;
    else if (op == '-')
        cout << "Result = " << a - b;
    else if (op == '*')
        cout << "Result = " << a * b;
    else if (op == '/')
        cout << "Result = " << a / b;
    else
        cout << "Invalid operator";

    return 0;
}
#include <iostream>
using namespace std;

/*
Author: new92
*/

int main() {
    float num1, num2, result;
    char op;

    cout << "Please enter the first number: ";
    cin >> num1;
    cout << "Please enter the operator (+, -, *, /): ";
    cin >> op;
    cout << "Please enter the second number: ";
    cin >> num2;

    switch(op) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            result = num1 / num2;
            break;
        default:
            cout << "Invalid operator !";
            return 0;
    }

    cout << num1 << " " << op << " " << num2 << " = " << result;

    return 0;
}

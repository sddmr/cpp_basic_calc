#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    char operation;
    float result;

    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    cout << "Select the operation (+, -, *, /): ";
    cin >> operation;

    switch (operation) {
        case '+':
            result = num1 + num2;
            cout << "Result: " << result << endl;
            break;
        case '-':
            result = num1 - num2;
            cout << "Result: " << result << endl;
            break;
        case '*':
            result = num1 * num2;
            cout << "Result: " << result << endl;
            break;
        case '/':
            if (num2 != 0) {
                result = (float) num1 / num2;
                cout << "Result: " << result << endl;
            } else {
                cout << "Error: Division by zero.\n";
            }
            break;
        default:
            cout << "Invalid operation!\n";
            break;
    }

    return 0;
}

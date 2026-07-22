// Създайте калкулатор, поддържащ операциите +, -, *, / на две реални числа. 
// От конзолата се прочита число, операция и второ число и се извежда резултатът.
// Вход: 2,5 * 8,  Изход: 20

#include <iostream>

using namespace std;

int main() {
    double num1, num2;
    char operation;
    cin >> num1 >> operation >> num2;

    double result;

    switch (operation) {
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
            if (num2 != 0) {
                result = num1 / num2;
            } else {
                cout << "Error: Division by zero." << endl;
                return 1;
            }
            break;
        default:
            cout << "Error: Invalid operation." << endl;
            return 1;
    }

    cout << result << endl;

    return 0;
}
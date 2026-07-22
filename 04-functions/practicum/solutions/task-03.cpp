// Напишете функция 
//  - isDigit(char ch), която приема символ и определя дали е число.
//  - isLower(char ch) - проверка за малки букви
//  - isUpper(char ch) - проверка за главни букви
// Вход: '3',  Изход: true
// Вход: '!',  Изход: false

#include <iostream>

using namespace std;

bool isDigit(char ch) {
    return ch >= '0' && ch <= '9';
}

bool isLower(char ch) {
    return ch >= 'a' && ch <= 'z';
}

bool isUpper(char ch) {
    return ch >= 'A' && ch <= 'Z';
}

int main() {
    char ch;
    cin >> ch;

    cout << boolalpha;
    cout << isDigit(ch) << endl;
    cout << isLower(ch) << endl;
    cout << isUpper(ch) << endl;

    return 0;
}
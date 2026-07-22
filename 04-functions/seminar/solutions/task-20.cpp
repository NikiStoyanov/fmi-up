// Напишете функция, която приема символ и ако символът е цифра, да върне съответната цифра. Ако символът не е цифра, то да върне -1
// Вход: '7',  Изход: 7
// Вход: '!',  Изход: -1

#include <iostream>

using namespace std;

int charToDigit(char c) {
    if (c >= '0' && c <= '9') {
        return c - '0';
    }

    return -1;
}

int main() {
    char c;
    cin >> c;

    int digit = charToDigit(c);
    cout << digit << endl;

    return 0;
}
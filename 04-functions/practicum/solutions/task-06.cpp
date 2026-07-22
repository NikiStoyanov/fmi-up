// Напишете функции за конвертиране между символ в цифра. Не забравяйте валидация на входните данни.
//  - toNumber(char ch) - конвертира от символ в цифра
//  - toCharacter(int number) - конвертира от цифра в символ
// Вход: '8',  Изход: 8
// Вход: 4,  Изход: '4'

#include <iostream>

using namespace std;

int toNumber(char ch) {
    if (ch >= '0' && ch <= '9') {
        return ch - '0';
    }

    return -1;
}

char toCharacter(int number) {
    if (number >= 0 && number <= 9) {
        return '0' + number;
    }

    return '\0';
}

int main() {
    char ch;
    cin >> ch;

    int number = toNumber(ch);
    cout << number << endl;

    int num;
    cin >> num;

    char character = toCharacter(num);
    if (character != '\0') {
        cout << character << endl;
    } else {
        cout << "Invalid input" << endl;
    }

    return 0;
}
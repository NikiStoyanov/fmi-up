// Напишете функция, която приема символ и дали символа е главна буква.
// Вход: A,  Изход: true
// Вход: !,  Изход: false

#include <iostream>

using namespace std;

bool isUpperCase(char c) {
    return c >= 'A' && c <= 'Z';
}

int main() {
    char c;
    cin >> c;

    if (isUpperCase(c)) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }

    return 0;
}
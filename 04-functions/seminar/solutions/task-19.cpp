// Напишете функция, която приема символ и връща съответната главна буква (ако подадения символ е малък символ)
// Вход: a,  Изход: A
// Вход: !,  Изход: !

#include <iostream>

using namespace std;

char toUpperCase(char c) {
    if (c >= 'a' && c <= 'z') {
        return c - 'a' + 'A';
    }

    return c;
}

int main() {
    char c;
    cin >> c;

    cout << toUpperCase(c) << endl;

    return 0;
}
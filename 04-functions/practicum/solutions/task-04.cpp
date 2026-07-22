// Напишете функции за преобразуване на главни и малки букви.
//  - toUpper(char ch) - превръща малка буква в главна буква
//  - toLower(char ch) - превръща главна буква в малка буква
// Не забравяйте валидацията на входните данни!
// Вход: 'C',  Изход: 'c'
// Вход: 'm',  Изход: 'M'

#include <iostream>

using namespace std;

char toUpper(char c) {
    if (c >= 'a' && c <= 'z') {
        return c - 'a' + 'A';
    }

    return c;
}

char toLower(char c) {
    if (c >= 'A' && c <= 'Z') {
        return c - 'A' + 'a';
    }

    return c;
}

int main() {
    char c;
    cin >> c;

    cout << toUpper(c) << endl;
    cout << toLower(c) << endl;

    return 0;
}
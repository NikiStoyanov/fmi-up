// Въвежда се символ. Да се отпечата 1, ако е английска гласна буква, и 0, ако не е.
// Вход: а,  Изход: 1
// Вход: Е,  Изход: 1
// Вход: В,  Изход: 0

#include <iostream>

using namespace std;

int main() {
    char c;
    cin >> c;

    bool isLowerVowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
    bool isUpperVowel = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');

    cout << (isLowerVowel || isUpperVowel) << endl;

    return 0;
}
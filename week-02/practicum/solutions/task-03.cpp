// Да се напише програма, която чете от конзолата символ, и отпечатва на екрана ASCII кода на символа, 
// ако е валиднo римскo число, и -1 - ако не е.
// Вход: V,  Изход: 86
// Вход: X,  Изход: 88
// Вход: F,  Изход: -1

#include <iostream>

using namespace std;

int main() {
    char c;
    cin >> c;

    bool isRomanNumeral = (c == 'I' || c == 'V' || c == 'X' || c == 'L' || c == 'C' || c == 'D' || c == 'M');

    if (isRomanNumeral) {
        int asciiCode = c;
        cout << asciiCode << endl;
    } else {
        cout << -1 << endl;
    }

    return 0;
}
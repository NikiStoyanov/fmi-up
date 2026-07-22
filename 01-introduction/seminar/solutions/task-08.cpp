// Въвеждат се две числа. Да се отпечата по-голямото от двете.
// Вход: 265 44,  Изход: 265

#include <iostream>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    cout << (a > b) * a + (b >= a) * b << endl;

    return 0;
}
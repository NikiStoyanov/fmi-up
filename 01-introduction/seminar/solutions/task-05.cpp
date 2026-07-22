// Въвежда се цяло число. Да се отпечата без последната цифра.
// Вход: 513,  Изход: 51
// Вход: 1234,  Изход: 123

#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    cout << n / 10 << endl;

    return 0;
}
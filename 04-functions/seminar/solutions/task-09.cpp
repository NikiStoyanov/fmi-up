// Напишете функция, която приема цяло число и връща модула му.
// Вход: 4,  Изход: 4
// Вход: -4,  Изход: 4

#include <iostream>

using namespace std;

int absolute_value(int n) {
    if (n >= 0) {
        return n;
    } else {
        return -n;
    }
}

int main() {
    int n;
    cin >> n;

    cout << absolute_value(n) << endl;

    return 0;
}

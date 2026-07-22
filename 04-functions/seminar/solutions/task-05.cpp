// Напишете функция, която приема неотрицателни числа n и k и връща дали k е префикс на n.
// Вход: 288, 28,  Изход: true

#include <iostream>

using namespace std;

bool is_prefix(unsigned int n, unsigned int k) {
    do {
        if (n == k) {
            return true;
        }
        n /= 10;
    } while (n > 0);

    return false;
}

int main() {
    unsigned int n, k;
    cin >> n >> k;

    cout << (is_prefix(n, k) ? "true" : "false") << endl;

    return 0;
}
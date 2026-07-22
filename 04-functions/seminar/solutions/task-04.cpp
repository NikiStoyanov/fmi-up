// Напишете функция, която приема неотрицателни числа n и k и връща дали k е суфикс на n.
// Вход: 288, 88,  Изход: true

#include <iostream>

using namespace std;

bool is_suffix(unsigned int n, unsigned int k) {
    do {
        if (n % 10 != k % 10) {
            return false;
        }
        n /= 10;
        k /= 10;
    } while (k > 0);

    return true;
}

int main() {
    unsigned int n, k;
    cin >> n >> k;

    cout << (is_suffix(n, k) ? "true" : "false") << endl;

    return 0;
}
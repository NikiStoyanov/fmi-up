// Напишете функция, която приема неотрицателни числа n и k и връща дали k е инфикс в n.
// Вход: 2831, 83,  Изход: true

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

bool is_infix(unsigned int n, unsigned int k) {
    do {
        if (is_suffix(n, k)) {
            return true;
        }
        n /= 10;
    } while (n > 0);

    return false;
}

int main() {
    unsigned int n, k;
    cin >> n >> k;

    cout << (is_infix(n, k) ? "true" : "false") << endl;

    return 0;
}
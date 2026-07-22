// Напишете функция, която приема числата n и k и връща k-тата цифра на n.
// Вход: 3589 2,  Изход: 5

#include <iostream>

using namespace std;

int getKthDigit(int n, int k) {
    int len = 0;
    int temp = n;

    while (temp > 0) {
        len++;
        temp /= 10;
    }

    if (k < 1 || k > len) {
        return -1;
    }

    for (int i = 0; i < len - k; i++) {
        n /= 10;
    }

    return n % 10;
}

int main() {
    int n, k;
    cin >> n >> k;

    int digit = getKthDigit(n, k);
    if (digit != -1) {
        cout << digit << endl;
    } else {
        cout << "Invalid input" << endl;
    }

    return 0;
}
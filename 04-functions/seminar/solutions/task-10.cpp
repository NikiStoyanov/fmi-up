// Напишете функция, която приема цяло число и връща броя на цифрите му.
// Вход: 4,  Изход: 1
// Вход: -4,  Изход: 1
// Вход: 5430,  Изход: 4

#include <iostream>

using namespace std;

int count_digits(int n) {
    if (n == 0) return 1;

    int count = 0;
    if (n < 0) n = -n;

    while (n > 0) {
        n /= 10;
        count++;
    }

    return count;
}

int main() {
    int n;
    cin >> n;

    cout << count_digits(n) << endl;

    return 0;
}
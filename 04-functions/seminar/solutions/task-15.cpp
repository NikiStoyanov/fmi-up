// Напишете функция, която приема естествено число и връща дали цифрите му са сортирани (във възходящ или в низходящ ред).
// Вход: 122239,  Изход: true

#include <iostream>

using namespace std;

bool are_digits_sorted(unsigned int n) {
    if (n < 10) return true;

    int last_digit = n % 10;
    n /= 10;

    bool ascending = true;
    bool descending = true;

    while (n > 0) {
        int current_digit = n % 10;

        if (current_digit > last_digit) {
            ascending = false;
        }
        if (current_digit < last_digit) {
            descending = false;
        }

        last_digit = current_digit;
        n /= 10;
    }

    return ascending || descending;
}

int main() {
    unsigned int n;
    cin >> n;

    cout << (are_digits_sorted(n) ? "true" : "false") << endl;

    return 0;
}
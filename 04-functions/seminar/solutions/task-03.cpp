// Напишете функция, която приема неотрицателно число и връща дали числото е палиндром.
// Вход: 2882,  Изход: true

#include <iostream>

using namespace std;

bool is_palindrome(unsigned int n) {
    int original = n;
    int reversed = 0;

    while (n > 0) {
        int digit = n % 10;
        reversed = reversed * 10 + digit;
        n /= 10;
    }

    return original == reversed;
}

int main() {
    unsigned int n;
    cin >> n;

    cout << (is_palindrome(n) ? "true" : "false") << endl;

    return 0;
}
// Напишете функция, която приема естествено число и връща дали цифрите му са еднакви.
// Вход: 111111,  Изход: true

#include <iostream>

using namespace std;

bool are_digits_equal(unsigned int n) {
    if (n < 10) return true;

    int last_digit = n % 10;
    n /= 10;

    while (n > 0) {
        int current_digit = n % 10;
        if (current_digit != last_digit) {
            return false;
        }
        
        n /= 10;
    }

    return true;
}

int main() {
    unsigned int n;
    cin >> n;

    cout << (are_digits_equal(n) ? "true" : "false") << endl;

    return 0;
}

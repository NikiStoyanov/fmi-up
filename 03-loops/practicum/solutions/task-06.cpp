// Изведете на екрана сумата на всички трицифрени числа, за които е вярно, че сумата на цифрите им е
//  - Двуцифрено число;
//  - Просто число;
// Изход: 147085

#include <iostream>

using namespace std;

int main() {
    int sum = 0;
    for (int i = 100; i <= 999; ++i) {
        int hundreds = i / 100;
        int tens = (i / 10) % 10;
        int units = i % 10;

        int digit_sum = hundreds + tens + units;

        if (digit_sum >= 10 && digit_sum <= 99) {
            bool is_prime = true;
            for (int j = 2; j * j <= digit_sum; ++j) {
                if (digit_sum % j == 0) {
                    is_prime = false;
                    break;
                }
            }
            if (is_prime) {
                sum += i;
            }
        }
    }

    cout << sum << endl;

    return 0;
}
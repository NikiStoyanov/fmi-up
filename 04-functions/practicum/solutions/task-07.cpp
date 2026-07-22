// Да се напише функция isPrime(size_t number), която проверява дали дадено число е просто.
// Вход: 7,  Изход: 1
// Вход: 6,  Изход: 0

#include <iostream>

using namespace std;

bool isPrime(size_t number) {
    if (number < 2) {
        return false;
    }

    for (size_t i = 2; i * i <= number; ++i) {
        if (number % i == 0) {
            return false;
        }
    }

    return true;
}

int main() {
    size_t number;
    cin >> number;

    cout << isPrime(number) << endl;

    return 0;
}

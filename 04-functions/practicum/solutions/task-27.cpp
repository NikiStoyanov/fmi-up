// Да се провери дали естественото число А се дели на простите делители на B, 
// което е със същите цифри на А, но записани в обратен ред.
// Вход: 101,  Изход: 1
// Вход: 123,  Изход: 0
// Вход: 120,  Изход: 0

#include <iostream>

using namespace std;

int reverseNumber(int number) {
    int reversed = 0;
    while (number > 0) {
        reversed = reversed * 10 + number % 10;
        number /= 10;
    }
    return reversed;
}

int isPrime(int number) {
    if (number <= 1) return 0;
    for (int i = 2; i * i <= number; ++i) {
        if (number % i == 0) return 0;
    }
    return 1;
}

int main() {
    int A;
    cin >> A;

    int reversedA = reverseNumber(A);
    int primeDivisorCount = 0;

    for (int i = 2; i <= reversedA / 2; ++i) {
        if (reversedA % i == 0 && isPrime(i)) {
            primeDivisorCount++;
            if (A % i != 0) {
                cout << 0 << endl;
                return 0;
            }
        }
    }

    cout << (primeDivisorCount > 0 ? 1 : 0) << endl;
    return 0;
}
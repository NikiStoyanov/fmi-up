// Да се намерят всички прости числа до дадено число n, като се зачеркват кратните на всяко просто число, започвайки от 2.
// Вход: 10,  Изход: 2 3 5 7

#include <iostream>

using namespace std;

constexpr int MAX_SIZE = 1000;

void sieveOfEratosthenes(int n) {
    if (n < 2) {
        cout << "No prime numbers found." << endl;
        return;
    }

    bool isPrime[MAX_SIZE];
    for (int i = 0; i <= n; i++) {
        isPrime[i] = true;
    }

    isPrime[0] = false;
    isPrime[1] = false;

    for (int p = 2; p * p <= n; p++) {
        if (isPrime[p]) {
            for (int multiple = p * p; multiple <= n; multiple += p) {
                isPrime[multiple] = false;
            }
        }
    }

    cout << "Prime numbers up to " << n << ": ";
    for (int i = 2; i <= n; i++) {
        if (isPrime[i]) {
            cout << i << " ";
        }
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    sieveOfEratosthenes(n);

    return 0;
}
// Да се напише функция long fibb(long n), която намира n-то число на Фибоначи, 
// по такъв начин, че да не се извършват излишни сметки.

#include <iostream>

using namespace std;

long fibb(long n) {
    if (n == 0) return 0;
    if (n == 1) return 1;

    long a = 0;
    long b = 1;
    long current;

    for (long i = 2; i <= n; ++i) {
        current = a + b;
        a = b;
        b = current;
    }

    return current;
}

int main() {
    long n;
    cout << "Enter a non-negative integer n: ";
    cin >> n;

    if (n < 0) {
        cout << "n must be a non-negative integer." << endl;
        return 1;
    }

    long result = fibb(n);
    cout << "The " << n << "-th Fibonacci number is: " << result << endl;

    return 0;
}
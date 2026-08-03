// Да се реализира рекурсивна функция, която пресмята n-тото число на фибоначи.

#include <iostream>

using namespace std;

long long fibonacci(long long n) {
    if (n <= 1) {
        return n;
    }
    
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    long long n;
    cout << "Enter a non-negative integer: ";
    cin >> n;

    if (n < 0) {
        cout << "Fibonacci is not defined for negative numbers." << endl;
    } else {
        long long result = fibonacci(n);
        cout << "Fibonacci(" << n << ") = " << result << endl;
    }

    return 0;
}
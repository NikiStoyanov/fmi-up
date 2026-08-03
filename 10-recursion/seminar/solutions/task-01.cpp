// Да се реализира рекурсивна функция, която пресмята n!

#include <iostream>

using namespace std;

long long factorial(long long n) {
    if (n <= 1) {
        return 1;
    }
    
    return n * factorial(n - 1);
}

int main() {
    long long n;
    cout << "Enter a non-negative integer: ";
    cin >> n;

    if (n < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
    } else {
        long long result = factorial(n);
        cout << n << "! = " << result << endl;
    }

    return 0;
}
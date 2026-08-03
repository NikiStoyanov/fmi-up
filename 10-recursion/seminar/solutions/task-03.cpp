// Да се реализира рекурсивна функция, която вдига число на дадена степен.

#include <iostream>

using namespace std;

long long power(long long base, long long exp) {
    if (exp == 0) {
        return 1;
    }
    
    return base * power(base, exp - 1);
}

int main() {
    long long base;
    long long exp;
    cout << "Enter the base: ";
    cin >> base;
    cout << "Enter the exponent: ";
    cin >> exp;

    if (exp < 0) {
        cout << "Exponent must be a non-negative integer." << endl;
    } else {
        long long result = power(base, exp);
        cout << base << "^" << exp << " = " << result << endl;
    }

    return 0;
}
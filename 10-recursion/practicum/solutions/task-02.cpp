// Да се напише рекурсивна функция, която приема 2 цели числа n и k и връща дали в записа на n се съдържа цифрата k.

#include <iostream>

using namespace std;

bool containsDigit(int n, int k) {
    if (n == 0) {
        return false;
    }

    if (n % 10 == k) {
        return true;
    }

    return containsDigit(n / 10, k);
}

int main() {
    int n, k;
    cout << "Enter an integer n: ";
    cin >> n;
    cout << "Enter a digit k (0-9): ";
    cin >> k;

    if (k < 0 || k > 9) {
        cout << "k must be a digit between 0 and 9." << endl;
        return 1;
    }

    bool result = containsDigit(n, k);
    if (result) {
        cout << "The number " << n << " contains the digit " << k << "." << endl;
    } else {
        cout << "The number " << n << " does not contain the digit " << k << "." << endl;
    }

    return 0;
}
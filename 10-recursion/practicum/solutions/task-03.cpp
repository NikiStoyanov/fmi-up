// Да се напише рекурсивна функция bool endsWith(long n, long k), която проверява дали числото n завършва на числото k.

#include <iostream>

using namespace std;

bool endsWith(long n, long k) {
    if (k < 10) {
        return n % 10 == k;
    }

    if (n == 0) {
        return false;
    }

    if (n % 10 == k % 10) {
        return endsWith(n / 10, k / 10);
    }

    return false;
}

int main() {
    long n, k;
    cout << "Enter a long integer n: ";
    cin >> n;
    cout << "Enter a long integer k: ";
    cin >> k;

    bool result = endsWith(n, k);
    if (result) {
        cout << "The number " << n << " ends with the number " << k << "." << endl;
    } else {
        cout << "The number " << n << " does not end with the number " << k << "." << endl;
    }

    return 0;
}
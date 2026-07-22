// Напишете функция, която приема неотрицателно число n и връща числото обърнато
// Вход: 288,  Изход: 882

#include <iostream>

using namespace std;

int reverse_number(int n) {
    int reversed = 0;
    while (n > 0) {
        int digit = n % 10;
        reversed = reversed * 10 + digit;
        n /= 10;
    }

    return reversed;
}

int main() {
    int n;
    cin >> n;

    cout << reverse_number(n) << endl;

    return 0;
}
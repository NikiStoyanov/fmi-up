// Напишете функция, която дадено по подадено естествено число N, връща число, 
// което е резултат от конкатенацията на обърнатото число на N с подаденото N.
// Вход: 1234,  Изход: 43211234

#include <iostream>

using namespace std;

int reverse_number(int n) {
    int reversed = 0;
    while (n > 0) {
        reversed = reversed * 10 + (n % 10);
        n /= 10;
    }
    return reversed;
}

int concatenate_reversed(int n) {
    int reversed = reverse_number(n);
    int multiplier = 1;
    int temp = n;

    while (temp > 0) {
        multiplier *= 10;
        temp /= 10;
    }

    return reversed * multiplier + n;
}

int main() {
    int n;
    cin >> n;

    cout << concatenate_reversed(n) << endl;

    return 0;
}
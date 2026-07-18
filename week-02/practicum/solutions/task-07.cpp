// Напишете програма, която проверява дали дадено 4-цифрено число е палиндром.
// Вход: 1221,  Изход: 1
// Вход: 1234,  Изход: 0

#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int first_digit = n / 1000;
    int second_digit = (n / 100) % 10;
    int third_digit = (n / 10) % 10;
    int fourth_digit = n % 10;

    bool is_palindrome = (first_digit == fourth_digit) && (second_digit == third_digit);
    cout << is_palindrome << endl;

    return 0;
}
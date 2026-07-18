// Да се напише програма, която отпечатва третата цифра отзад напред на въведеното от конзолата число N.
// Вход: 5389,  Изход: 3

#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int third_digit_from_end = (n / 100) % 10;

    cout << third_digit_from_end << endl;

    return 0;
}
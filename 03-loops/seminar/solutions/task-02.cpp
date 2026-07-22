// Да се напише програма, която приема цяло положително число, обръща го и го увеличава с 1.
// Вход: 123,  Изход: 322
// Вход: 24689,  Изход: 98643

#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int reversed = 0;
    while (n > 0) {
        int digit = n % 10;
        reversed = reversed * 10 + digit;
        n /= 10;
    }

    cout << reversed + 1 << endl;

    return 0;
}
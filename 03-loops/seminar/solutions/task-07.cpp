// Напишете програма, която приема естествено число и отпечатва разбиването му на прости множители, сортирани низходящо.
// Вход: 50; Изход: 2^1 5^2

#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 2; i * i <= n; i++) {
        int count = 0;
        while (n % i == 0) {
            n /= i;
            count++;
        }
        if (count > 0) {
            cout << i << "^" << count << " ";
        }
    }

    if (n > 1) {
        cout << n << "^1";
    }

    cout << endl;

    return 0;
}
// Напишете програма, която приема естествено число и връща дали числото е просто.
// Вход: 17,  Изход: Prime
// Вход: 25,  Изход: Not prime

#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    if (n < 2) {
        cout << "Not prime" << endl;
        return 0;
    }

    bool is_prime = true;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            is_prime = false;
            break;
        }
    }

    cout << (is_prime ? "Prime" : "Not prime") << endl;

    return 0;
}
// Напишете функция `int my_pow(int n, int k)`, която връща числото n на степен k
// Вход: 2 3,  Изход: 8

#include <iostream>

using namespace std;

int my_pow(int n, int k) {
    int result = 1;
    for (int i = 0; i < k; i++) {
        result *= n;
    }

    return result;
}

int main() {
    int n, k;
    cin >> n >> k;

    cout << my_pow(n, k) << endl;

    return 0;
}
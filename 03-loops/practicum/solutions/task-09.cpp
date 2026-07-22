// Да се прочете от конзолата цяло число N и да се изведе как може да се представи като сума на 2 прости числа.
// Вход: 20,  Изход: 20 = 3 + 17, 20 = 7 + 13

#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 2; i <= n / 2; i++) {
        bool is_prime_i = true;
        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                is_prime_i = false;
                break;
            }
        }

        if (!is_prime_i) continue;

        int complement = n - i;
        bool is_prime_complement = true;
        for (int j = 2; j * j <= complement; j++) {
            if (complement % j == 0) {
                is_prime_complement = false;
                break;
            }
        }

        if (is_prime_complement) {
            cout << n << " = " << i << " + " << complement << endl;
        }
    }

    return 0;
}
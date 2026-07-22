// Да се напише функция, която приема три естествени числа a и b и k и 
// връща броя на числата в интервата [a...b], които имат точно k различни прости делитела.
// Вход: 19 32 3,  Изход: 1
// Вход: 19 42 3,  Изход: 2

#include <iostream>

using namespace std;

bool is_prime(int n) {
    if (n <= 1) return false;

    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }

    return true;
}

int count_prime_divisors(int n) {
    int count = 0;

    for (int i = 2; i <= n; i++) {
        if (n % i == 0 && is_prime(i)) {
            count++;
        }
    }

    return count;
}

int count_numbers_with_k_prime_divisors(int a, int b, int k) {
    int count = 0;

    for (int i = a; i <= b; i++) {
        if (count_prime_divisors(i) == k) {
            count++;
        }
    }

    return count;
}

int main() {
    int a, b, k;
    cin >> a >> b >> k;

    cout << count_numbers_with_k_prime_divisors(a, b, k) << endl;

    return 0;
}
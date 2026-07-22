// Напишете функция, която приема неотрицателни числа n и k връща log_k(n) (закръглено надолу)
// Вход: 90 3,  Изход: 4

#include <iostream>

using namespace std;

int log_k(int n, int k) {
    if (n <= 0 || k <= 1) {
        return -1;
    }

    int result = 0;
    while (n >= k) {
        n /= k;
        result++;
    }
    return result;
}

int main() {
    int n, k;
    cin >> n >> k;

    cout << log_k(n, k) << endl;

    return 0;
}
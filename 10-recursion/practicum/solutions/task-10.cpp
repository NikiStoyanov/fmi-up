// Дефинирайте рекурсивна функция bool isPerfect(int n), която проверява дали дадено естествено число е съвършено.
// Съвършени числа са тези, за които сумата на всичките им делители (без самото число) е равна на същото число.
// Вход: 33550336,  Изход: true
// Вход: 8126,     Изход: false

#include <iostream>

using namespace std;

bool isPerfectHelper(long long n, long long divisor, long long sum) {
    if (divisor * divisor > n) {
        return sum == n;
    }

    if (n % divisor == 0) {
        sum += divisor;
        
        long long pair = n / divisor;
        if (pair != divisor) {
            sum += pair;
        }
    }

    return isPerfectHelper(n, divisor + 1, sum);
}

bool isPerfect(long long n) {
    if (n <= 1) {
        return false;
    }
    
    return isPerfectHelper(n, 2, 1);
}

int main() {
    long long n;
    cout << "Enter a natural number n: ";
    cin >> n;

    if (n <= 0) {
        cout << "n must be a natural number." << endl;
        return 1;
    }

    if (isPerfect(n)) {
        cout << "The number " << n << " is a perfect number." << endl;
    } else {
        cout << "The number " << n << " is not a perfect number." << endl;
    }

    return 0;
}
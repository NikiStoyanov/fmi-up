// Напишете функция, която изчислява квадратния корен на n, без да използва стандартната библиотечна функция sqrt.
// Изчисляването спира, когато разликата на N+1 - ви и N - ти член стане по-малка от даден епсилон.
// X_{n+1} = 0.5 * (X_n + N / X_n)
// Вход: 16,  Изход: 4
// Вход: 5,  Изход: 2.23607

#include <iostream>

using namespace std;

constexpr double EPSILON = 1e-5;

double myAbs(double x) {
    return (x < 0) ? -x : x;
}

double squareRoot(double n) {
    double x_n = n / 2.0;
    double x_n1;

    do {
        x_n1 = 0.5 * (x_n + n / x_n);
        if (myAbs(x_n1 - x_n) < EPSILON) {
            break;
        }
        x_n = x_n1;
    } while (true);

    return x_n1;
}

int main() {
    double n;
    cin >> n;

    double result = squareRoot(n);
    cout << result << endl;

    return 0;
}
// Напишете програма, която въвежда две числа - a и b и извежда като резултат (a + b)^4 - (a - b)^2
// Вход: 5 7,  Изход: 20732

#include <iostream>

using namespace std;

int main() {
    double a, b;
    cin >> a >> b;

    double sum = a + b;
    double diff = a - b;

    double result = (sum * sum * sum * sum) - (diff * diff);
    cout << result << endl;

    return 0;
}
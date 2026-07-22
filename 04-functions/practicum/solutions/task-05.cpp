// Напишете функция, която приема две double числа и връща по-голямото.

#include <iostream>

using namespace std;

constexpr double EPSILON = 1e-9;

double maxDouble(double a, double b) {
    if (a > b + EPSILON) {
        return a;
    } else {
        return b;
    }
}

int main() {
    double a, b;
    cin >> a >> b;

    cout << maxDouble(a, b) << endl;

    return 0;
}
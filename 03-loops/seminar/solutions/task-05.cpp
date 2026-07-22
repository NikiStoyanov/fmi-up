// Напишете програма, която приема две естествени числа и връща най-малкото им общо кратно.
// Вход: 4 6,  Изход: 12

#include <iostream>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    int original_a = a;
    int original_b = b;

    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }

    int gcd = a; // greatest common divisor
    int lcm = (original_a * original_b) / gcd; // least common multiple

    cout << lcm << endl;

    return 0;
}
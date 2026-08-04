// Напишете рекурсивна функция, която умножава две числа без да използвате оператора за умножение *

#include <iostream>

using namespace std;

int multiply(int a, int b) {
    if (b == 0) {
        return 0;
    }

    if (b < 0) {
        return -multiply(a, -b);
    }

    return a + multiply(a, b - 1);
}

int main() {
    int a, b;
    cout << "Enter two integers: ";
    cin >> a >> b;

    int result = multiply(a, b);
    cout << "The product of " << a << " and " << b << " is: " << result << endl;

    return 0;
}
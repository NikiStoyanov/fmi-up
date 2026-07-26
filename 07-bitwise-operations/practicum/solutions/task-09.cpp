// Да се напише функция, която приема 2 цели числа a и b и 
// разменя стойностите им без допълнителна променлива с побитови операции.
// Вход: 3 4,  Изход: 4 3

#include <iostream>

using namespace std;

void swapWithoutTemp(int &a, int &b) {
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
}

int main() {
    int a, b;
    cout << "Enter two numbers (a and b): ";
    cin >> a >> b;

    swapWithoutTemp(a, b);
    cout << "After swapping: a = " << a << ", b = " << b << endl;

    return 0;
}
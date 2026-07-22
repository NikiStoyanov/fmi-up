// Да се напише функция gcd(int a, int b), която връща най-големият общ делител на две числа.
// Вход: 8 6,  Изход: 2
// Вход: 15 12,  Изход: 3

#include <iostream>

using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    
    return a;
}

int main() {
    int a, b;
    cin >> a >> b;

    cout << gcd(a, b) << endl;

    return 0;
}
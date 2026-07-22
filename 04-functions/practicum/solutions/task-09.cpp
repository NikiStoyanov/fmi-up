// Да се напише функция lcm(int a, int b), която връща най-малкото общо кратно на две числа.
// Вход: 8 6,  Изход: 24
// Вход: 15 12,  Изход: 60

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

int lcm(int a, int b) {
    return (a / gcd(a, b)) * b;
}

int main() {
    int a, b;
    cin >> a >> b;

    cout << lcm(a, b) << endl;

    return 0;
}
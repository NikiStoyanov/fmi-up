// Да се напише функция, която приема две естествени числа и връща ново число, което е тяхната конкатенация.
// Вход: 19 32,  Изход: 1932

#include <iostream>

using namespace std;

int concatenate(int a, int b) {
    int temp = b;
    int multiplier = 1;

    while (temp > 0) {
        multiplier *= 10;
        temp /= 10;
    }

    return a * multiplier + b;
}

int main() {
    int a, b;
    cin >> a >> b;

    cout << concatenate(a, b) << endl;

    return 0;
}
// Напишете програма, която приема 2 цели числа и отпечатва по-голямото от тях. 
// Задачата да се реши както с if, така и с тернарен оператор.
// Вход: 3 8,  Изход: 8

#include <iostream>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    // Решение с if
    if (a > b) {
        cout << a << endl;
    } else {
        cout << b << endl;
    }

    // Решение с тернарен оператор
    cout << (a > b ? a : b) << endl;

    return 0;
}
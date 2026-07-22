// Да се напише функция swap, която приема 2 числа и разменя стойностите им.
// Вход: 5 7,  Изход: 7 5

#include <iostream>

using namespace std;

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int a, b;
    cin >> a >> b;

    swap(a, b);

    cout << a << " " << b << endl;

    return 0;
}
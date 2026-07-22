// Да се напише функция sort3(int& min, int& mid, int& max), която приема 3 числа и ги сортира във възходящ ред.
// Вход: 4 5 3,  Изход: 3 4 5

#include <iostream>

using namespace std;

void sort3(int& min, int& mid, int& max) {
    if (min > mid) {
        swap(min, mid);
    }
    if (mid > max) {
        swap(mid, max);
    }
    if (min > mid) {
        swap(min, mid);
    }
}

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    sort3(a, b, c);

    cout << a << " " << b << " " << c << endl;

    return 0;
}
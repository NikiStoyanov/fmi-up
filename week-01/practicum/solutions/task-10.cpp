// Дадени са 4 на брой цели числа - a, b, c, d. Да се изведе дали интервалите [a, b] и [c, d] се п  ресичат.
// Вход: 2 5 1 4,  Изход: 1

#include <iostream>

using namespace std;

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    cout << ((b >= c) && (d >= a)) << endl;

    return 0;
}
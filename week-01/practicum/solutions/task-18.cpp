// От конзолата се четат 3 реални числа. Да се изведе дали могат да бъдат страни на триъгълник.
// Вход: 3 4 5,  Изход: 1
// Вход: 1 2 3,  Изход: 0

#include <iostream>

using namespace std;

int main() {
    double a, b, c;
    cin >> a >> b >> c;

    cout << (a + b > c && a + c > b && b + c > a) << endl;

    return 0;
}
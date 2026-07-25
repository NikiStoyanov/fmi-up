// Дадени са естествените числа n и m. Да се състави програма, която намира и извежда стойността на произведението: 
// n * ( n + 1 ) * ( n + 2 ) * … * ( m - 1 ) * m
// Вход: 3 10,  Изход: 1814400

#include <iostream>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    long long product = 1;

    for (int i = n; i <= m; ++i) {
        product *= i;
    }

    cout << "Product: " << product << endl;

    return 0;
}
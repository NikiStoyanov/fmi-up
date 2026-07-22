// Въвеждат се 5 цели числа - a,b,c,d, e. Разглеждаме полинома f(x) = a * x^4 + b * x^3 + c* x^2 + d * x + e. 
// Отпечатайте всички цели решения на f(x) >= 0 където x e в интервала [-100, 100] 
// Вход: -1 4 0 8 1,  Изход: 0 1 2 3 4
// Вход: 0 0 -1 5 -6,  Изход: 2 3

#include <iostream>

using namespace std;

int main() {
    long long a, b, c, d, e;
    cin >> a >> b >> c >> d >> e;

    for (int x = -100; x <= 100; ++x) {
        long long f = a * x * x * x * x + b * x * x * x + c * x * x + d * x + e;
        
        if (f >= 0) {
            cout << x << " ";
        }
    }

    return 0;
}
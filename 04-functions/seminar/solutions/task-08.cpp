// Напишете функция, която приема 4 цели числа - a,b,c,d и връща 
// дали точката <a,b> и точката <c,d> лежат на една окръжност с център <0,0>.
// Вход: 1 0 0 1,  Изход: true

#include <iostream>

using namespace std;

bool are_on_same_circle(int a, int b, int c, int d) {
    return (a * a + b * b) == (c * c + d * d);
}

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    cout << (are_on_same_circle(a, b, c, d) ? "true" : "false") << endl;

    return 0;
}
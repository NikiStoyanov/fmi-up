// От конзолата се прочитат две цели числа и се отпечатва частното и остатъка при целочислено деление.
// Вход: 17 4,  Изход: 4 1

#include <iostream>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    cout << (a / b) << " " << (a % b) << endl;

    return 0;
}
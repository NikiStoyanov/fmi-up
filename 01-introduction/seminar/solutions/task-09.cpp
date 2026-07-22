// Имате две променливи от тип int да се разменят техните стойности без да се използва трета променлива.
// Вход: 5 7,  Изход: 7 5

#include <iostream>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    a = a + b;
    b = a - b;
    a = a - b;

    cout << a << " " << b << endl;

    return 0;
}
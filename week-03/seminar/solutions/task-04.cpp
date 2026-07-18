// Напишете програма, която приема две естествени числа и връща най-големият им общ делител.
// Вход: 16 24,  Изход: 8

#include <iostream>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }

    cout << a << endl;

    return 0;
}
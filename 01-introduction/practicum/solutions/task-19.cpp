// Потребителят въвежда число n. Да се изведе сборът на числата, които се делят на 3 и са по-малки или равни на n.
// Вход: 15,  Изход: 45

#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int k = n / 3;
    int sum = (k * (k + 1) / 2) * 3;

    cout << sum << endl;

    return 0;
}
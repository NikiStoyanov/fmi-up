// Потребителя въвежда число n. Да се изведе сумата на числата от 1 до n (без цикъл).
// Вход: 15,  Изход: 120

#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int sum = (n * (n + 1)) / 2;

    cout << sum << endl;

    return 0;
}
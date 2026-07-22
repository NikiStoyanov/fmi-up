// Въвежда се цяло число. Отпечатайте 1, ако числото е четно и 0, ако е нечетно.
// Вход: 5,  Изход: 0
// Вход: 4,  Изход: 1

#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    
    cout << (n % 2 == 0) << endl;
}
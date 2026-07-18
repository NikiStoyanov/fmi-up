// От конзолата се въвеждат 6 символа. Да се провери дали сумата от ASCII кодовете на 
// тези символи се дели на 3. Ако се дели на 3, да се изведе на конзолата 1, ако не - 0.
// Вход: a b c d f z,  Изход: 1
// Вход: a b c d f g,  Изход: 0

#include <iostream>

using namespace std;

int main() {
    char c1, c2, c3, c4, c5, c6;
    cin >> c1 >> c2 >> c3 >> c4 >> c5 >> c6;

    int sum = c1 + c2 + c3 + c4 + c5 + c6;

    cout << (sum % 3 == 0) << endl;

    return 0;
}
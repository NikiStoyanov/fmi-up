// От конзолата се въвеждат дължините на трите страни на триъгълник (реални положителни числа). 
// Нека програмата извежда подходящо съобщение на конзолата, ако тези страни са валидни и ако не са. 
// Входът не е гарантирано коректен - да се извежда различно съобщение и за него.
// Вход: 4.5 7 5,  Изход: This triangle exists.
// Вход: 1 50 100,  Изход: This triangle doesn't exist

#include <iostream>

using namespace std;

int main() {
    double a, b, c;
    cin >> a >> b >> c;

    if (a <= 0 || b <= 0 || c <= 0) {
        cout << "Invalid input." << endl;
    } else if (a + b > c && a + c > b && b + c > a) {
        cout << "This triangle exists." << endl;
    } else {
        cout << "This triangle doesn't exist." << endl;
    }

    return 0;
}
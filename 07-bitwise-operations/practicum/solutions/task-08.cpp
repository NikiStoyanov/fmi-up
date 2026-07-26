// Да се напише функция, която приема 3 цели числа x, m и n и връща числото, 
// което се получава, ако от x се вземат n бита, започвайки от позиция m. 
// Позициите броим отдясно наляво, започвайки от 0. Битовете се взимат надясно от позиция m.
// Вход: 16 4 3,  Изход: 4
// Вход: 23 2 3,  Изход: 7

#include <iostream>

using namespace std;

unsigned int extractBits(unsigned int x, unsigned int m, unsigned int n) {
    return (x >> (m - n + 1)) & ((1 << n) - 1);
}

int main() {
    unsigned int x, m, n;
    cout << "Enter a number (x): ";
    cin >> x;
    cout << "Enter the starting position (m): ";
    cin >> m;
    cout << "Enter the number of bits to extract (n): ";
    cin >> n;

    unsigned int result = extractBits(x, m, n);
    cout << "The extracted bits from position " << m << " to " << (m + n - 1) << " are: " << result << endl;

    return 0;
}
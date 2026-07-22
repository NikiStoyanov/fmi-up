// Въвежда се трицифрено цяло число n. Да се отпечата обърнатото число събрано с единица.
// Вход: 265,  Изход: 563
// Вход: 289,  Изход: 983

#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int hundreds = n / 100;
    int tens = (n / 10) % 10;
    int units = n % 10;
    
    int reversed = units * 100 + tens * 10 + hundreds;

    cout << reversed + 1 << endl;

    return 0;
}
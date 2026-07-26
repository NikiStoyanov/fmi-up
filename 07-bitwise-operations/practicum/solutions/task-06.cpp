// Напишете функция, която по подадено цяло число n и цяло число k, 
// връща числото, което е "закодирано" в последните k бита на n.
// Вход: 15 2,  Изход: 3
// Вход: 189 3, Изход: 5
// Вход: 189 4, Изход: 13

#include <iostream>

using namespace std;

unsigned int extractLastKBits(unsigned int n, unsigned int k) {
    return n & ((1 << k) - 1);
}

int main() {
    unsigned int number, k;
    cout << "Enter a number: ";
    cin >> number;
    cout << "Enter the number of bits to extract from the end: ";
    cin >> k;

    unsigned int result = extractLastKBits(number, k);
    cout << "The last " << k << " bits of " << number << " are: " << result << endl;

    return 0;
}
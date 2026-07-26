// Да се напише функция unsigned int setBit(unsigned int n, unsigned int k), която повдига бита на позиция k

#include <iostream>

using namespace std;

unsigned int setBit(unsigned int n, unsigned int k) {
    return n | (1 << k);
}

int main() {
    unsigned int number, position;
    cout << "Enter a number: ";
    cin >> number;
    cout << "Enter the bit position to set (0-based): ";
    cin >> position;

    unsigned int result = setBit(number, position);
    cout << "Result after setting bit at position " << position << ": " << result << endl;

    return 0;
}
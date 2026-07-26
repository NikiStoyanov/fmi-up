// Да се напише функция unsigned int toggleBit(unsigned int n, unsigned int k), която обръща бита на позиция k

#include <iostream>

using namespace std;

unsigned int toggleBit(unsigned int n, unsigned int k) {
    return n ^ (1 << k);
}

int main() {
    unsigned int number, position;
    cout << "Enter a number: ";
    cin >> number;
    cout << "Enter the bit position to toggle (0-based): ";
    cin >> position;

    unsigned int result = toggleBit(number, position);
    cout << "Result after toggling bit at position " << position << ": " << result << endl;

    return 0;
}
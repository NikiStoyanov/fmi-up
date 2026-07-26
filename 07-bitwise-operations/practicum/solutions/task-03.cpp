// Да се напише функция unsigned int clearBit(unsigned int n, unsigned int k), която сваля бита на позиция k

#include <iostream>

using namespace std;

unsigned int clearBit(unsigned int n, unsigned int k) {
    return n & ~(1 << k);
}

int main() {
    unsigned int number, position;
    cout << "Enter a number: ";
    cin >> number;
    cout << "Enter the bit position to clear (0-based): ";
    cin >> position;

    unsigned int result = clearBit(number, position);
    cout << "Result after clearing bit at position " << position << ": " << result << endl;

    return 0;
}

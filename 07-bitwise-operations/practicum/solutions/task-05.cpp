// Да се напише функция bool checkBit(unsigned int n, unsigned int k), която проверява какъв е бита на позиция k

#include <iostream>

using namespace std;

bool checkBit(unsigned int n, unsigned int k) {
    return (n & (1 << k)) != 0;
}

int main() {
    unsigned int number, position;
    cout << "Enter a number: ";
    cin >> number;
    cout << "Enter the bit position to check (0-based): ";
    cin >> position;

    bool result = checkBit(number, position);
    cout << "Bit at position " << position << " is " << (result ? "1" : "0") << endl;

    return 0;
}
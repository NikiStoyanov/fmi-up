// Да се напише функция, която проверява дали дадено число е четно.

#include <iostream>

using namespace std;

bool isEven(int n) {
    int mask = 1;
    return (n & mask) == 0;
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    if (isEven(number)) {
        cout << number << " is even." << endl;
    } else {
        cout << number << " is odd." << endl;
    }

    return 0;
}
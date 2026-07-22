// Да се напише функция isEven(size_t number), която проверява дали дадено число е четно или не.

#include <iostream>

using namespace std;

bool isEven(size_t number) {
    return number % 2 == 0;
}

int main() {
    size_t number;
    cin >> number;

    if (isEven(number)) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }
    
    return 0;
}
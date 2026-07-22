// Да се напише функция myAbs(int number), която приема число и връща абсолютната му стойност.

#include <iostream>

using namespace std;

int myAbs(int number) {
    if (number < 0) {
        return -number;
    }
    
    return number;
}

int main() {
    int number;
    cin >> number;

    cout << myAbs(number) << endl;

    return 0;
}
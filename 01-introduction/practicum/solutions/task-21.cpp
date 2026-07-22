// Да се определи за дадено 6-цифрено число дали 3-цифреното число, образувано от първите 3 цифри на даденото, 
// е по-малко от това, образурано от вторите 3.
// Вход: 548735,  Изход: 1

#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int firstThree = n / 1000;
    int lastThree = n % 1000;

    cout << (firstThree < lastThree) << endl;

    return 0;
}
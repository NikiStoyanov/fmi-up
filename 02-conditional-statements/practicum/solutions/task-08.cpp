// Да се въведат от конзолата 3 цифри и да се изведе най-голямото число, 
// което може да се получи, ако тези цифри са единици, десетици и стотици.
// Вход: 5 3 8,  Изход: 853

#include <iostream>

using namespace std;

int main() {
    int digit1, digit2, digit3;
    int minDigit, maxDigit;
    cin >> digit1 >> digit2 >> digit3;

    if (digit1 >= digit2 && digit1 >= digit3) {
        maxDigit = digit1;
    } else if (digit2 >= digit1 && digit2 >= digit3) {
        maxDigit = digit2;
    } else {
        maxDigit = digit3;
    }

    if (digit1 <= digit2 && digit1 <= digit3) {
        minDigit = digit1;
    } else if (digit2 <= digit1 && digit2 <= digit3) {
        minDigit = digit2;
    } else {
        minDigit = digit3;
    }

    int midDigit = digit1 + digit2 + digit3 - maxDigit - minDigit;

    int largestNumber = maxDigit * 100 + midDigit * 10 + minDigit;
    cout << largestNumber << endl;

    return 0;
}
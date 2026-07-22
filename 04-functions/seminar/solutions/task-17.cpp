// Напишете функция, която приема естествено число и връща ново число, което има същите цифри, но в сортиран вид.
// Вход: 531261,  Изход: 112356

#include <iostream>

using namespace std;

int sortDigits(int n) {
    int sortedNumber = 0;

    for (int d = 1; d <= 9; d++) {
        int temp = n;

        while (temp > 0) {
            if (temp % 10 == d) {
                sortedNumber = sortedNumber * 10 + d;
            }
            temp /= 10;
        }
    }

    return sortedNumber;
}

int main() {
    unsigned int number;
    cout << "Enter a natural number: ";
    cin >> number;

    int sortedNumber = sortDigits(number);
    cout << "Sorted number: " << sortedNumber << endl;

    return 0;
}
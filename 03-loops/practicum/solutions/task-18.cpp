// Напишете програма, която приема цели числа и приключва работа, когато се въведат 5 положителни числа. 
// Накрая да се изведе сумата от всички въведени числа.
// Вход: 1 3 5 7 9,  Изход: 25

#include <iostream>

using namespace std;

int main() {
    int count = 0;
    int sum = 0;
    int number;

    while (count < 5) {
        cin >> number;
        sum += number;
        if (number > 0) {
            count++;
        }
    }

    cout << "Sum: " << sum << endl;

    return 0;
}
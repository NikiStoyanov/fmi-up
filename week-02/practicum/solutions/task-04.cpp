// Създайте програма, която връща дали дадена година е високосна или не.
//  - Високосна година е такава, деляща се на 4.
//  - Ако годината се дели и на 100, то тя не е високосна.
//  - Ако годината се дели и на 400, то тя отново е високосна.
// Вход: 2000,  Изход: Leap year
// Вход: 2005,  Изход: Not leap year

#include <iostream>

using namespace std;

int main() {
    int year;
    cin >> year;

    bool isLeapYear = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);

    cout << (isLeapYear ? "Leap year" : "Not leap year") << endl;

    return 0;
}
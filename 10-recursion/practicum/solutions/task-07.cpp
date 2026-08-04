// Да се напише програма, която приема като вход цяло положително число 
// [ N <= 3000 ] и извежда на екрана следващите N високосни години.
// Задачата да се реши с рекурсия.

#include <iostream>

using namespace std;

bool isLeapYear(int year) {
    if (year % 4 != 0) {
        return false;
    } else if (year % 100 != 0) {
        return true;
    } else if (year % 400 != 0) {
        return false;
    } else {
        return true;
    }
}

void printLeapYears(int year, int count, int N) {
    if (count == N) {
        return;
    }

    if (isLeapYear(year)) {
        cout << year << endl;
        printLeapYears(year + 1, count + 1, N);
    } else {
        printLeapYears(year + 1, count, N);
    }
}

int main() {
    int N;
    cout << "Enter a positive integer N (N <= 3000): ";
    cin >> N;

    if (N <= 0 || N > 3000) {
        cout << "N must be a positive integer less than or equal to 3000." << endl;
        return 1;
    }

    int currentYear = 2026;
    printLeapYears(currentYear, 0, N);

    return 0;
}
// Да се напише фунция, която приема 2 числа - числител и знаменател на обикновена дроб, и съкращава дробта.
// Напишете програма, която извежда сбора на 2 такива дробни числа.
// Вход: 16 20,  Изход: 4 5

#include <iostream>

using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

void simplifyFraction(int& numerator, int& denominator) {
    int divisor = gcd(numerator, denominator);
    numerator /= divisor;
    denominator /= divisor;
}

int main() {
    int numerator1, denominator1;
    int numerator2, denominator2;

    cin >> numerator1 >> denominator1;
    cin >> numerator2 >> denominator2;

    // Събираме дробите
    int resultNumerator = numerator1 * denominator2 + numerator2 * denominator1;
    int resultDenominator = denominator1 * denominator2;

    // Съкращаваме резултата
    simplifyFraction(resultNumerator, resultDenominator);

    cout << resultNumerator << " " << resultDenominator << endl;

    return 0;
}
// Напишете програма, която приема 4-цифрено число и извежда произведението и средноаритметичното на цифрите.
// Вход: 2573,  Изход: Product: 210, Average: 4.25

#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int thousands = n / 1000;
    int hundreds = (n / 100) % 10;
    int tens = (n / 10) % 10;
    int units = n % 10;

    int product = thousands * hundreds * tens * units;
    double average = (thousands + hundreds + tens + units) / 4.0;

    cout << "Product: " << product << ", Average: " << average << endl;

    return 0;
}
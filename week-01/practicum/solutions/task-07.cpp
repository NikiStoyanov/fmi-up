// Напишете програма, която обръща подадени градуси от Целзий (C) във Фаренхайт (F). 
// Формулата за това е: *F = (9 / 5) * C + 32*
// Вход: 37,  Изход: 98.6

#include <iostream>

using namespace std;

int main() {
    double celsius;
    cin >> celsius;

    double fahrenheit = (9.0 / 5.0) * celsius + 32;
    cout << fahrenheit << endl;

    return 0;
}
// Да се напише програма, която намира броя на срещанията на всеки символ от вида `!` , `?` , `,`, в даден низ.

#include <iostream>

using namespace std;

int main() {
    const int SIZE = 1000;
    char str[SIZE];

    cout << "Enter a string (max " << SIZE - 1 << " characters): ";
    cin.getline(str, SIZE);

    int exclamationCount = 0;
    int questionCount = 0;
    int commaCount = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == '!') {
            exclamationCount++;
        } else if (str[i] == '?') {
            questionCount++;
        } else if (str[i] == ',') {
            commaCount++;
        }
    }

    cout << "Number of '!' characters: " << exclamationCount << endl;
    cout << "Number of '?' characters: " << questionCount << endl;
    cout << "Number of ',' characters: " << commaCount << endl;

    return 0;
}
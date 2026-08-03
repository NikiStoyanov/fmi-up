// Да се реализира рекурсивна функция, която приема стринг и връща броя на малките и големите символи в него.

#include <iostream>

using namespace std;

void countCharacters(const char* str, int& lowerCount, int& upperCount) {
    if (*str == '\0') {
        return;
    }

    if (*str >= 'a' && *str <= 'z') {
        lowerCount++;
    } else if (*str >= 'A' && *str <= 'Z') {
        upperCount++;
    }

    countCharacters(str + 1, lowerCount, upperCount);
}

int main() {
    const char* str = "Hello World!";
    int lowerCount = 0;
    int upperCount = 0;

    countCharacters(str, lowerCount, upperCount);

    cout << "Lowercase letters: " << lowerCount << endl;
    cout << "Uppercase letters: " << upperCount << endl;

    return 0;
}
// Да се напише функция, която приема символен низ с максимална дължина 10 000 и 
// матрица от символи. Нека в редовете на матрицата да се запазят всички думи от низа. 
//  - Всяка дума няма да надвишава 1024 символа;
//  - Гарантирано е, че има най-много 100 думи;
//  - Гарантирано е, че всички думи са разделени с произволен брой интервали;

#include <iostream>

using namespace std;

void extractWords(const char* str, char matrix[100][1024], int& wordCount) {
    wordCount = 0;
    const char* ptr = str;

    while (*ptr != '\0') {
        while (*ptr == ' ') {
            ++ptr;
        }

        if (*ptr == '\0') {
            break;
        }

        int charIndex = 0;
        while (*ptr != ' ' && *ptr != '\0' && charIndex < 1023) {
            matrix[wordCount][charIndex++] = *ptr++;
        }
        matrix[wordCount][charIndex] = '\0';

        ++wordCount;
    }
}

void printMatrix(char matrix[100][1024], int wordCount) {
    for (int i = 0; i < wordCount; ++i) {
        cout << matrix[i] << endl;
    }
}

int main() {
    const char* input = "This is a sample string with multiple words";
    char matrix[100][1024];
    int wordCount = 0;

    extractWords(input, matrix, wordCount);
    printMatrix(matrix, wordCount);

    return 0;
}
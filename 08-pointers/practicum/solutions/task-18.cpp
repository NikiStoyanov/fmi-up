// Да се напише функция, която приема 2 стринга и стринг result. 
// Функцията да обработва result така, че да представлява стринг, 
// който съдържа само символите, които се срещат само в единия стринг.

#include <iostream>

using namespace std;

void manipulateStrings(const char* str1, const char* str2, char* result) {
    int index = 0;

    const char* curr1 = str1;
    while (*curr1 != '\0') {
        const char* temp = str2;
        bool found = false;

        while (*temp != '\0') {
            if (*curr1 == *temp) {
                found = true;
                break;
            }
            temp++;
        }

        if (!found) {
            result[index++] = *curr1;
        }

        curr1++;
    }

    const char* curr2 = str2;
    while (*curr2 != '\0') {
        const char* temp = str1;
        bool found = false;

        while (*temp != '\0') {
            if (*curr2 == *temp) {
                found = true;
                break;
            }
            temp++;
        }

        if (!found) {
            result[index++] = *curr2;
        }

        curr2++;
    }

    result[index] = '\0';
}

int main() {
    const char* str1 = "abcde";
    const char* str2 = "acdef";
    char result[100];

    manipulateStrings(str1, str2, result);

    cout << "Resulting string: " << result << endl;

    return 0;
}
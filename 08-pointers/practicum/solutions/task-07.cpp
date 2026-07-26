// Да се напише функция void sortCharacters(const char* str, char* result). 
// Нека функцията подрежда всички букви в низа във възходящ ред.
// Коректността на низа не е гарантирана, направете валидация на низа.
// Вход: "Hello world!",  Изход: "dehllloorw"

#include <iostream>

using namespace std;

void toLower(char& str) {
    if (str >= 'A' && str <= 'Z') {
        str = str - 'A' + 'a';
    }
}

bool myIsAlpha(char c) {
    return (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z');
}

void sortCharacters(const char* str, char* result) {
    int count[256] = {0};

    for (const char* ptr = str; *ptr != '\0'; ++ptr) {
        if (myIsAlpha(*ptr)) {
            char lowerChar = *ptr;
            toLower(lowerChar);
            count[(unsigned char)lowerChar]++;
        }
    }

    int index = 0;
    for (int i = 0; i < 256; ++i) {
        while (count[i] > 0) {
            result[index++] = (char)i;
            count[i]--;
        }
    }

    result[index] = '\0';
}

int main() {
    const char* input = "Hello, World!";
    char result[100];

    sortCharacters(input, result);

    cout << "Sorted characters: " << result << endl;

    return 0;
}
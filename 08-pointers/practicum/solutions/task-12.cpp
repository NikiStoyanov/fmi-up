// Да се напише функция, която приема 2 символни низа и проверява колко пъти единият се съдържа в другия
// Вход: "abcdabcabababc", "abc",  Изход: 3

#include <iostream>

using namespace std;

int getLength(const char* str) {
    int count = 0;
    
    while (*str++) {
        count++;
    }

    return count;
}

bool isMatch(const char* str, const char* subStr) {
    while (*subStr) {
        if (*str != *subStr) {
            return false;
        }
        str++;
        subStr++;
    }
    return true;
}


int countOccurrences(const char* str, const char* subStr) {
    int count = 0;
    int strLength = getLength(str);
    int subStrLength = getLength(subStr);

    for (int i = 0; i <= strLength - subStrLength; i++) {
        if (isMatch(str + i, subStr)) {
            count++;
        }
    }

    return count;
}

int main() {
    const char* str = "abcdabcabababc";
    const char* subStr = "abc";

    int occurrences = countOccurrences(str, subStr);
    cout << "The substring \"" << subStr << "\" occurs " << occurrences << " times in \"" << str << "\"." << endl;

    return 0;
}
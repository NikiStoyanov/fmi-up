// Напишете функция, която приема стринг и връща лексикографско най-малка дума.
// Вход: "Me? Why always me?, Изход: always

#include <iostream>

using namespace std;

bool isDelimiter(char c) {
    return c == ' ' || c == '\t' || c == '\n' || c == '.' || c == ',' || c == '?' || c == '!';
}

char toLowerChar(char c) {
    if (c >= 'A' && c <= 'Z') {
        return c - 'A' + 'a';
    }
    return c;
}

int compareWords(const char* w1, size_t len1, const char* w2, size_t len2) {
    size_t minLen = (len1 < len2) ? len1 : len2;

    for (size_t i = 0; i < minLen; ++i) {
        char c1 = toLowerChar(w1[i]);
        char c2 = toLowerChar(w2[i]);

        if (c1 < c2) return -1;
        if (c1 > c2) return 1;
    }

    if (len1 < len2) return -1;
    if (len1 > len2) return 1;
    
    return 0;
}

const char* findLexicographicallySmallestWord(char* str, size_t& outLen) {
    const char* smallestWord = nullptr;
    size_t smallestLen = 0;

    char* current = str;

    while (*current) {
        while (*current && isDelimiter(*current)) ++current;
        if (!*current) break;

        char* wordStart = current;
        size_t wordLen = 0;
        while (*current && !isDelimiter(*current)) {
            ++wordLen;
            ++current;
        }

        if (!smallestWord || compareWords(wordStart, wordLen, smallestWord, smallestLen) < 0) {
            smallestWord = wordStart;
            smallestLen = wordLen;
        }
    }

    outLen = smallestLen;
    return smallestWord;
}

int main() {
    char text[] = "Me? Why always me?";
    size_t smallestLen = 0;

    const char* smallestWord = findLexicographicallySmallestWord(text, smallestLen);

    if (smallestWord) {
        cout << "Lexicographically smallest word: ";
        for (size_t i = 0; i < smallestLen; ++i) {
            cout << smallestWord[i];
        }
        cout << endl;
    } else {
        cout << "No words found in the string." << endl;
    }

    return 0;
}
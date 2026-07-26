// Напишете функция, която приема стринг и връща най-често срещаната дума.
// Думите са разделени с произволен брой интервали, табулации и препинателни знаци. 
// Игнорираме разликата между главни и малки букви за задачата.
// Вход: "Me? Why always me?",  Изход: me

#include <iostream>

using namespace std;

bool isDelimiter(char c) {
    return c == ' ' || c == '\t' || c == '\n' || c == '.' || c == ',' || c == '?' || c == '!';
}

void toLower(char* str) {
    while (*str) {
        if (*str >= 'A' && *str <= 'Z') {
            *str = *str - 'A' + 'a';
        }
        ++str;
    }
}

bool wordsMatch(const char* w1, size_t len1, const char* w2, size_t len2) {
    if (len1 != len2) return false;
    for (size_t i = 0; i < len1; ++i) {
        if (w1[i] != w2[i]) return false;
    }
    return true;
}

const char* findMostFrequentWord(char* str, size_t& outLen) {
    toLower(str);

    const char* bestWord = nullptr;
    size_t maxCount = 0;
    outLen = 0;

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

        int currentCount = 0;
        char* search = str;
        
        while (*search) {
            while (*search && isDelimiter(*search)) ++search;
            if (!*search) break;

            char* searchStart = search;
            size_t searchLen = 0;
            while (*search && !isDelimiter(*search)) {
                ++searchLen;
                ++search;
            }

            if (wordsMatch(wordStart, wordLen, searchStart, searchLen)) {
                currentCount++;
            }
        }

        if (currentCount > maxCount) {
            maxCount = currentCount;
            bestWord = wordStart;
            outLen = wordLen;
        }
    }

    return bestWord;
}

int main() {
    char text[] = "Me? Why always me?";
    size_t bestLen = 0;
    
    const char* bestWord = findMostFrequentWord(text, bestLen);

    if (bestWord) {
        cout << "Most frequent word: ";
        for (size_t i = 0; i < bestLen; ++i) {
            cout << bestWord[i];
        }
        cout << endl;
    }

    return 0;
}
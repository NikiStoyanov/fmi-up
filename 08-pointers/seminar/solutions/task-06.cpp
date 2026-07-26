// Напишете импелментация на getCharOccurrencesCount - брой срещания на кнокретен символ в текст.

#include <iostream>

using namespace std;

int getCharOccurrencesCount(const char* str, char ch) {
    int count = 0;
    
    while (*str) {
        if (*str == ch) {
            ++count;
        }
        ++str;
    }

    return count;
}

int main() {
    const char* testStr = "Hello, World!";
    char testChar = 'o';

    int occurrences = getCharOccurrencesCount(testStr, testChar);
    cout << "The character '" << testChar << "' occurs " << occurrences << " times in the string \"" << testStr << "\"." << endl;

    return 0;
}
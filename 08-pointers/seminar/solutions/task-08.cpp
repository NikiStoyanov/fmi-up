// Напишете имплементация на searchInText - търсене в текст.

#include <iostream>

using namespace std;

bool searchInText(const char* text, const char* word) {
    while (*text) {
        const char* t = text;
        const char* w = word;

        while (*t && *w && *t == *w) {
            ++t;
            ++w;
        }

        if (*w == '\0') {
            return true;
        }

        ++text;
    }

    return false;
}

int main() {
    const char* text = "Hello, World!";
    const char* word1 = "World";
    const char* word2 = "Universe";

    cout << "Is \"" << word1 << "\" in the text \"" << text << "\"? " 
         << (searchInText(text, word1) ? "Yes" : "No") << endl;

    cout << "Is \"" << word2 << "\" in the text \"" << text << "\"? " 
         << (searchInText(text, word2) ? "Yes" : "No") << endl;

    return 0;
}
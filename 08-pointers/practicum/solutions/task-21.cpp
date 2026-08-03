// Да се напише функция, която приема 2 стринга - text и substring и 
// замества всяко срещане на текст равен на substring в text с толкова звездички, колкото е дължината на substring.
// Да се игнорират главни и малки букви при сравняването на substring с част от text.
// Вход: "Howdy! How are you? How was your day?", "How",  Изход: "***dy! *** are you? *** was your day?"

#include <iostream>

using namespace std;

char toLowercase(char c) {
    if (c >= 'A' && c <= 'Z') {
        return c + ('a' - 'A');
    }
    return c;
}

int getStringLength(const char* str) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}

void censorSubstring(char* text, const char* substring) {
    int textLength = getStringLength(text);
    int substringLength = getStringLength(substring);

    for (int i = 0; i <= textLength - substringLength; i++) {
        bool match = true;

        for (int j = 0; j < substringLength; j++) {
            if (toLowercase(text[i + j]) != toLowercase(substring[j])) {
                match = false;
                break;
            }
        }

        if (match) {
            for (int j = 0; j < substringLength; j++) {
                text[i + j] = '*';
            }
            i += substringLength - 1;
        }
    }
}

int main() {
    char text[] = "Howdy! How are you? How was your day?";
    const char* substring = "How";

    cout << "Original text: " << text << endl;

    censorSubstring(text, substring);

    cout << "Censored text: " << text << endl;

    return 0;
}
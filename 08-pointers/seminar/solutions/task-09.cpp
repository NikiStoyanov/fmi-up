// Напишете функция, която приема 3 стринга - text, where и what и замества в text всяко срещане на where с what.
// Да се реши без допълнителна памет (in-place).

#include <iostream>

using namespace std;

void replaceInText(char* text, const char* where, const char* what) {
    if (!text || !where || !what || *where == '\0') return;

    int wLen = 0, whLen = 0;
    while (where[wLen]) wLen++;
    while (what[whLen]) whLen++;

    while (*text) {
        int i = 0;
        while (where[i] && text[i] == where[i]) {
            i++;
        }

        if (i == wLen) {
            char* end = text + wLen;
            while (*end) end++; 

            if (whLen > wLen) {
                int diff = whLen - wLen;
                for (char* p = end; p >= text + wLen; --p) {
                    *(p + diff) = *p;
                }
            } else if (whLen < wLen) {
                int diff = wLen - whLen;
                for (char* p = text + wLen; p <= end; ++p) {
                    *(p - diff) = *p;
                }
            }

            for (int j = 0; j < whLen; ++j) {
                text[j] = what[j];
            }

            text += whLen;
        } else {
            text++;
        }
    }
}

int main() {
    char text[100] = "Hello, World! Welcome to the World of C++.";
    const char* where = "World";
    const char* what = "Universe";

    cout << "Original text: " << text << endl;
    replaceInText(text, where, what);
    cout << "Modified text: " << text << endl;

    return 0;
}
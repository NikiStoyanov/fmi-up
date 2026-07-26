// Напишете функция, която приема стринг и връща броя на думите в него. 
// Думите са разделени с произволен брой интервали, табулации и препинателни знаци.
// Вход: "Me? Why always me?",  Изход: 4

#include <iostream>

using namespace std;

bool isDelimiter(char c) {
    return c == ' ' || c == '\t' || c == '\n' || c == '.' || c == ',' || c == '?' || c == '!';
}

int countWords(char* str) {
    int count = 0;
    bool inWord = false;

    while (*str) {
        if (isDelimiter(*str)) {
            inWord = false;
        } else {
            if (!inWord) {
                count++;
                inWord = true;
            }
        }
        str++;
    }

    return count;
}

int main() {
    char text[] = "Me? Why always me?";
    int wordCount = countWords(text);
    cout << "The number of words in the string is: " << wordCount << endl;

    return 0;
}
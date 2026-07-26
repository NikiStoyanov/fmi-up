// Да се напише функция void insertSymbol(const char* text, char* result, char symbol, unsigned int idx), 
// която обработва така result, че да представлява символен низ, в който е вмъкнат symbol в text на позиция idx.
// Вход: "Hello, y friend!" m 7,  Изход: "Hello, my friend!"

#include <iostream>

using namespace std;

void insertSymbol(const char* text, char* result, char symbol, unsigned int idx) {
    unsigned int i = 0;
    unsigned int j = 0;

    while (text[i] != '\0') {
        if (i == idx) {
            result[j] = symbol;
            ++j;
        }
        
        result[j] = text[i];
        
        ++i;
        ++j;
    }

    if (i == idx) {
        result[j] = symbol;
        ++j;
    }

    result[j] = '\0';
}

int main() {
    const char* text = "Hello, y friend!";
    char result[100];
    char symbol = 'm';
    unsigned int idx = 7;

    insertSymbol(text, result, symbol, idx);

    cout << "Resulting string: " << result << endl;

    return 0;
}
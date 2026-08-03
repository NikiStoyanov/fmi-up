// От стандартния вход се чете низ. Да се създаде масив, съдържащ всички префикси на входния низ.
// Вход: "Input",  Изход: [[""], ["I"], ["In"], ["Inp"], ["Inpu"], ["Input"]]

#include <iostream>

using namespace std;

int getStringLength(const char* str) {
    int len = 0;
    while (str[len] != '\0') {
        len++;
    }
    return len;
}

char** generatePrefixes(const char* str, int& numPrefixes) {
    int length = getStringLength(str);
    numPrefixes = length + 1;

    char** prefixes = new char*[numPrefixes];
    for (int i = 0; i < numPrefixes; ++i) {
        prefixes[i] = new char[i + 1];
        for (int j = 0; j < i; ++j) {
            prefixes[i][j] = str[j];
        }
        prefixes[i][i] = '\0';
    }

    return prefixes;
}

int main() {
    const char* inputStr = "Input";
    int numPrefixes;

    char** prefixes = generatePrefixes(inputStr, numPrefixes);

    cout << "Prefixes of the string \"" << inputStr << "\":" << endl;
    for (int i = 0; i < numPrefixes; ++i) {
        cout << "\"" << prefixes[i] << "\"" << endl;
        delete[] prefixes[i];
    }
    delete[] prefixes;

    return 0;
}
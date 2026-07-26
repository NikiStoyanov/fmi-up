// Напишете имплементация на strlen - връща колко символа има от началото до ‘\0’.

#include <iostream>

using namespace std;

size_t myStrlen(const char* str) {
    size_t length = 0;
    while (str[length] != '\0') {
        ++length;
    }
    return length;
}

int main() {
    const char* testStr = "Hello, World!";
    size_t length = myStrlen(testStr);
    cout << "Length of the string \"" << testStr << "\" is: " << length << endl;

    return 0;
}
// Напишете имплементация на strcat - конкатенация.

#include <iostream>

using namespace std;

void myStrcat(char* destination, const char* source) {
    while (*destination) {
        ++destination;
    }

    while (*source) {
        *destination++ = *source++;
    }

    *destination = '\0';
}

int main() {
    char destination[50] = "Hello, ";
    const char* source = "World!";

    myStrcat(destination, source);

    cout << "Concatenated string: " << destination << endl;

    return 0;
}
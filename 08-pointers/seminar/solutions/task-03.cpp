// Напишете имплементация на strcpy - копира source в destination.

#include <iostream>

using namespace std;

void myStrcpy(char* destination, const char* source) {
    while (*source) {
        *destination++ = *source++;
    }

    *destination = '\0';
}

int main() {
    const char* source = "Hello, World!";
    char destination[50];

    myStrcpy(destination, source);

    cout << "Source: " << source << endl;
    cout << "Destination: " << destination << endl;

    return 0;
}
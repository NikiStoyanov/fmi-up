// Да се въведе символен низ и да се изведат символите му наобратно.

#include <iostream>

using namespace std;

int main() {
    const int SIZE = 1000;
    char str[SIZE];

    cout << "Enter a string (max " << SIZE - 1 << " characters): ";
    cin.getline(str, SIZE);

    char* ptr = str;
    int length = 0;
    while (*ptr != '\0') {
        length++;
        ptr++;
    }

    for (int i = length - 1; i >= 0; i--) {
        cout << str[i];
    }
    cout << endl;

    return 0;
}
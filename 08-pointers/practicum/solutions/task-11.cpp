// Даден е низ, образуван от главни латински букви. Да напише програма, 
// която конструира същия низ, но от съответните малките латински букви.

#include <iostream>

using namespace std;

int main() {
    const int SIZE = 1000;
    char str[SIZE];
    char result[SIZE];

    cout << "Enter a string of uppercase letters (max " << SIZE - 1 << " characters): ";
    cin.getline(str, SIZE);

    char* ptr = str;
    char* resPtr = result;
    while (*ptr != '\0') {
        if (*ptr >= 'A' && *ptr <= 'Z') {
            *resPtr = *ptr + ('a' - 'A');
        } else {
            *resPtr = *ptr;
        }
        ptr++;
        resPtr++;
    }

    *resPtr = '\0';

    cout << "Converted string: " << result << endl;

    return 0;
}
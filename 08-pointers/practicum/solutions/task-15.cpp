// Даден е низ, образуван от латински букви. 
// Да се напише функция bool containsDuplicate(const char* str), която проверява, дали в низа има повтарящи се букви.

#include <iostream>

using namespace std;

char toLowercase(char c) {
    if (c >= 'A' && c <= 'Z') {
        return c + ('a' - 'A');
    }
    return c;
}

bool containsDuplicate(const char* str) {
    bool seen[26] = { false };

    while (*str) {
        char currentChar = toLowercase(*str);
        if (currentChar >= 'a' && currentChar <= 'z') {
            int index = currentChar - 'a';
            
            if (seen[index]) {
                return true;
            }
            seen[index] = true;
        }
        
        str++;
    }

    return false;
}

int main() {
    const char* inputStr = "HelloWorld";
    
    if (containsDuplicate(inputStr)) {
        cout << "The string contains duplicate letters." << endl;
    } else {
        cout << "The string does not contain duplicate letters." << endl;
    }

    return 0;
}
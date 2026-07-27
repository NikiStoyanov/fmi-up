// Да се напише функция, която приема стринг и връща два стринга с ТОЧНА големина. 
// Първият да бъде съставен само от малките букви, а другият да бъде съставен само от главните букви.

#include <iostream>

using namespace std;

int countLowercase(const char* str) {
    int count = 0;
    
    while (*str++) {
        if (*str >= 'a' && *str <= 'z') {
            count++;
        }
    }

    return count;
}

int countUppercase(const char* str) {
    int count = 0;
    
    while (*str++) {
        if (*str >= 'A' && *str <= 'Z') {
            count++;
        }
    }

    return count;
}

char* extractLowercase(const char* str) {
    int length = countLowercase(str);
    char* lowercaseStr = new char[length + 1];
    int index = 0;

    while (*str) {
        if (*str >= 'a' && *str <= 'z') {
            lowercaseStr[index++] = *str;
        }
        str++;
    }

    lowercaseStr[index] = '\0';
    return lowercaseStr;
}

char* extractUppercase(const char* str) {
    int length = countUppercase(str);
    char* uppercaseStr = new char[length + 1];
    int index = 0;

    while (*str) {
        if (*str >= 'A' && *str <= 'Z') {
            uppercaseStr[index++] = *str;
        }
        str++;
    }

    uppercaseStr[index] = '\0';
    return uppercaseStr;
}

int main() {
    const char* inputStr = "Hello World! This is a Test String.";
    char* lowercaseStr = extractLowercase(inputStr);
    char* uppercaseStr = extractUppercase(inputStr);

    cout << "Original string: " << inputStr << endl;
    cout << "Lowercase string: " << lowercaseStr << endl;
    cout << "Uppercase string: " << uppercaseStr << endl;

    delete[] lowercaseStr;
    delete[] uppercaseStr;

    return 0;
}
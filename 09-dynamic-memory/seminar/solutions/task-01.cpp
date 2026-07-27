// Да се напише функция, която приема стринг и връща нов стринг с ТОЧНА ГОЛЕМИНА, 
// в който всички числа са цензурирани. (Всяко число е заменено с '*')

#include <iostream>

using namespace std;

int getLength(const char* str) {
    int count = 0;
    
    while (*str++) {
        count++;
    }

    return count;
}

char* censorNumbers(const char* str) {
    int length = getLength(str);

    char* censoredStr = new char[length + 1];

    for (int i = 0; i < length; i++) {
        if (str[i] >= '0' && str[i] <= '9') {
            censoredStr[i] = '*';
        } else {
            censoredStr[i] = str[i];
        }
    }

    censoredStr[length] = '\0';

    return censoredStr;
}

int main() {
    const char* inputStr = "Hello 123, this is a test 4567!";
    char* censoredStr = censorNumbers(inputStr);

    cout << "Original string: " << inputStr << endl;
    cout << "Censored string: " << censoredStr << endl;

    delete[] censoredStr;

    return 0;
}
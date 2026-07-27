// Да се напише функция, която приема стринг и връща нов стринг, 
// който е съставен от малките латински букви на подадения, но в сортиран вид.

#include <iostream>

using namespace std;

int getLowercaseCount(const char* str) {
    int count = 0;
    
    while (*str++) {
        if (*str >= 'a' && *str <= 'z') {
            count++;
        }
    }

    return count;
}

char* extractAndSortLowercase(const char* str) {
    int length = getLowercaseCount(str);
    char* lowercaseStr = new char[length + 1];
    int index = 0;

    while (*str) {
        if (*str >= 'a' && *str <= 'z') {
            lowercaseStr[index++] = *str;
        }
        str++;
    }

    lowercaseStr[index] = '\0';

    for (int i = 0; i < length - 1; i++) {
        for (int j = i + 1; j < length; j++) {
            if (lowercaseStr[i] > lowercaseStr[j]) {
                char temp = lowercaseStr[i];
                lowercaseStr[i] = lowercaseStr[j];
                lowercaseStr[j] = temp;
            }
        }
    }

    return lowercaseStr;
}

int main() {
    const char* inputStr = "Hello World! This is a Test String with Lowercase Letters.";
    char* sortedLowercaseStr = extractAndSortLowercase(inputStr);

    cout << "Original string: " << inputStr << endl;
    cout << "Sorted lowercase string: " << sortedLowercaseStr << endl;

    delete[] sortedLowercaseStr;

    return 0;
}
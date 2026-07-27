// Да се напише функция void getSubstring(const char* str, int start, int end, char* result), 
// която приема символен низ и 2 цели числа start и end и връща подниз [start, end). 

//  - Ако end е повече от дължината на низа - извеждаме низа до края;
//  - Ако start е повече от дължината на низа - извеждаме празен низ;

#include <iostream>

using namespace std;

int getLength(const char* str) {
    int count = 0;
    
    while (*str++) {
        count++;
    }

    return count;
}

void getSubstring(const char* str, int start, int end, char* result) {
    int length = getLength(str);

    if (start >= length) {
        result[0] = '\0';
        return;
    }

    if (end > length) {
        end = length;
    }

    int index = 0;
    for (int i = start; i < end; i++) {
        result[index++] = str[i];
    }
    result[index] = '\0';
}

int main() {
    const char* inputStr = "Hello, this is a sample string.";
    int start = 7;
    int end = 20;
    char result[100];

    getSubstring(inputStr, start, end, result);
    cout << "Substring from index " << start << " to " << end << ": " << result << endl;

    return 0;
}
// Да се напише функция, която приема 3 стринга и връща най-дългия им общ префикс.
// Вход: [ "flower", "flow", "flight" ],  Изход: "fl"
// Вход: [ "dog", "racecar", "car" ],  Изход: ""

#include <iostream>

using namespace std;

int getStringLength(const char* str) {
    int len = 0;
    while (str[len] != '\0') {
        len++;
    }
    return len;
}

char* longestCommonPrefix(const char* str1, const char* str2, const char* str3) {
    char* prefix = new char[getStringLength(str1) + 1];
    int index = 0;

    while (str1[index] != '\0' && str2[index] != '\0' && str3[index] != '\0') {
        if (str1[index] == str2[index] && str1[index] == str3[index]) {
            prefix[index] = str1[index];
            index++;
        } else {
            break;
        }
    }

    prefix[index] = '\0';
    return prefix;
}

int main() {
    const char* str1 = "flower";
    const char* str2 = "flow";
    const char* str3 = "flight";

    char* commonPrefix = longestCommonPrefix(str1, str2, str3);

    cout << "Longest common prefix: " << commonPrefix << endl;

    delete[] commonPrefix;
    
    const char* str4 = "dog";
    const char* str5 = "racecar";
    const char* str6 = "car";

    commonPrefix = longestCommonPrefix(str4, str5, str6);

    cout << "Longest common prefix: " << commonPrefix << endl;

    delete[] commonPrefix;
    return 0;
}
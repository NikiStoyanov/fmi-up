// Да се реализира рекурсивна функция, която приема стринг и връща дали стрингът е палиндром. 

#include <iostream>

using namespace std;

bool isPalindrome(const char* str, int left, int right) {
    if (left >= right) {
        return true;
    }
    
    if (str[left] != str[right]) {
        return false;
    }
    
    return isPalindrome(str, left + 1, right - 1);
}

int main() {
    const char* str = "racecar";
    int length = 0;

    while (str[length] != '\0') {
        length++;
    }

    bool result = isPalindrome(str, 0, length - 1);
    if (result) {
        cout << "\"" << str << "\" is a palindrome." << endl;
    } else {
        cout << "\"" << str << "\" is not a palindrome." << endl;
    }
    
    return 0;
}
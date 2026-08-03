// Да се състави програма на C++, чрез която от клавиатурата се въвежда изречение с отделни думи.
// Като резултат на екрана да се извежда същия текст, но всяка отделна дума да започва с главна буква, а следващите букви да са малки. 
// Вход: "i will ace the exam tomorrow",  Изход: "I Will Ace The Exam Tomorrow"

#include <iostream>

using namespace std;

void capitalizeWords(char* str) {
    bool newWord = true;

    while (*str != '\0') {
        if (newWord && *str >= 'a' && *str <= 'z') {
            *str = *str - ('a' - 'A');
            newWord = false;
        } else if (!newWord && *str >= 'A' && *str <= 'Z') {
            *str = *str + ('a' - 'A');
        }

        if (*str == ' ') {
            newWord = true;
        }

        str++;
    }
}

int main() {
    char str[100] = "i will ace the exam tomorrow";

    cout << "Original sentence: " << str << endl;
    
    capitalizeWords(str);

    cout << "Modified sentence: " << str << endl;

    return 0;
}
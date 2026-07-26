// С помощта на побитови операции и 8-битово число запазваме информация 
// в кой ден от предстоящата седмица във ФМИ имаме контролно. 
// Да се напише функция, която приема цяло 8-битово число и извежда "закодираната" в него информация.
// Вход: 105,  Изход: Monday, Thursday, Saturday, Sunday,  Обяснение 105 = 01101001

#include <iostream>

using namespace std;

void printExamDays(unsigned char days) {
    cout << "Exam days: ";
    for (int i = 0; i < 7; ++i) {
        if (days & (1 << i)) {
            switch (i) {
                case 0: cout << "Monday, "; break;
                case 1: cout << "Tuesday, "; break;
                case 2: cout << "Wednesday, "; break;
                case 3: cout << "Thursday, "; break;
                case 4: cout << "Friday, "; break;
                case 5: cout << "Saturday, "; break;
                case 6: cout << "Sunday, "; break;
            }
        }
    }
    cout << endl;
}

int main() {
    unsigned char days;
    unsigned int inputTemp;
    
    cout << "Enter an 8-bit number representing exam days: ";
    cin >> inputTemp;
    days = inputTemp;

    printExamDays(days);

    return 0;
}
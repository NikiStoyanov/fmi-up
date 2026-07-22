// Създайте програма, която чете 5 числа. Да се изведе 1, ако числата са част от 
// редицата на Фибоначи в реда, в който са въведени, и 0 - в противен случай.
// Вход: 3 5 8 13 21,  Изход: 1

#include <iostream>

using namespace std;

int main () {
    int first_number, second_number, third_number, fourth_number, fifth_number;
    cin >> first_number >> second_number >> third_number >> fourth_number >> fifth_number;

    bool third = (third_number == first_number + second_number);
    bool fourth = (fourth_number == second_number + third_number);
    bool fifth = (fifth_number == third_number + fourth_number);

    cout << (third && fourth && fifth) << endl;

    return 0;
}
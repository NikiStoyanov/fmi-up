// Да се напише програма, която въвежда цяло число отпечатава с думи кой ден от седмицата е.
// Ако въведеното число е по-голямо от 7, програмата да отпечата "Invalid day!".
// Вход: 1,  Изход: Monday
// Вход: 5,  Изход: Friday
// Вход: 250,  Изход: Invalid day!

#include <iostream>

using namespace std;

int main() {
    int day;
    cin >> day;

    switch (day) {
        case 1:
            cout << "Monday" << endl;
            break;
        case 2:
            cout << "Tuesday" << endl;
            break;
        case 3:
            cout << "Wednesday" << endl;
            break;
        case 4:
            cout << "Thursday" << endl;
            break;
        case 5:
            cout << "Friday" << endl;
            break;
        case 6:
            cout << "Saturday" << endl;
            break;
        case 7:
            cout << "Sunday" << endl;
            break;
        default:
            cout << "Invalid day!" << endl;
    }

    return 0;
}
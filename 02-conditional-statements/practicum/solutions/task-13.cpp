// От конзолата се чете число в интервала [0, ..., 12]. 
// Ако числото е четно, програмата принтира всички четни числа по-големи или равни на числото, намиращи се в интервала. 
// Ако е нечетно, принтираме всички по-големи или равни нечетни числа.
// Вход: 1,  Изход: 1 3 5 7 9 11
// Вход: 4,  Изход: 4 6 8 10 12

#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    switch (n) {
        case 0:
            cout << "0 ";
        case 2: 
            cout << "2 ";
        case 4:
            cout << "4 ";
        case 6:
            cout << "6 ";
        case 8:
            cout << "8 ";
        case 10:
            cout << "10 ";
        case 12:
            cout << "12 ";
            break;
        case 1:
            cout << "1 ";
        case 3:
            cout << "3 ";
        case 5:
            cout << "5 ";
        case 7:
            cout << "7 ";
        case 9:
            cout << "9 ";
        case 11:
            cout << "11 ";
            break;
    }

    cout << endl;
    
    return 0;
}
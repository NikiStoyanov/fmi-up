// Да се напише функция, която валидира години и факултетен номер на студент. Годините трябва да са в интервала 
// [15, 100], а факултетния номер - в  [10000, 99999]. Ако стойностите са извън този интервал, да се приемат
// най-малките допустими стойности от съответните интервали, иначе остават същите.
// Вход: 0 0,  Изход: 15 10000
// Вход: 18 900,  Изход: 18 10000

#include <iostream>

using namespace std;

void validateStudent(int& age, int& facultyNumber) {
    if (age < 15 || age > 100) {
        age = 15;
    }
    if (facultyNumber < 10000 || facultyNumber > 99999) {
        facultyNumber = 10000;
    }
}

int main() {
    int age, facultyNumber;
    cin >> age >> facultyNumber;

    validateStudent(age, facultyNumber);

    cout << age << " " << facultyNumber << endl;

    return 0;
}
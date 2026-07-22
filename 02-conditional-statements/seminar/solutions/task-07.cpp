// Да се напише програма, която при подадени радиус r и двумерна точка (х, у) проверява 
// дали точката се намира вътре/извън или по контура на окръжност с център (0,0).
// Вход: 5 0 5, Изход: On the circle
// Вход: 5 10 30, Изход: Out of the circle
// Вход: 5 0 2, Изход: In the circle

#include <iostream>

using namespace std;

int main() {
    double r, x, y;
    cin >> r >> x >> y;

    double distance_squared = x * x + y * y;
    double radius_squared = r * r;

    if (distance_squared < radius_squared) {
        cout << "In the circle" << endl;
    } else if (distance_squared == radius_squared) {
        cout << "On the circle" << endl;
    } else {
        cout << "Out of the circle" << endl;
    }

    return 0;
}
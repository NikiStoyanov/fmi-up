// Напишете функция, която приема 6 целочислени координати (3 точки) и връща обиколката на триъгълника по тези точки.
// Вход: 1 1 4 7 0 10,  Изход: 20.764

#include <iostream>

using namespace std;


double distance(int x1, int y1, int x2, int y2) {
    return sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
}


double perimeter(int x1, int y1, int x2, int y2, int x3, int y3) {
    return distance(x1, y1, x2, y2) + distance(x2, y2, x3, y3) + distance(x3, y3, x1, y1);
}


int main() {
    int x1, y1, x2, y2, x3, y3;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

    cout << perimeter(x1, y1, x2, y2, x3, y3) << endl;

    return 0;
}
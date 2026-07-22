// По подадени x1, y1, x2, y2, x и y, където x1, y1 са координатите на горния ляв ъгъл на правоъгълник, 
// а x2, y2 на долния десен, проверете дали точката (x,y) се намира вътре в правоъгълника.
// Вход: 2 3 5 1 3 2,  Изход: 1
// Вход: 2 3 5 1 3 3,  Изход: 0

#include <iostream>

using namespace std;

int main() {
    int x1, y1, x2, y2, x, y;
    cin >> x1 >> y1 >> x2 >> y2 >> x >> y;

    bool isInside = (x >= x1 && x <= x2 && y <= y1 && y >= y2);
    cout << isInside << endl;

    return 0;
}
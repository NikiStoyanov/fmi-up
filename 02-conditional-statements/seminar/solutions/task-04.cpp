// Да се напише програма, която въвежда размерите на геометрична фигура и пресмята
// лицето й. Фигурите са четири вида: квадрат (s), правоъгълник (r), кръг (c) и триъгълник
// (t). На първия ред на входа се чете вида на фигурата (s, r, c или t). Ако фигурата е квадрат,
// на следващия ред се чете едно число – дължина на страната му. Ако фигурата е правоъгълник,
// на следващите два реда четат две числа – дължините на страните му. Ако фигурата е кръг,
// на следващия ред чете едно число – радиусът на кръга. Ако фигурата е триъгълник, на следващите
// два реда четат две числа – дължината на страната му и дължината на височината към нея.
// Вход: s 5 , Изход: 25
// Вход: r 7 2.5, Изход: 17.5
// Вход: c 6, Изход: 113.097

#include <iostream>

using namespace std;

int main() {
    char shape;
    cin >> shape;

    if (shape == 's') {
        double side;
        cin >> side;
        cout << side * side << endl;
    } else if (shape == 'r') {
        double length, width;
        cin >> length >> width;
        cout << length * width << endl;
    } else if (shape == 'c') {
        double radius;
        cin >> radius;
        cout << 3.14159 * radius * radius << endl;
    } else if (shape == 't') {
        double base, height;
        cin >> base >> height;
        cout << 0.5 * base * height << endl;
    } else {
        cout << "Invalid shape!" << endl;
    }

    return 0;
}
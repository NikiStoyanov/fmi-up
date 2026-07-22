// Да се напише програма, която чете от конзолата реално число - см и го превръща в инчове. (1см = 0.393701 инча).
// Вход: 25,  Изход: 9.84

#include <iostream>

using namespace std;

int main() {
    double cm;
    cin >> cm;

    double inches = cm * 0.393701;

    cout << inches << endl;

    return 0;
}
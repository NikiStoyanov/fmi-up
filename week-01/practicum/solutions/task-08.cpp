// Да се напише програма, която приема брой секунди и изчислява колко дни, часове, минути и секунди са.
// Вход: 533628,  Изход: 6 days, 4 hours, 13 minutes and 48 seconds

#include <iostream>

using namespace std;

int main() {
    int total_seconds;
    cin >> total_seconds;

    int days = total_seconds / (24 * 60 * 60);
    total_seconds %= (24 * 60 * 60);

    int hours = total_seconds / (60 * 60);
    total_seconds %= (60 * 60);

    int minutes = total_seconds / 60;
    int seconds = total_seconds % 60;

    cout << days << " days, " << hours << " hours, " << minutes << " minutes and " << seconds << " seconds" << endl;

    return 0;
}
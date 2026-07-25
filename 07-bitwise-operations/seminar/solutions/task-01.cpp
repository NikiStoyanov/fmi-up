// Да се напише функция, която приема масив, в който всяко число се среща 
// 2 пъти с изключение на едно число, което се среща веднъж.
// Напишете функция, която приема такъв масив и връща кое е това число.
// Вход: [9 18 9 12 18 15 12],  Изход: 15

#include <iostream>

using namespace std;

int main() {
    int arr[] = {9, 18, 9, 12, 18, 15, 12};
    int n = 7;
    int result = 0;

    for (int i = 0; i < n; i++) {
        result ^= arr[i];
    }

    cout << "The number that appears only once is: " << result << endl;
    return 0;
}
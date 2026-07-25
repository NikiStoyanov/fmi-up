// Напишете функция, която приема масив (разглеждаме го като множество) и отпечатва всички негови подмножества.
// Вход: [1, 2, 3],  Изход: [], [1], [2], [3], [1,2], [2,3], [1,3], [1,2,3]
// Вход: [5, 3],  Изход: [], [5], [3], [5, 3]

#include <iostream>

using namespace std;

void printSubsets(int arr[], int n) {
    int totalSubsets = 1 << n;

    for (int i = 0; i < totalSubsets; i++) {
        cout << "[";
        for (int j = 0; j < n; j++) {
            if (i & (1 << j)) {
                cout << arr[j];
                if (j < n - 1) {
                    cout << ",";
                }
            }
        }
        cout << "]" << endl;
    }
}

int main() {
    int arr1[] = {1, 2, 3};
    int n1 = 3;
    cout << "Subsets of [1, 2, 3]:" << endl;
    printSubsets(arr1, n1);

    int arr2[] = {5, 3};
    int n2 = 2;
    cout << "Subsets of [5, 3]:" << endl;
    printSubsets(arr2, n2);

    return 0;
}
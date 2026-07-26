// Да се направи функция int at(const int* arr, unsigned int idx), 
// която взема указател към int масив и връща елемент на съответния му индекс. 
// Да не се използва оператор[]
// Вход: [ 1, 2, 3, 4, 5, 4, 3, 2, 1 ] 3,  Изход: 4

#include <iostream>

using namespace std;

int at(const int* arr, unsigned int idx) {
    return *(arr + idx);
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 4, 3, 2, 1};
    unsigned int idx = 3;

    cout << "Element at index " << idx << ": " << at(arr, idx) << endl;

    return 0;
}
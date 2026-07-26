// Да се напише функция void swap(int*& ptr1, int*& ptr2), 
// която разменя стойностите на два указателя, които сочат към целочислени числа
// Вход: 21 37,  Изход: 37 21

#include <iostream>

using namespace std;

void swap(int*& ptr1, int*& ptr2) {
    int* temp = ptr1;
    ptr1 = ptr2;
    ptr2 = temp;
}

int main() {
    int a = 21;
    int b = 37;

    int* ptr1 = &a;
    int* ptr2 = &b;

    cout << "Before swapping: *ptr1 = " << *ptr1 << ", *ptr2 = " << *ptr2 << endl;

    swap(ptr1, ptr2);

    cout << "After swapping: *ptr1 = " << *ptr1 << ", *ptr2 = " << *ptr2 << endl;

    return 0;
}
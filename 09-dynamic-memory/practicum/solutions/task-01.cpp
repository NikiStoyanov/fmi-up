// Реализирайте функция int* filter(const int* nums), която филтрира всички прости числа от зададен динамичен масив.
// Вход: [ 3, 5, 8, 7, 11, 24, 42 ],  Изход: [ 3, 5, 7, 11 ]

#include <iostream>

using namespace std;

bool isPrime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) return false;
    }
    return true;
}

int* filter(const int* nums, int size, int& newSize) {
    newSize = 0;
    for (int i = 0; i < size; ++i) {
        if (isPrime(nums[i])) {
            newSize++;
        }
    }

    int* primes = new int[newSize];
    int index = 0;
    for (int i = 0; i < size; ++i) {
        if (isPrime(nums[i])) {
            primes[index++] = nums[i];
        }
    }

    return primes;
}

int main() {
    int nums[] = { 3, 5, 8, 7, 11, 24, 42 };
    int size = sizeof(nums) / sizeof(nums[0]);
    int newSize;

    int* primes = filter(nums, size, newSize);

    cout << "Filtered prime numbers: ";
    for (int i = 0; i < newSize; ++i) {
        cout << primes[i] << " ";
    }
    cout << endl;

    delete[] primes;
    return 0;
}
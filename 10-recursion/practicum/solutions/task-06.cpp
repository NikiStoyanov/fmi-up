// Да се имплементира рекурсивна функция void printNumbers(unsigned int N), 
// която по подадено число цяло неотрицателно число [ N < 16384 ] да отпечата на екрана следната редица:
// N
// N N - 1
// N N - 1 N - 2
// N N - 1 N - 2 ... 1

#include <iostream>

using namespace std;

void printNumbersHelper(unsigned int N, unsigned int current) {
    if (current == 0) {
        return;
    }

    for (unsigned int i = N; i >= current; --i) {
        cout << i << " ";
    }
    cout << endl;

    printNumbersHelper(N, current - 1);
}

void printNumbers(unsigned int N) {
    printNumbersHelper(N, N);
}

int main() {
    unsigned int N;
    cout << "Enter a non-negative integer N (N < 16384): ";
    cin >> N;

    if (N >= 16384) {
        cout << "N must be less than 16384." << endl;
        return 1;
    }

    printNumbers(N);

    return 0;
}
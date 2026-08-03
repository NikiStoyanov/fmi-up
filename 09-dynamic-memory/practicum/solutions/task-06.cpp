// Да се дефинира функция size_t* sortLex(size_t* nums, size_t N), 
// която получава като аргументи положителното число N и масив nums, 
// съдържащ N на брой цели неотрицателни числа, и ги сортира във възходящ ред относно лексикографската наредба 
// Вход: 6, [ 13, 14, 7, 2018, 9, 0 ],  Изход: [ 0, 13, 14, 2018, 7, 9 ]

#include <iostream>

using namespace std;

size_t getNumberLength(size_t num) {
    size_t length = 0;
    do {
        length++;
        num /= 10;
    } while (num != 0);
    return length;
}

size_t myPow(size_t base, size_t exp) {
    size_t result = 1;
    for (size_t i = 0; i < exp; ++i) {
        result *= base;
    }
    return result;
}

bool isLexicographicallySmaller(size_t a, size_t b) {
    size_t lenA = getNumberLength(a);
    size_t lenB = getNumberLength(b);

    size_t minLen = (lenA < lenB) ? lenA : lenB;

    size_t currentLenA = lenA;
    size_t currentLenB = lenB;

    for (size_t i = 0; i < minLen; ++i) {
        size_t digitA = (a / myPow(10, currentLenA - 1)) % 10;
        size_t digitB = (b / myPow(10, currentLenB - 1)) % 10;

        if (digitA != digitB) {
            return digitA < digitB;
        }
        currentLenA--;
        currentLenB--;
    }

    return lenA < lenB;
}

size_t* sortLex(size_t* nums, size_t N) {
    for (size_t i = 0; i < N - 1; ++i) {
        for (size_t j = 0; j < N - i - 1; ++j) {
            if (!isLexicographicallySmaller(nums[j], nums[j + 1])) {
                size_t temp = nums[j];
                nums[j] = nums[j + 1];
                nums[j + 1] = temp;
            }
        }
    }
    return nums;
}

int main() {
    size_t N = 6;
    size_t nums[] = { 13, 14, 7, 2018, 9, 0 };

    size_t* sortedNums = sortLex(nums, N);

    cout << "Sorted numbers lexicographically: [ ";
    for (size_t i = 0; i < N; ++i) {
        cout << sortedNums[i];
        if (i < N - 1) {
            cout << ", ";
        }
    }
    cout << " ]" << endl;

    return 0;
}
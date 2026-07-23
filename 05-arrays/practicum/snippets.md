# Теоретични задачи:

**Задача 1:** Какво ще изведе програмата?

```c++
#include <iostream>

int main()
{
	int a = 4;
	int b = 12;
	
	do {
    		a++;
	} while (b = 0);
 
	int arr[] = { a++, b > a };
	std::cout << (arr[0] <= arr[1]);

	return 0;
}
```

<details><summary>Отговор</summary>

```
0
```

Обяснение: цикълът `do...while` се изпълнява само веднъж, защото `b = 0` е присвояване и условието става false. След това `a++` дава 5, а `b > a` е false, така че масивът става `{5, 0}` и сравнението `5 <= 0` връща `0`.

</details>

**Задача 2:** Какво прави следният код?

```c++
#include <iostream>

bool checkArr(int arr[], int n)
{
	for (int i = 0; i < n; i++)
	{
    		if (arr[i] > arr[i + 1]) return false;
	}

	return true;
}
 
int main()
{
	int arr[100] = { 1,4,6,8,9,9 };
	std::cout << checkArr(arr, 6);
	return 0;
}
```

<details><summary>Отговор</summary>

```
0
```

Кодът проверява дали елементите в масива са подредени във възходящ ред, но сравнява и `arr[5]` с `arr[6]`.
Понеже `arr[6]` е 0, функцията връща `false` и на екрана се извежда `0`.

</details>

**Задача 3:** Какво ще отпечата кодът?

```c++
#include <iostream>

int checkEquals(int arr[], int arr1[], int size1, int size2)
{
   	int size = (size1 < size2) ? size1 : size2;
 
   	int count = 0;
	
   	for (int i = 0; i < size; i++)
	{
         	if (arr[i] == arr1[i]) count++;
   	}
 
   	return count;
}
 
int main()
{
   	int arr[100] = { 5,12,7,33 };
   	int arr1[10]{ 1 };
 
   	std::cout << checkEquals(arr, arr1, 100, 10);

	return 0;
}
```

<details><summary>Отговор</summary>

```
6
```

В първите 10 елемента съвпадат само елементите с индекси от 4 до 9, защото и в двата масива там стойността е 0.

</details>
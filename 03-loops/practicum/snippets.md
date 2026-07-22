## Теоретични въпроси

**Задача 1**:   Какво ще се отпечата на конзолата?

```c++
#include <iostream>

int main()
{
	int i;

	for (i = 0; i < 5; i++) {
		if (i == 3) {
			continue;
    	}

    	std::cout << i << " ";
	}

	std::cout << i << std::endl;
	return 0;
}
```

<details><summary>Отговор</summary>

```
0 1 2 4 5
```

</details>

**Задача 2**:	Какво ще се отпечата на конзолата?

```c++
#include <iostream>

int main()
{
	int i = 9;

	while (i = 12)
	{
	    if (i == 0)
		    break;
    	if (i == 9)
        	continue;

    	i--;
    	std::cout << i << std::endl;
	}

	return 0;
}
```

<details><summary>Отговор</summary>

```
Безкраен цикъл, отпечатва непрекъснато:
11
11
11
...
```

Причина: условието е `while (i = 12)` (присвояване), затова `i` винаги става 12 преди тялото и след `i--` винаги се отпечатва 11.

</details>

**Задача 3**:	Какво ще се отпечата на конзолата?

```c++
#include <iostream>

using namespace std;

int main() {
	int iter = 10;

	while (true) {
	    cout << iter << endl;

    	if (iter == 0) {
        	break;
    	}

     	if (iter == 1) {
        	continue;
    	}

    	iter--;
	}

	return 0;
}
```

<details><summary>Отговор</summary>

```
10
9
8
7
6
5
4
3
2
1
(след това безкрайно повтаря 1)
```

Обяснение: при `iter == 1` се изпълнява `continue` преди `iter--`, затова `iter` остава 1 и се отпечатва неограничено.

</details>

**Задача 4**:    Какво ще се отпечата на конзолата?

```c++
#include <iostream>

int main() {
   	for (int i = 0, j = 10; i < 2, j > 1; i++, j -= 2) {
		std::cout << i << " " << j << std::endl;
   	}

   	return 0;
}
```

<details><summary>Отговор</summary>

```
0 10
1 8
2 6
3 4
4 2
```

Забележка: в условието `i < 2, j > 1` оценката връща последната стойност `j > 1`.

</details>


**Задача 5**:	Какво ще се отпечата на конзолата?

```c++
#include <iostream>

int main() {
	int i = 0;

	do {
		std::cout << i << " ";
    	i++;
        
	} while (i < 5, i % 2 == 0);

	std::cout << std::endl;

	return 0;
}
```

<details><summary>Отговор</summary>

```
0 
```

Причина: условието използва оператора `,` и резултатът е `i % 2 == 0` за първата итерация (след `i++` става 1) -> false, цикълът спира.

</details>

**Задача 6**:	Какво ще се отпечата на конзолата?

```c++
do {
	int y = 1;
	std::cout << y++ << " ";
} while (y <= 10);

<details><summary>Отговор</summary>

```
Грешка при компилация: `y` е обявена вътре в блока и не е видима в условието `while (y <= 10)`.
```

</details>
```
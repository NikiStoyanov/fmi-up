## Теоретични въпроси

**Задача.1** Какво ще се отпечата?

```c++
void f(int b) {
   	b++;
   	a += 100;
   	std::cout << (b % 2 == 0) << std::endl;
}
 
int main() {
   	int a = 200, b = 3;
   	f(b);
   	std::cout << a << " " << b << std::endl;
}
```

<details><summary>Отговор</summary>

```
Грешка при компилация: в `f` се използва `a`, но такава променлива не е видима там.
```

Причина: `a` е локална в `main` и не може да се достъпва директно от `f`.

</details>

**Задача.2** Какво ще се отпечата на конзолата?

```c++
#include <iostream>
int a = 100;
int main() {
    {
        int a = 10;
        {
            a += 5;
            ::a += 5;
            int a = 3;
            a += 2;
        }
        std::cout << a << std::endl;
    }
    std::cout << a << std::endl;
}
```

<details><summary>Отговор</summary>

```
15
105
```

</details>

**Задача.3** Какво ще се отпечата?

```c++
void f(double a = 2, double b) {
 
}
 
void print(int a) {
   	std::cout << a;
}
 
void print(double a) {
   	std::cout << a;
}

int main() {
   	double b = 22.2;
   	char c = 'A';
 
   	print(b);
   	print(c);
 
   	f(b);
}
```

<details><summary>Отговор</summary>

```
Грешка при компилация.
```

Причини:
- `void f(double a = 2, double b)` е невалидна декларация (параметър с подразбираща се стойност преди параметър без такава).
- извикването `f(b)` подава само един аргумент.

</details>

**Задача.4** Какво ще се отпечата?

```c++
int num = 10;
int fun(int num) {
	std::cout << ++num << std::endl;
	return num * 3;
}

int main() {
	int num = 10;
	int res = fun(num);
	std::cout << num << " " << res;
}
```

<details><summary>Отговор</summary>

```
11
10 33
```

</details>


**Задача 5:** Опишете последователно какво ще изведе на екрана следният програмен фрагмент. Обосновете отговора си.

```c++
for (int i = 0; i <= 20; i*=2, cout << ++i << " " << endl);
```

<details><summary>Отговор</summary>

```
1 
3 
7 
15 
31 
```

Обяснение: тялото на цикъла е празно (`;`). На всяка итерация в третата част на `for` първо се изпълнява `i *= 2`, после `++i` и се отпечатва.

</details>

**Задача 6:** Напишете еквивалентен код на следния програмен фрагмент, като използвате само оператор switch:

```c++
int a;
if (a == 7) cout << “seven”;
if ( (a == 3) || (a == 5) ) cout << “three and five”;
if (a != 3) cout << “FMI rullz”;
```

<details><summary>Отговор</summary>

```c++
int a;

switch (a) {
    
	case 3:
        cout << "three and five";
        break;
	case 5:
		cout << "three and five";
        cout << "FMI rullz";
		break;
    case 7:
		cout << "seven";
    default:
		cout << "FMI rullz";
		break;
}

```

</details>

**Задача 7:** Напишете еквивалентен код на следния програмен фрагмент, като използвате оператор switch:

```c++
int x, y; 
cin >> x >> y;

if (x == 3 && y == 2)
     cout << "it is ok";
else if (x == 4)
     cout << "not ok";
else cout << "4567";
```

<details><summary>Отговор</summary>

```c++
int x, y;
cin >> x >> y;

switch (x) {
	case 3:
		switch (y) {
			case 2:
				cout << "it is ok";
				break;
			default:
				cout << "4567";
				break;
		}
		break;
	case 4:
		cout << "not ok";
		break;
	default:
		cout << "4567";
		break;
}
```

</details>

**Задача 8:** Забелязвате ли някакъв проблем в следния код? Обяснете защо. Може ли да се подобри нещо в този код?

```C++
double num;
cin >> num;
cout << num%4;
```

<details><summary>Отговор</summary>

```
Има проблем: операторът `%` не работи с `double`.
Кодът няма да се компилира.
```

Ако искаме остатък за цели числа: ползваме `int` и `%`.

</details>
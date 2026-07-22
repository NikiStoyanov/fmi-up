## Теоретични въпроси

**Задача 1:** Какво ще се отпечата на конзолата?
```c++
#include <iostream>

int main() {
	double first = 3.75;
	double second = 5.36;
	int result = first + second;
	std::cout << result << std::endl;
	return 0;
}
```

<details><summary>Отговор</summary>

```
9
```

Първо ще ги събере като double, а след това ще одреже само цялата част.

</details>


**Задача 2:** Какво ще се отпечата на конзолата?
```c++
#include <iostream>

int main() {
	double a = 1.2; 
	double b = 0; 
	int c = 4; 
	std::cout << a / !c << std::endl; 
	std::cout << b / !!false << std::endl;
	std::cout << c / b << std::endl; 
}
```

<details><summary>Отговор</summary>

```
inf
nan
inf
```

(число/0 - inf,  0.0/0 - nan)

</details>

**Задача 3:** Какво ще се отпечата на конзолата?
```c++
#include <iostream>

int main() {
	int a = 10; 
	std::cout << ++++a; 
	std::cout << ++++a++; 
}
```

<details><summary>Отговор</summary>

```
Първият израз отпечатва: 12
Вторият израз води до грешка при компилация (невалидна употреба на ++ върху rvalue).
```

</details>

**Задача 4:** Какво ще отпечата следният код?

```c++
#include <iostream>

int main() {
    int a = 0, b = 10;
	std::cout << (((a || b) && (a || !b)) || !a);
}
```

<details><summary>Отговор</summary>

```
1
```

</details>

**Задача 5:** Какво ще отпечата следният код?

```c++
#include <iostream>
using namespace std;

int main() {
    int a = 5;
    int b = 10;
    double c = 2.2;
    double d = 2.3;
    int s = c + d;
    c = a / b;
    d = 1.0 * a / b;
    int e = d;
    cout << s << endl << c << endl << d << endl << e;
}
```

<details><summary>Отговор</summary>

```
4
0
0.5
0
```

Има загуба на точност при целочисленото деление и при неявното преобразуване към int.

</details>

**Задача 6:** Какво ще отпечата следният код?

```c++
#include <iostream>
using namespace std;

int x = 10;

int main() {
    cout << x << endl;
    int x = 5;
    cout << x++ << endl;
    {
        int x = 15;
        cout << ++x << endl;
    }
    {
        int x = 0;
        x = x++;
        cout << x << endl;
    }
    cout << x << endl;
    return 0;
}
```

<details><summary>Отговор</summary>

```
10
5
16
0
6
```

</details>

**Задача 7:** Какво ще отпечата следният код?

```c++
#include <iostream>

int main()
{
    int a = 0;
    int b = a++;
    std::cout << (a == !b) << std::endl;
    {
        int c = ++a;
        c *= 2;
        std::cout << c << std::endl;
    }
    int sum = a + b + c;
    std::cout << sum << std::endl;
    return 0;
}
```

<details><summary>Отговор</summary>

```
Кодът отпечатва първо: 1
След това: 4
Но след това програмата няма да се компилира, защото `c` е обявена в блок и не е достъпна при `int sum = a + b + c;` (грешка: `c` не е в обхвата).
```

</details>
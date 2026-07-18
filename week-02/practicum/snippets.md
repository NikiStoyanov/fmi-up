## Теоретични въпроси

**Задача 1:** Еквивалентни ли са двете парчета код?


```c++
if (a > 0) if (b > 0) std::cout << 1; else std::cout << 3;
```

```c++
if (a > 0) {
if (b > 0) {
    std::cout << 1;
 }
}
else std::cout << 3;
```

<details><summary>Отговор</summary>

```
Не — не са еквивалентни. В C/C++ else се свързва с най-близкия if.

Първият код работи като:
if (a>0) { if (b>0) cout<<1; else cout<<3; }
```

</details>

**Задача 2:** Какво ще се отпечата на конзолата?

```c++
int num = 25;
int a = 7;
if (++num, num += 2, num > 27) {
	num % 2 == 0 ? num /= 2 : a -= 4;
}
if (num==12, num - 2 * a)  {
	std::cout << num+1;
}
else {
	std::cout << num+2;
}
```

<details><summary>Отговор</summary>

```
16
```

в условните изрази с , се изпълняват всички изрази, но се връща само последната стойност.

Първия if (++num, num += 2, num > 27): ++num → 26, после num+=2 → 28, после num>27 → true ⇒ тялото изпълнява: num става 14.

Втория if (num==12, num - 2 * a): num==12 дава 0 (false) но се игнорира; следва num - 2*a = 14 - 14 = 0 ⇒ условието е false ⇒ се изпълнява else и отпечатва num+2 = 16.


</details>

**Задача 3:** Какво ще се отпечата на конзолата?

```c++
int x = 5;
char ch = 'A';
switch (x % 3) {
case 0:
	std::cout << "Zero\n";
	break;
case 1:
	std::cout << "One\n";
case 2:
	std::cout << "Two\n";
	ch = 'C';
case 3:
	std::cout << "Three\n";
	break;
default:
	std::cout << "Default\n";
}
switch (ch) {
case 'A':
	std::cout << "Character A\n";
	break;
case 'B':
	std::cout << "Character B\n";
	break;
case 'C':
	std::cout << "Character C\n";
default:
	std::cout << "Character Default\n";
}
return 0;
```

<details><summary>Отговор</summary>

```
Two
Three
Character C
Character Default
```

</details>

**Задача 4:** Преобразувайте кода, като използвате switch, вместо if и if else

```c++

unsigned a;
std::cin>>a;
if (a == 2) {
	std::cout << "Two" << std::endl;
}
if (a <= 1) {
	std::cout << "Less" << std::endl;
}
else if (a == 3) {
	std::cout << "Three" << std::endl;
}
else {
	std::cout << "Dont know" << std::endl;
}
```

<details><summary>Възможно решение със `switch`</summary>

```c++
	unsigned a;
	std::cin >> a;
	switch (a) {
	case 0:
	case 1:
		std::cout << "Less" << std::endl;
		break;
	case 3:
		std::cout << "Three" << std::endl;
		break;
	case 2:
		std::cout << "Two" << std::endl;
	default:
		std::cout << "Dont know" << std::endl;
        break;
	}
```

0: Less

1: Less

2: Two, Dont know

3: Three

def: Dont know

---------------

0, 1: Less

3: Three

2: Two, Dont know

def: Dont know

</details>
#include <iostream>
using namespace std;

int factorial(int a)
{
	return a <= 1 ? 1 : a * factorial(a - 1);
}

int power(int num, int pow)
{
	return pow == 0 ? 1 : num * power(num, --pow);
}

int fibonacci(int num)
{
	if (num == 0)
	{
		return 0;
	}
	if (num == 1 || num == 2)
	{
		return 1;
	}
	return fibonacci(num - 1) + fibonacci(num - 2);
}
void fibonacci_value_limited()
{
	cout << "Ряд Фибоначчи до заданного предельного значения" << endl;
	int fibonacci_limit;
	cout << "Введите предельное значение, числа Фибоначчи включительно до числа: "; cin >> fibonacci_limit;
	for (int i = 0; i < INFINITY; i++)
	{
		if (fibonacci(i) > fibonacci_limit)
		{
			break;
		}
		cout << fibonacci(i) << "\t ";
	}
	cout << endl;
}
void fibonacci_set_amount()
{
	cout << "Числа Фибоначчи, заданное количество (в int помещается максимум 47 чисел)" << endl;
	int fibonacci_amount;
	cout << "Введите количество чисел Фибоначчи: "; cin >> fibonacci_amount;
	for (int i = 0; i < fibonacci_amount; i++)
	{
		cout << i + 1 << "-е число: " << fibonacci(i) << endl;
	}
}

void main()
{
	setlocale(LC_ALL, "");
	int fact_num = 5;
	int pow_num = 2;
	int pow = 10;
	cout << fact_num << " ! = " << factorial(fact_num) << endl;
	cout << pow_num << " ^ " << pow << " = " << power(pow_num, pow) << endl;
	fibonacci_value_limited();
	fibonacci_set_amount();
}
#include <iostream>
using namespace std;

int factorial(int a)
{
	return a <= 1 ? 1 : a * factorial(a - 1);
}

double power(int num, int pow)
{
	return pow == 0 ? 1 : pow > 0 ? num * power(num, --pow) : 1 / power(num, -pow);
}

void fibonacci_value_limited(int n, int a = 0, int b = 1)
{
	if (a > n)return;
	cout << a << "\n";
	fibonacci_value_limited(n, b, a + b);
}

void fibonacci_set_amount(int n, int a = 0, int b = 1)
{
	if (n <= 0)return;
	cout << a << "\n";
	n--;
	fibonacci_set_amount(n, b, a + b);
}

void main()
{
	setlocale(LC_ALL, "");
	int fact_num = 5;
	int pow_num = 2;
	int pow = -3;
	cout << fact_num << " ! = " << factorial(fact_num) << endl;
	cout << pow_num << " ^ " << pow << " = " << power(pow_num, pow) << endl;
	int limit;
	cout << "Введите предел ряда Ф: "; cin >> limit;
	fibonacci_value_limited(limit);
	int amount;
	cout << "Введите количество чисел Ф: "; cin >> amount;
	fibonacci_set_amount(amount);
}
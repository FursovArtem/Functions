#include <iostream>
using namespace std;

double calc(int a, char s, int b)
{
	switch (s)
	{
	case '+': return a + b;
	case '-': return a - b;
	case '*': return a * b;
	case '/':
		if (b)
		{
			return double(a) / b;
		}
		throw "Division by zero";
	case '^':
		if (b > 0)
		{
			int power = a;
			for (int i = 1; i < b; i++)
			{
				a *= power;
			}
			return a;
		}
		else if (b < 0)
		{
			int power = a;
			for (int i = -1; i > b; i--)
			{
				a *= power;
			}
			return 1 / (double)a;

		}
		else
		{
			return 1;
		}
	}
}

int factorial(int a)
{
	if (a <= 1)
	{
		return 1;
	}
	else
	{
		return a * factorial(a - 1);
	}
}

void main()
{
	setlocale(LC_ALL, "");
	int a, b;
	char s;
	cout << "Введите выражение: "; cin >> a >> s >> b;
	try
	{
		cout << a << " " << s << " " << b << " = " << calc(a, s, b) << endl;
		//cout << a << " ! = " << factorial(a) << endl;
	}
	catch (const char* error_message)
	{
		cout << error_message << endl;
	}
}
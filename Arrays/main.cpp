#include <iostream>
using namespace std;

void fill_rand(int arr[], const int size)
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 100;
	}
}
void fill_rand(double arr[], const int size)
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 10000;
		arr[i] /= 100;
	}
}
void fill_rand(char arr[], const int size)
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % (93 - 65) + 65;
	}
}

void print(int arr[], const int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}
void print(double arr[], const int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}
void print(char arr[], const int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}

void sort(int arr[], const int size)
{
	for (int i = 0; i < size - 1; i++)
	{
		for (int j = 0; j < size - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				swap(arr[j], arr[j + 1]);
			}
		}
	}
}
void sort(double arr[], const int size)
{
	for (int i = 0; i < size - 1; i++)
	{
		for (int j = 0; j < size - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				swap(arr[j], arr[j + 1]);
			}
		}
	}
}
void sort(char arr[], const int size)
{
	for (int i = 0; i < size - 1; i++)
	{
		for (int j = 0; j < size - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				swap(arr[j], arr[j + 1]);
			}
		}
	}
}

int sum(int arr[], const int size)
{
	int sum = 0;
	for (int i = 0; i < size; i++)
	{
		sum += arr[i];
	}
	return sum;
}
double sum(double arr[], const int size)
{
	double sum = 0;
	for (int i = 0; i < size; i++)
	{
		sum += arr[i];
	}
	return sum;
}
std::string sum(char arr[], const int size)
{
	std::string sum;
	for (int i = 0; i < size; i++)
	{
		sum += arr[i];
	}
	return sum;
}

double avg(int arr[], const int size)
{
	return sum(arr, size) / (double)size;
}
double avg(double arr[], const int size)
{
	return sum(arr, size) / (double)size;
}

int minvalue(int arr[], const int size)
{
	int min = arr[0];
	for (int i = 1; i < size; i++)
	{
		min > arr[i] ? min = arr[i] : NULL;
	}
	return min;
}
double minvalue(double arr[], const int size)
{
	double min = arr[0];
	for (int i = 1; i < size; i++)
	{
		min > arr[i] ? min = arr[i] : NULL;
	}
	return min;
}

int maxvalue(int arr[], const int size)
{
	int max = arr[0];
	for (int i = 1; i < size; i++)
	{
		max < arr[i] ? max = arr[i] : NULL;
	}
	return max;
}
double maxvalue(double arr[], const int size)
{
	double max = arr[0];
	for (int i = 1; i < size; i++)
	{
		max < arr[i] ? max = arr[i] : NULL;
	}
	return max;
}

void shiftleft(int arr[], const int size, int shift)
{
	for (int i = 0; i < shift; i++)
	{
		for (int j = 0; j < size - 1; j++)
		{
			swap(arr[j + 1], arr[j]);
		}
	}
}
void shiftleft(double arr[], const int size, int shift)
{
	for (int i = 0; i < shift; i++)
	{
		for (int j = 0; j < size - 1; j++)
		{
			swap(arr[j + 1], arr[j]);
		}
	}
}
void shiftleft(char arr[], const int size, int shift)
{
	for (int i = 0; i < shift; i++)
	{
		for (int j = 0; j < size - 1; j++)
		{
			swap(arr[j + 1], arr[j]);
		}
	}
}

void shiftright(int arr[], const int size, int shift)
{
	for (int i = 0; i < shift; i++)
	{
		for (int j = size - 1; j > 0; j--)
		{
			swap(arr[j], arr[j - 1]);
		}
	}
}
void shiftright(double arr[], const int size, int shift)
{
	for (int i = 0; i < shift; i++)
	{
		for (int j = size - 1; j > 0; j--)
		{
			swap(arr[j], arr[j - 1]);
		}
	}
}
void shiftright(char arr[], const int size, int shift)
{
	for (int i = 0; i < shift; i++)
	{
		for (int j = size - 1; j > 0; j--)
		{
			swap(arr[j], arr[j - 1]);
		}
	}
}

void main()
{
	setlocale(LC_ALL, "");
	const int size = 10;
	int arr_int[size]{};
	double arr_double[size]{};
	char arr_char[size]{};

	cout << "Инициализация" << endl;
	print(arr_int, size);
	print(arr_double, size);
	print(arr_char, size);
	cout << endl;

	cout << "Заполнение рандомными числами" << endl;
	fill_rand(arr_int, size);
	print(arr_int, size);
	fill_rand(arr_double, size);
	print(arr_double, size);
	fill_rand(arr_char, size);
	print(arr_char, size);
	cout << endl;

	cout << "Сортировка" << endl;
	sort(arr_int, size);
	print(arr_int, size);
	sort(arr_double, size);
	print(arr_double, size);
	sort(arr_char, size);
	print(arr_char, size);
	cout << endl;

	cout << "Сумма элементов int = " << sum(arr_int, size) << endl;
	cout << "Сумма элементов double = " << sum(arr_double, size) << endl;
	cout << "Сумма элементов char = " << sum(arr_char, size) << endl;
	cout << endl;

	cout << "Среднее арифметическое int = " << avg(arr_int, size) << endl;
	cout << "Среднее арифметическое double = " << avg(arr_double, size) << endl;
	cout << endl;

	cout << "Минимальное значение int: " << minvalue(arr_int, size) << endl;
	cout << "Минимальное значение double: " << minvalue(arr_double, size) << endl;
	cout << endl;

	cout << "Максимальное значение int: " << maxvalue(arr_int, size) << endl;
	cout << "Максимальное значение double: " << maxvalue(arr_double, size) << endl;
	cout << endl;

	int sh;
	cout << "Сдвиг int влево на: "; cin >> sh;
	shiftleft(arr_int, size, sh);
	print(arr_int, size);

	cout << "Сдвиг double влево на: "; cin >> sh;
	shiftleft(arr_double, size, sh);
	print(arr_double, size);

	cout << "Сдвиг char влево на: "; cin >> sh;
	shiftleft(arr_char, size, sh);
	print(arr_char, size);
	cout << endl;

	cout << "Сдвиг int вправо на: "; cin >> sh;
	shiftright(arr_int, size, sh);
	print(arr_int, size);
	cout << "Сдвиг double вправо на: "; cin >> sh;
	shiftright(arr_double, size, sh);
	print(arr_double, size);
	cout << "Сдвиг char вправо на: "; cin >> sh;
	shiftright(arr_char, size, sh);
	print(arr_char, size);
	cout << endl;
}
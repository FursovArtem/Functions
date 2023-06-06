#include <iostream>
using namespace std;

void fill_rand(int arr[], const int size)
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 100;
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

int sum(int arr[], const int size)
{
	int sum = 0;
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

int minvalue(int arr[], const int size)
{
	int min = arr[0];
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

void main()
{
	setlocale(LC_ALL, "");
	const int size = 10;
	int arr[size]{};

	cout << "Инициализация" << endl;
	print(arr, size);
	cout << endl;

	cout << "Заполнение рандомными числами" << endl;
	fill_rand(arr, size);
	print(arr, size);
	cout << endl;

	cout << "Сортировка" << endl;
	sort(arr, size);
	print(arr, size);
	cout << endl;

	cout << "Сумма элементов = " << sum(arr, size) << endl;
	cout << "Среднее арифметическое = " << avg(arr, size) << endl;
	cout << "Минимальное значение: " << minvalue(arr, size) << endl;
	cout << "Максимальное значение: " << maxvalue(arr, size) << endl;

	int sh;
	cout << "Сдвиг влево на: "; cin >> sh;
	shiftleft(arr, size, sh);
	print(arr, size);
	cout << endl;

	cout << "Сдвиг вправо на: "; cin >> sh;
	shiftright(arr, size, sh);
	print(arr, size);
	cout << endl;
}
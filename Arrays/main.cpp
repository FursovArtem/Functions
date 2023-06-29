#include <iostream>
using namespace std;

template <typename T>
void fill_rand(T arr[], const int size)
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 1000;
		arr[i] /= 10;
	}
}

template <typename T>
void print(T arr[], const int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}

template <typename T>
void sort(T arr[], const int size)
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

template <typename T>
T sum(T arr[], const int size)
{
	T sum = 0;
	for (int i = 0; i < size; i++)
	{
		sum += arr[i];
	}
	return sum;
}

template <typename T>
double avg(T arr[], const int size)
{
	return sum(arr, size) / (double)size;
}

template <typename T>
T minvalue(T arr[], const int size)
{
	T min = arr[0];
	for (int i = 1; i < size; i++)
	{
		min > arr[i] ? min = arr[i] : NULL;
	}
	return min;
}

template <typename T>
T maxvalue(T arr[], const int size)
{
	T max = arr[0];
	for (int i = 1; i < size; i++)
	{
		max < arr[i] ? max = arr[i] : NULL;
	}
	return max;
}

template <typename T>
void shiftleft(T arr[], const int size, int shift)
{
	for (int i = 0; i < shift; i++)
	{
		for (int j = 0; j < size - 1; j++)
		{
			swap(arr[j + 1], arr[j]);
		}
	}
}

template <typename T>
void shiftright(T arr[], const int size, int shift)
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
	int arr1[size]{};
	double arr2[size]{};
	char arr3[size]{};

	cout << "Инициализация" << endl;
	print(arr1, size);
	print(arr2, size);
	print(arr3, size);
	cout << endl;

	cout << "Заполнение рандомными числами" << endl;
	fill_rand(arr1, size);
	print(arr1, size);
	fill_rand(arr2, size);
	print(arr2, size);
	fill_rand(arr3, size);
	print(arr3, size);
	cout << endl;

	cout << "Сортировка" << endl;
	sort(arr1, size);
	print(arr1, size);
	sort(arr2, size);
	print(arr2, size);
	sort(arr3, size);
	print(arr3, size);
	cout << endl;

	cout << "Сумма элементов int = " << sum(arr1, size) << endl;
	cout << "Сумма элементов double = " << sum(arr2, size) << endl;

	cout << "Среднее арифметическое int = " << avg(arr1, size) << endl;
	cout << "Среднее арифметическое double = " << avg(arr2, size) << endl;

	cout << "Минимальное значение int: " << minvalue(arr1, size) << endl;
	cout << "Минимальное значение double: " << minvalue(arr2, size) << endl;

	cout << "Максимальное значение int: " << maxvalue(arr1, size) << endl;
	cout << "Максимальное значение double: " << maxvalue(arr2, size) << endl;

	int sh;
	cout << "Сдвиг int влево на: "; cin >> sh;
	shiftleft(arr1, size, sh);
	print(arr1, size);
	cout << endl;
	cout << "Сдвиг double влево на: "; cin >> sh;
	shiftleft(arr2, size, sh);
	print(arr2, size);
	cout << endl;
	cout << "Сдвиг char влево на: "; cin >> sh;
	shiftleft(arr3, size, sh);
	print(arr3, size);
	cout << endl;

	cout << "Сдвиг int вправо на: "; cin >> sh;
	shiftright(arr1, size, sh);
	print(arr1, size);
	cout << endl;
	cout << "Сдвиг double вправо на: "; cin >> sh;
	shiftright(arr2, size, sh);
	print(arr2, size);
	cout << endl;
	cout << "Сдвиг char вправо на: "; cin >> sh;
	shiftright(arr3, size, sh);
	print(arr3, size);
	cout << endl;
}
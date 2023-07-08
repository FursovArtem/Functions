#include <iostream>
using namespace std;

const int size_1 = 3, size_2 = 5;

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
		arr[i] = rand() % (93 - 65) + 65; //Английские буквы в верхнем регистре
	}
}
void fill_rand(int arr[size_1][size_2], const int size_1, const int size_2)
{
	for (int i = 0; i < size_1; i++)
	{
		for (int j = 0; j < size_2; j++)
		{
			arr[i][j] = rand() % 100;
		}
	}
}
void fill_rand(double arr[size_1][size_2], const int size_1, const int size_2)
{
	for (int i = 0; i < size_1; i++)
	{
		for (int j = 0; j < size_2; j++)
		{
			arr[i][j] = rand() % 10000;
			arr[i][j] /= 100;
		}
	}
}
void fill_rand(char arr[size_1][size_2], const int size_1, const int size_2)
{
	for (int i = 0; i < size_1; i++)
	{
		for (int j = 0; j < size_2; j++)
		{
			arr[i][j] = rand() % (93 - 65) + 65;
		}
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
void print(int arr[size_1][size_2], const int size_1, const int size_2)
{
	for (int i = 0; i < size_1; i++)
	{
		for (int j = 0; j < size_2; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
	cout << endl;
}
void print(double arr[size_1][size_2], const int size_1, const int size_2)
{
	for (int i = 0; i < size_1; i++)
	{
		for (int j = 0; j < size_2; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
	cout << endl;
}
void print(char arr[size_1][size_2], const int size_1, const int size_2)
{
	for (int i = 0; i < size_1; i++)
	{
		for (int j = 0; j < size_2; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
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
void sort(int arr[size_1][size_2], const int size_1, const int size_2)
{
	for (int i = 0; i < size_1; i++)
	{
		for (int j = 0; j < size_2; j++)
		{
			for (int k = i; k < size_1; k++)
			{
				for (int l = k == i ? j + 1 : 0; l < size_2; l++)
				{
					if (arr[k][l] < arr[i][j])swap(arr[k][l], arr[i][j]);
				}
			}
		}
	}
}
void sort(double arr[size_1][size_2], const int size_1, const int size_2)
{
	for (int i = 0; i < size_1; i++)
	{
		for (int j = 0; j < size_2; j++)
		{
			for (int k = i; k < size_1; k++)
			{
				for (int l = k == i ? j + 1 : 0; l < size_2; l++)
				{
					if (arr[k][l] < arr[i][j])swap(arr[k][l], arr[i][j]);
				}
			}
		}
	}
}
void sort(char arr[size_1][size_2], const int size_1, const int size_2)
{
	for (int i = 0; i < size_1; i++)
	{
		for (int j = 0; j < size_2; j++)
		{
			for (int k = i; k < size_1; k++)
			{
				for (int l = k == i ? j + 1 : 0; l < size_2; l++)
				{
					if (arr[k][l] < arr[i][j])swap(arr[k][l], arr[i][j]);
				}
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
int sum(int arr[size_1][size_2], const int size_1, const int size_2)
{
	int sum = 0;
	for (int i = 0; i < size_1; i++)
	{
		for (int j = 0; j < size_2; j++)
		{
			sum += arr[i][j];
		}
	}
	return sum;
}
double sum(double arr[size_1][size_2], const int size_1, const int size_2)
{
	double sum = 0;
	for (int i = 0; i < size_1; i++)
	{
		for (int j = 0; j < size_2; j++)
		{
			sum += arr[i][j];
		}
	}
	return sum;
}
std::string sum(char arr[size_1][size_2], const int size_1, const int size_2)
{
	std::string sum;
	for (int i = 0; i < size_1; i++)
	{
		for (int j = 0; j < size_2; j++)
		{
			sum += arr[i][j];
		}
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
double avg(int arr[size_1][size_2], const int size_1, const int size_2)
{
	return sum(arr, size_1, size_2) / (double)(size_1 * size_2);
}
double avg(double arr[size_1][size_2], const int size_1, const int size_2)
{
	return sum(arr, size_1, size_2) / (double)(size_1 * size_2);
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
int minvalue(int arr[size_1][size_2], const int size_1, const int size_2)
{
	int min = arr[0][0];
	for (int i = 0; i < size_1; i++)
	{
		for (int j = 0; j < size_2; j++)
		{
			min > arr[i][j] ? min = arr[i][j] : NULL;
		}
	}
	return min;
}
double minvalue(double arr[size_1][size_2], const int size_1, const int size_2)
{
	double min = arr[0][0];
	for (int i = 0; i < size_1; i++)
	{
		for (int j = 0; j < size_2; j++)
		{
			min > arr[i][j] ? min = arr[i][j] : NULL;
		}
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
int maxvalue(int arr[size_1][size_2], const int size_1, const int size_2)
{
	int max = arr[0][0];
	for (int i = 0; i < size_1; i++)
	{
		for (int j = 0; j < size_2; j++)
		{
			max < arr[i][j] ? max = arr[i][j] : NULL;
		}
	}
	return max;
}
double maxvalue(double arr[size_1][size_2], const int size_1, const int size_2)
{
	double max = arr[0][0];
	for (int i = 0; i < size_1; i++)
	{
		for (int j = 0; j < size_2; j++)
		{
			max < arr[i][j] ? max = arr[i][j] : NULL;
		}
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
void shiftleft(int arr[size_1][size_2], const int size_1, const int size_2, int shift)
{
	for (int i = 0; i < shift; i++)
	{
		for (int j = 0; j < size_1; j++)
		{
			for (int k = 0; k < size_2 - 1; k++)
			{
				swap(arr[j][k], arr[j][k + 1]);
			}
		}
	}
}
void shiftleft(double arr[size_1][size_2], const int size_1, const int size_2, int shift)
{
	for (int i = 0; i < shift; i++)
	{
		for (int j = 0; j < size_1; j++)
		{
			for (int k = 0; k < size_2 - 1; k++)
			{
				swap(arr[j][k], arr[j][k + 1]);
			}
		}
	}
}
void shiftleft(char arr[size_1][size_2], const int size_1, const int size_2, int shift)
{
	for (int i = 0; i < shift; i++)
	{
		for (int j = 0; j < size_1; j++)
		{
			for (int k = 0; k < size_2 - 1; k++)
			{
				swap(arr[j][k], arr[j][k + 1]);
			}
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
void shiftright(int arr[size_1][size_2], const int size_1, const int size_2, int shift)
{
	for (int i = 0; i < shift; i++)
	{
		for (int j = size_1 - 1; j >= 0; j--)
		{
			for (int k = size_2 - 2; k >= 0; k--)
			{
				swap(arr[j][k], arr[j][k + 1]);
			}
		}
	}
}
void shiftright(double arr[size_1][size_2], const int size_1, const int size_2, int shift)
{
	for (int i = 0; i < shift; i++)
	{
		for (int j = size_1 - 1; j >= 0; j--)
		{
			for (int k = size_2 - 2; k >= 0; k--)
			{
				swap(arr[j][k], arr[j][k + 1]);
			}
		}
	}
}
void shiftright(char arr[size_1][size_2], const int size_1, const int size_2, int shift)
{
	for (int i = 0; i < shift; i++)
	{
		for (int j = size_1 - 1; j >= 0; j--)
		{
			for (int k = size_2 - 2; k >= 0; k--)
			{
				swap(arr[j][k], arr[j][k + 1]);
			}
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
	int arr_int_2d[size_1][size_2]{};
	double arr_double_2d[size_1][size_2]{};
	char arr_char_2d[size_1][size_2]{};

	cout << "Инициализация" << endl;
	cout << "Одномерные массивы" << endl;
	print(arr_int, size);
	print(arr_double, size);
	print(arr_char, size);
	cout << "Двумерные массивы" << endl;
	print(arr_int_2d, size_1, size_2);
	print(arr_double_2d, size_1, size_2);
	print(arr_char_2d, size_1, size_2);
	cout << endl;

	cout << "Заполнение рандомными числами" << endl;
	cout << "Одномерные массивы" << endl;
	fill_rand(arr_int, size);
	print(arr_int, size);
	fill_rand(arr_double, size);
	print(arr_double, size);
	fill_rand(arr_char, size);
	print(arr_char, size);
	cout << "Двумерные массивы" << endl;
	fill_rand(arr_int_2d, size_1, size_2);
	print(arr_int_2d, size_1, size_2);
	fill_rand(arr_double_2d, size_1, size_2);
	print(arr_double_2d, size_1, size_2);
	fill_rand(arr_char_2d, size_1, size_2);
	print(arr_char_2d, size_1, size_2);
	cout << endl;

	cout << "Сортировка" << endl;
	cout << "Одномерные массивы" << endl;
	sort(arr_int, size);
	print(arr_int, size);
	sort(arr_double, size);
	print(arr_double, size);
	sort(arr_char, size);
	print(arr_char, size);
	cout << "Двумерные массивы" << endl;
	sort(arr_int_2d, size_1, size_2);
	print(arr_int_2d, size_1, size_2);
	sort(arr_double_2d, size_1, size_2);
	print(arr_double_2d, size_1, size_2);
	sort(arr_char_2d, size_1, size_2);
	print(arr_char_2d, size_1, size_2);
	cout << endl;

	cout << "Сумма элементов int = " << sum(arr_int, size) << endl;
	cout << "Сумма элементов double = " << sum(arr_double, size) << endl;
	cout << "Сумма элементов char = " << sum(arr_char, size) << endl;
	cout << "Сумма элементов int_2d = " << sum(arr_int_2d, size_1, size_2) << endl;
	cout << "Сумма элементов double_2d = " << sum(arr_double_2d, size_1, size_2) << endl;
	cout << "Сумма элементов char_2d = " << sum(arr_char_2d, size_1, size_2) << endl;
	cout << endl;

	cout << "Среднее арифметическое int = " << avg(arr_int, size) << endl;
	cout << "Среднее арифметическое double = " << avg(arr_double, size) << endl;
	cout << "Среднее арифметическое int_2d = " << avg(arr_int_2d, size_1, size_2) << endl;
	cout << "Среднее арифметическое double_2d = " << avg(arr_double_2d, size_1, size_2) << endl;
	cout << endl;

	cout << "Минимальное значение int: " << minvalue(arr_int, size) << endl;
	cout << "Минимальное значение double: " << minvalue(arr_double, size) << endl;
	cout << "Минимальное значение int_2d: " << minvalue(arr_int_2d, size_1, size_2) << endl;
	cout << "Минимальное значение double_2d: " << minvalue(arr_double_2d, size_1, size_2) << endl;
	cout << endl;

	cout << "Максимальное значение int: " << maxvalue(arr_int, size) << endl;
	cout << "Максимальное значение double: " << maxvalue(arr_double, size) << endl;
	cout << "Максимальное значение int_2d: " << maxvalue(arr_int_2d, size_1, size_2) << endl;
	cout << "Максимальное значение double_2d: " << maxvalue(arr_double_2d, size_1, size_2) << endl;
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
	cout << "Сдвиг int_2d влево на: "; cin >> sh;
	shiftleft(arr_int_2d, size_1, size_2, sh);
	print(arr_int_2d, size_1, size_2);
	cout << "Сдвиг double_2d влево на: "; cin >> sh;
	shiftleft(arr_double_2d, size_1, size_2, sh);
	print(arr_double_2d, size_1, size_2);
	cout << "Сдвиг char_2d влево на: "; cin >> sh;
	shiftleft(arr_char_2d, size_1, size_2, sh);
	print(arr_char_2d, size_1, size_2);
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
	cout << "Сдвиг int_2d вправо на: "; cin >> sh;
	shiftright(arr_int_2d, size_1, size_2, sh);
	print(arr_int_2d, size_1, size_2);
	cout << "Сдвиг double_2d вправо на: "; cin >> sh;
	shiftright(arr_double_2d, size_1, size_2, sh);
	print(arr_double_2d, size_1, size_2);
	cout << "Сдвиг char_2d вправо на: "; cin >> sh;
	shiftright(arr_char_2d, size_1, size_2, sh);
	print(arr_char_2d, size_1, size_2);
	cout << endl;
}
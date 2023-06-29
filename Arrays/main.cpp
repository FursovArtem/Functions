#include "stdafx.h"
#include "constants.h"
#include "fill_rand.h"
#include "print.h"
#include "sort.h"
#include "statistics.h"
#include "shifts.h"

/*void main()
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
}*/
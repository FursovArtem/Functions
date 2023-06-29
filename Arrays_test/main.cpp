#include <functions.h>

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
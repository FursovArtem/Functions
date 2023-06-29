#include <functions.h>

void main()
{
	setlocale(LC_ALL, "");
	const int size = 10;
	int arr1[size]{};
	double arr2[size]{};
	char arr3[size]{};

	cout << "�������������" << endl;
	print(arr1, size);
	print(arr2, size);
	print(arr3, size);
	cout << endl;

	cout << "���������� ���������� �������" << endl;
	fill_rand(arr1, size);
	print(arr1, size);
	fill_rand(arr2, size);
	print(arr2, size);
	fill_rand(arr3, size);
	print(arr3, size);
	cout << endl;

	cout << "����������" << endl;
	sort(arr1, size);
	print(arr1, size);
	sort(arr2, size);
	print(arr2, size);
	sort(arr3, size);
	print(arr3, size);
	cout << endl;

	cout << "����� ��������� int = " << sum(arr1, size) << endl;
	cout << "����� ��������� double = " << sum(arr2, size) << endl;

	cout << "������� �������������� int = " << avg(arr1, size) << endl;
	cout << "������� �������������� double = " << avg(arr2, size) << endl;

	cout << "����������� �������� int: " << minvalue(arr1, size) << endl;
	cout << "����������� �������� double: " << minvalue(arr2, size) << endl;

	cout << "������������ �������� int: " << maxvalue(arr1, size) << endl;
	cout << "������������ �������� double: " << maxvalue(arr2, size) << endl;

	int sh;
	cout << "����� int ����� ��: "; cin >> sh;
	shiftleft(arr1, size, sh);
	print(arr1, size);
	cout << endl;
	cout << "����� double ����� ��: "; cin >> sh;
	shiftleft(arr2, size, sh);
	print(arr2, size);
	cout << endl;
	cout << "����� char ����� ��: "; cin >> sh;
	shiftleft(arr3, size, sh);
	print(arr3, size);
	cout << endl;

	cout << "����� int ������ ��: "; cin >> sh;
	shiftright(arr1, size, sh);
	print(arr1, size);
	cout << endl;
	cout << "����� double ������ ��: "; cin >> sh;
	shiftright(arr2, size, sh);
	print(arr2, size);
	cout << endl;
	cout << "����� char ������ ��: "; cin >> sh;
	shiftright(arr3, size, sh);
	print(arr3, size);
	cout << endl;
}
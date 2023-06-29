#include "print.h"

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
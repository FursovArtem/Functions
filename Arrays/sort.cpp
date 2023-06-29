#include "sort.h"

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
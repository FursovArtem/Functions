#include "shifts.h"

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
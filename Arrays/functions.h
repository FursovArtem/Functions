#pragma once
#include "pch.h"

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
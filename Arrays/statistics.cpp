#include "statistics.h"

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
#include "fill_rand.h"

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
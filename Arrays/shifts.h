#pragma once
#include "stdafx.h"
#include "constants.h"

void shiftleft(int arr[], const int size, int shift);
void shiftleft(double arr[], const int size, int shift);
void shiftleft(char arr[], const int size, int shift);
void shiftleft(int arr[size_1][size_2], const int size_1, const int size_2, int shift);
void shiftleft(double arr[size_1][size_2], const int size_1, const int size_2, int shift);
void shiftleft(char arr[size_1][size_2], const int size_1, const int size_2, int shift);

void shiftright(int arr[], const int size, int shift);
void shiftright(double arr[], const int size, int shift);
void shiftright(char arr[], const int size, int shift);
void shiftright(int arr[size_1][size_2], const int size_1, const int size_2, int shift);
void shiftright(double arr[size_1][size_2], const int size_1, const int size_2, int shift);
void shiftright(char arr[size_1][size_2], const int size_1, const int size_2, int shift);
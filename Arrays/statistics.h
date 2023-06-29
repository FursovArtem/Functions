#pragma once
#include "stdafx.h"
#include "constants.h"

int sum(int arr[], const int size);
double sum(double arr[], const int size);
std::string sum(char arr[], const int size);
int sum(int arr[size_1][size_2], const int size_1, const int size_2);
double sum(double arr[size_1][size_2], const int size_1, const int size_2);
std::string sum(char arr[size_1][size_2], const int size_1, const int size_2);

double avg(int arr[], const int size);
double avg(double arr[], const int size);
double avg(int arr[size_1][size_2], const int size_1, const int size_2);
double avg(double arr[size_1][size_2], const int size_1, const int size_2);

int minvalue(int arr[], const int size);
double minvalue(double arr[], const int size);
int minvalue(int arr[size_1][size_2], const int size_1, const int size_2);
double minvalue(double arr[size_1][size_2], const int size_1, const int size_2);

int maxvalue(int arr[], const int size);
double maxvalue(double arr[], const int size);
int maxvalue(int arr[size_1][size_2], const int size_1, const int size_2);
double maxvalue(double arr[size_1][size_2], const int size_1, const int size_2);
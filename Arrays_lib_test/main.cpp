#include <fill_rand.h>
#include <print.h>
#include <statistics.h>

void main()
{
	setlocale(LC_ALL, "");
	const int n = 5;
	int arr[n];
	fill_rand(arr, n);
	print(arr, n);
	cout << sum(arr, n);
}
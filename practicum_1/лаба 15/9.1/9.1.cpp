#include <iostream>

using namespace std;

void main()
{
	srand(time(NULL));
	setlocale(LC_ALL, "rus");
	int n;
	cout << "введите n :\t ";
	cin >> n;
	int* A = (int*)malloc(n * sizeof(int));

	int product = 1;
	cout <<endl<< "Массив :" << endl;
	for (int i = 0; i < n; i++)
	{
		A[i] = rand() % 20 - 10;
		cout << A[i] << ' ';
		if (A[i] > 0)
		{
			product = product * A[i];
		}
	}

	int indexMin = 0;
	int min = A[0];
	for (int i = 0; i < n; i++)
	{
		if (min > A[i])
		{
			min = A[i];
			indexMin = i;
		}
	}

	int sum=0;
	for (int i = 0; i < indexMin; i++)
	{
		sum = sum + A[i];
	}

	cout << "произведение положительных элементов :\t" << product << endl;
	cout << "суммa элементов массива, расположенных до минимального элементa :\t" << sum;
}
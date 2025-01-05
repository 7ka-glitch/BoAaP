#include<iostream>
using namespace std;
void main()
{
	setlocale(LC_ALL, "rus");
	srand(time(NULL));
	int n, a = 0, b = -1, j = 1, big = 0;
	cout << "Введите размер массива" << endl;
	cin >> n;
	int* C = new int[n];
	int* A = new int[n];
	for (int i = 0; i < n; i++)
	{
		C[i] = rand() % 10;
		cout << j << " элемент массива: " << C[i] << endl;
		j++;
	}
	j = 0;
	for (int i = 0; i < n; i++)
	{
		j++;
		if (C[i] == C[j])
		{
			a++;
			A[i] = a;
		}
		else
		{
			a = 0;
		}
	}
	for (int i = 0; i < n; i++)
	{
		if (big < A[i])
		{
			big = A[i];
		}
	}
	big++;
	cout << "Наибольшее число подряд идущих элементов " << big << endl;
}
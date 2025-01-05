#include <iostream>

using namespace std;

void main()
{
	srand(time(NULL));
	setlocale(LC_ALL, "rus");
	int n,container;
	cout << "введите n :\t";
	cin >> n;
 	int** array = new int* [2*n];

	for (int i = 0; i < 2 * n; i++)
		array[i] = new int[2 * n];


	cout << endl << "Матрица 2n :\t";
	for (int i = 0; i < 2 * n; i++)
	{
		cout << endl << '\t';
		for (int j = 0; j < 2 * n; j++)
		{
			array[i][j] = rand() % 21 - 10;
			if (array[i][j] > 0)
				cout << ' ' << array[i][j] << ' ';
			else
				cout << array[i][j] << ' ';
		}
	}

	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
		{
			container = array[i][j];
			array[i][j] = array[i + n][j + n];
			array[i + n][j + n] = container;

			container = array[i][j + n];
			array[i][j + n] = array[i + n][j];
			array[i + n][j] = container;
		}

	cout << endl << "Перевернутая матрица 2n :\t";
	for (int i = 0; i < 2 * n; i++)
	{
		cout << endl << '\t';
		for (int j = 0; j < 2 * n; j++)
		{
			if (array[i][j] > 0)
				cout << ' ' << array[i][j] << ' ';
			else
				cout << array[i][j] << ' ';
		}
	}
}
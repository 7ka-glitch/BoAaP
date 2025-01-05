#include <iostream>

using namespace std;

void main()
{
	setlocale(LC_ALL, "rus");
	srand(time(NULL));
	int n, m;
	cout << "введите n для матрицы nxm : \t";
	cin >> n;
	cout << "введите m для матрицы nxm :\t";
	cin >> m;

	int** array = new int* [n];
	for (int i = 0; i < n; i++)
	{
		array[i] = new int[m];
	}


	cout << "Матрица nxm:" << endl;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			*(*(array + i) + j) = rand() % 30-10;
			cout << *(array[i] + j) << " ";
		}
		cout << endl;
	}

	bool y = false;
	int sum = 0,sumTrue=0;
	int string = 0;
	int a=0;
	for (int i = 0; i < n; i++)
	{
		sum = 0;
		a = 0;
		if (y)
			break;
		for (int j = 0; j < m; j++)
		{
			if (array[i][j] > 0)
			{
				a++;
				sum = sum + array[i][j];
				if (a == m)
				{
					sumTrue = sum;
					string = i+1;
					y = true;
				}
			}
		}
	}
	if (string == 0)
		cout << "такой строки нет" << endl;
	else
	{
		cout << "первая строкa, все элементы которой положительны :\t" << string << endl;
		cout << "сумма этой строки :\t" << sumTrue << endl;
	}


	cout << "Уменьшенная матрица :\t" << endl;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			array[i][j] = array[i][j] - sumTrue;
			cout << array[i][j] << ' ';
		}
		cout << endl;
	}
}
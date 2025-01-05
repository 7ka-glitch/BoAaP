#include <iostream>

using namespace std;

void main()
{
	setlocale(LC_ALL, "rus");
	int const n = 5, m = 2;
	int A[n][m] =
	{
		{1,2},{2,-3},{5,2},{-4,4},{-2,-3}
	};
	cout << "Матрица :" << endl;
	for (int i = 0; i < n; i++)
	{
		cout << endl << '\t';
		for (int j = 0; j < m; j++)	
		{
			cout << *(*(A+i)+j)<<' ';
		}
	}
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			if (*(*(A + i) + j) < 0)
			{
				cout << endl << "номер строки с отрицательным элементом =\t" << i + 1 << endl;
				for (int k = 0; k < m; k++)
					*(*(A + i - 1) + k) = *(*(A + i - 1) + k) * -1;
			}
	cout <<endl<< "Новая матрица :\t" << endl;
	for(int i = 0; i < n; i++)
	{
		cout << endl << '\t';
		for (int j = 0; j < m; j++)
		{
			cout << *(*(A + i) + j) << ' ';
		}
	}
	
}
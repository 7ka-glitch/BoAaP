#include <iostream>

using namespace std;

void main()
{
	srand(time(NULL));
	int n, m, sum = 0, product = 1;
	setlocale(LC_ALL, "rus");
	cout << "ввдите n ";
	cin >> n;
	cout << "ввдите m ";
	cin >> m;
	int** A = new int* [n];
	for (int i = 0; i < n; i++)
	

	cout << "Матрица :";
	for (int i = 0; i < n; i++)
	{
		cout << endl;
		cout << "\t";
		for (int j = 0; j < m; j++)
		{
			A[i][j] = rand() % 11;
			cout << " " << A[i][j];
			if ((A[i][j] / 2) % 2 != 0)
			{
				sum = sum + A[i][j];
				product = product * A[i][j];
			}
		}
	}
	cout << endl;
	cout << "Сумма = \t" <<sum<< endl;
	cout << "Произведение = \t" << product<< endl;

}
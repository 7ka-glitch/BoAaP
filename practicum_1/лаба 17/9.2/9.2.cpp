#include <iostream>

using namespace std;

void multiplicationMatrix(int** matrix,int *matrix2, int *B, int n, int m)
{
	for (int i = 0; i < n; i++)
	{matrix2[i] = 0;
			for (int k = 0; k < m; k++)
			{	
				matrix2[i] += matrix[i][k] * B[k];
			}
	}
}

bool checking(int** matrix,int *B, int n, int m)
{
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			if (matrix[i][j] > 0)
				return false;
	for (int i = 0; i < m; i++)
		if (B[i] > 0)
			return false;
	return true;
}

void main()
{
	srand(time(NULL));
	setlocale(LC_ALL, "rus");
	int n, m;
	cout << "введите n :\t" << endl;
	cin >> n;
	cout << "введите m :\t" << endl;
	cin >> m;

	int* matrix2 = new int [n];
		
	int** matrix = new int*[n];
	for (int i = 0; i < n; i++)
		matrix[i] = new int[m];
	cout << "Матрица :\t" << endl;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			matrix[i][j] = rand() % 20 - 30;
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}

	cout << "вектор В :" << endl;
	int* B = new int[n];
	for (int i = 0; i < m; i++)
	{
		B[i]= rand() % 20 - 30;
		cout << B[i] << endl;
	}

	if (checking(matrix, B, n,m))
		multiplicationMatrix(matrix,matrix2,B, n, m);

	cout << endl << "Результат :\t" << endl;
	for (int i = 0; i < n; i++)
	{
			cout << matrix2[i] << ' ';
		
		cout << endl;
	}
	
}
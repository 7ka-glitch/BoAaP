#include <iostream>

using namespace std;

void multiplicationMatrix(int** matrix1, int** matrix2, int** matrix3, int n, int m)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			matrix3[i][j] = 0;
			for (int k = 0; k < m; k++)
			{
				matrix3[i][j] += matrix1[i][k] * matrix2[k][j];
			}
		}
	}
}

bool checking(int **matrix, int row, int col)
{	
	for (int i = 0; i < row; i++)
		for (int j = 0; j < col; j++)
			if (matrix[i][j] == 0)
				return false;
	return true;
}

void main()
{
	srand(time(NULL));
	setlocale(LC_ALL, "rus");
	int n, m;
	cout << "Введите n :\t";
	cin >> n;
	cout << "Введите m :\t";
	cin >> m;


	int** matrix1 = new int* [n];
	int** matrix2 = new int* [m]; 
	int** matrix3 = new int* [n];
	for (int i = 0; i < n; i++)
		matrix1[i] = new int[m];
	for (int i = 0; i < m; i++)
		matrix2[i] = new int[n];
	for (int i = 0; i < n; i++)
		matrix3[i] = new int[n];


	cout << "Первая матрица:\t" << endl;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			matrix1[i][j] = rand() % 10+1;
			cout << matrix1[i][j] << " ";
		}
		cout << endl;
	}

	cout << "Вторая матрица:\t" << endl;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			matrix2[i][j] = matrix1[j][i];
			cout << matrix2[i][j] << " ";
		}
		cout << endl;
	}

	if (checking(matrix1, n, m))
		multiplicationMatrix(matrix1,matrix2,matrix3,n,m);

	cout << "Результат :\t" << endl;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << matrix3[i][j] << " ";
		}
		cout << endl;
	}


	for (int i = 0; i < n; i++)
		delete[] matrix1[i];
	delete[] matrix1;
	for (int i = 0; i < m; i++)
		delete[] matrix2[i];
	delete[] matrix2;
	for (int i = 0; i < n; i++)
		delete[] matrix3[i];
	delete[] matrix3;
}
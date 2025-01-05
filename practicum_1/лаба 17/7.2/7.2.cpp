#include <iostream>

using namespace std;

void findSA(int** matrix, int N, int M)
{
	int sa = 0, ch = 0;
	float saTrue=0;
	for (int i = 0; i < M; i++)
	{
		sa = 0;
		ch = 0;
		for (int j = 0; j < N; j++)
		{
			if (matrix[j][i] < 0)
			{
				ch++;
				sa = matrix[j][i] + sa;
			}

			if (ch == N)
			{
				saTrue = sa;
			}
		}
	}
	saTrue = saTrue / N;

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			matrix[i][j] = matrix[i][j] - saTrue;
		}
	}
}

void main()
{
	int const N = 4, M = 4;
	setlocale(LC_ALL, "rus");
	srand(time(NULL));
	int **matrix = new int*[N];
	for (int i = 0; i < N; i++)
		matrix[i] = new int [M];

	cout << "Mатрица :" << endl;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			matrix[i][j] = rand() % 20 - 10;
			cout << matrix[i][j] << ' ';
		}
		cout << endl;
	}

	findSA(matrix, N, M);

	cout << endl << "Новая матрица :" << endl;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			cout << matrix[i][j] << ' ';
		}
		cout << endl;
	}

	for (int i = 0; i < N; i++)
		delete[] matrix[i];
	delete[] matrix;
}
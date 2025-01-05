#include <iostream>

using namespace std;

void negativeEl(int** matrix,int N,int M)
{

	for (int i = 0; i < N; i++) {
		bool hasNegative = false;
		int rowSum = 0;

		for (int j = 0; j < M; j++) {
			if (matrix[i][j] < 0) {
				hasNegative = true;
				rowSum = 0;
				break; 
			}
			rowSum += matrix[i][j]; 
		}
		
		if (!hasNegative) {
			cout <<endl<< "Сумма элементов " << i + 1 << " строки :" << rowSum << endl;
		}
	}

	
}

void main()
{
	int const N = 4, M = 4;
	setlocale(LC_ALL, "rus");
	srand(time(NULL));
	int** matrix = new int* [N];
	for (int i = 0; i < N; i++)
		matrix[i] = new int[M];

	cout << "Mатрица :" << endl;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			matrix[i][j] = rand() % 20 - 5;
			cout << matrix[i][j] << ' ';
		}
		cout << endl;
	}

	negativeEl(matrix, N, M);

	for (int i = 0; i < N; i++)
		delete[] matrix[i];
	delete[] matrix;
}
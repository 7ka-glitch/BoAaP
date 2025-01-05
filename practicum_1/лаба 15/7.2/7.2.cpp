#include <iostream>

using namespace std;

bool runMatrix(int number, int n, int m, int skipRow, int skipCol, int** array)
{
	for (int k = 0; k < n; k++) {
		for (int l = 0; l < m; l++) {
			if (k == skipRow && l == skipCol) {
				continue; 
			}
			if (number == array[k][l]) {
				return true; 
			}
		}
	}
	return false;
}

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
			*(*(array + i) + j) = rand() % 10;
			cout << *(array[i] + j) << " ";
		}
		cout << endl;
	}

	int a = n;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
		{
			if (array[i][j] == 0)
			{
				a--; 
				break;
			}
		}

	int max = 0;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
		{
			if (max < array[i][j] and runMatrix(array[i][j],n,m,i,j,array))
				max = array[i][j];
		}

	cout << "количество строк, не содержащих ни одного нулевого элемента :\t" << a << endl;
	cout << "максимальное из чисел, встречающихся в заданной матрице более одного раза :\t" << max;
}
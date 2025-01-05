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

	int **array = new int*[n];
	for (int i = 0; i < n; i++)
	{
		array[i] = new int[m];
	}


	cout << "Матрица nxm :" << endl;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{	
			*(*(array+i)+j) = rand() % 10;
			cout << *(array[i]+j) << " ";
		}
		cout << endl;
	}


		int a = 0;
	for (int j = 0; j <m; j++)
		for (int i = 0; i < n; i++)
		{
			if (array[i][j] == 0)
			{
				a++; break;
			}
		}
	

	int indexMax = 1;
	int output=1;
	for (int i = 0; i < n; i++)
	{	
		int max = 1;
		for (int j = 0; j < m; j++)
		{
			if (array[i][j] == array[i][j + 1])
			{
				max++;
				if (indexMax < max)
				{
					indexMax = max;
					output = i+1;
				}
			}
			else
			{
				max = 1;
			}
		}
	}
	cout << "количество столбцов, содержащих хотя бы один нулевой элемент :\t"<<a<<endl;
	cout <<"номер строки, в которой находится самая длинная серия одинаковых элементов :\t"<< output;
}
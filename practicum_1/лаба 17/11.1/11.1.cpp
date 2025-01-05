#include <iostream>

using namespace std;

void kolNegative(int *array,int n,int *kol)
{
	for (int i = 0; i < n; i++)
		if (array[i]%2!=0)
			(*kol)++;
}

void crossout(int* arrayTrue,int *array, int iterations)
{
	int a=0;
	for (int i = 0; i < iterations; i++)
		if (array[i] % 2 == 0)
		{
			arrayTrue[a] = array[i];
			a++;
		}
}

void main()
{
	srand(time(NULL));
	setlocale(LC_ALL, "rus");
	int n;
	int kol=0;
	cout << "введите размер массива :\t";
	cin >> n;
	int* array = new int[n];

	cout << "Массив :\t";
	for (int i = 0; i < n; i++)
	{
		array[i] = rand() % 10;
		cout << array[i] << " ";
	}

	kolNegative(array, n, &kol);

	int* arrayTrue = new int  [kol];

	crossout(arrayTrue,array, n);

	cout << endl<<"Результат :\t";
	for (int i = 0; i < n-kol; i++)
	{
		cout<<arrayTrue[i]<<" ";
	}
}
#include<iostream>
using namespace std;
void main()
{
	setlocale(LC_ALL, "rus");
	srand(time(NULL));
	int k,n,*pk=&k;
	cout << "введите n" << endl;
	cin >> n;
	cout << "введите k" << endl;
	cin >> k;
	int* A = new int[n];
	cout << "Массив: ";

	for (int i = 0; i < n; i++)
	{
		*(A + i) = rand() % 11;
		cout << *(A + i) << "  ";
	}

	cout << endl;
	cout << "номера элементов массива которые равны k: ";
	for (int i = 0,a=1; i < n; i++,a++)
	{
		if (*(A + i) == *pk)
		{
			cout << ++i << " ";
		}
		
	}

	cout << endl;
	cout << "номера элементов массива которые больше k: ";
	for (int i = 0,a=1; i < n; i++,a++)
	{
		if (*(A + i) > *pk)
			cout  << a<<" ";
		
	}

	cout << endl;
	cout << "номера элементов массива которые меньше k: ";
	for (int i = 0,a=1; i < n; i++,a++)
	{
		if (*(A + i) < *pk)
			cout  << a<<" ";
		
	}
}
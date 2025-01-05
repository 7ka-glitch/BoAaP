#include <iostream>

using namespace std;

void main()
{
	setlocale(LC_ALL, "rus");
	srand(time(NULL));
	int n, * array, kolZero = 0;
	cout << "введите количество элементов массива:\t";
	cin >> n;
	array = (int*)malloc(n * sizeof(int));

	cout << "Массив:" << endl;
	for (int i = 0; i < n; i++)
	{
		*(array + i) = rand() % 10;
		cout << *(array + i) << " ";
		if (*(array + i) == 0)
			kolZero++;
	}

	int min =*(array+0),sum=0,index=0 ;
	for (int i = 0; i < n; i++)
	{
		if (min > *(array + i))
		{
			min = *(array + i);
			index = i;
		}
	}

	++index;
	for (int i = index; i < n; i++)
	{
		sum = sum + *(array + i);
	}

	cout << "количество элементов массива, равных 0 :\t" << kolZero<<endl;
	cout << "суммa элементов массива, расположённых после минимального элемента :\t" << sum << endl;
}
#include <iostream>

using namespace std;

void sumArray(int *psum,int *array,int const*SIZE)
{
	for (int i = 0; i < *SIZE; i++)
		if (array[i] % 2 == 0)
			*psum = *psum + array[i];
}

void main()
{
	setlocale(LC_ALL, "rus");
	srand(time(NULL));
	const int SIZE = 15;
	int* array = new int[SIZE];

	cout << "Массив :\t" << endl;
	for (int i = 0; i < SIZE; i++)
	{
		array[i] = rand() % 10;
		cout << array[i]<<" ";
	}
	

	int sum = 0;
	sumArray(&sum,array,&SIZE);
	cout << endl<<"Сумма всех четных элементов массива :\t"<<sum << endl;
}
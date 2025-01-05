#include <iostream>

using namespace std;

void multiplication(int *array,int const SIZE,long long int *result)
{

	for (int i = 2; i <= 7; i++)
		*result = *result * array[i];
}

void main()
{
	int const SIZE = 15;
	long long int result=1;
	setlocale(LC_ALL, "rus");
	srand(time(NULL));
	int* array = new int[SIZE];
	cout << "Массив :" << endl;
	for (int i = 0; i < SIZE; i++)
	{
		array[i] = rand() % 11 + 1;
		cout << array[i] << " ";
	}

	multiplication(array,SIZE,&result);

	delete[] array;

	cout <<endl<< "Результат :\t" << result;
}
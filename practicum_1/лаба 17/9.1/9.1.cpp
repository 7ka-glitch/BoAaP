#include <iostream>

using namespace std;

void multiplication(int *array, int SIZE,int *multi)
{
	
	for (int i = 0; i < SIZE; i++)
	{
		if (*(array+i)< 50)
			*multi = *multi * *(array+i);
	}
}

void main()
{
	setlocale(LC_ALL, "rus");
	int const SIZE = 15;
	int* array = new int[SIZE];
	int multi = 1;
	int* pmulti = &multi;

	cout << "Массив :" << endl;
	for (int i = 0; i < SIZE; i++)
	{
		array[i] = rand() % 200 + 1;
		cout << array[i] << " ";
	}

	multiplication(array, SIZE,pmulti);

	cout << endl << "произведение :\t" << multi;

}
#include<iostream>
using namespace std;
void main()
{
	setlocale(LC_ALL, "rus");
	int const N = 5;
	int A[N], B[N],min=2147483647;
	bool y=false;
	for (int i = 0,a=1; i < N; i++,a++)
	{
		cout << "введите " << a << " элемент массива А\t" ;
		cin >> *(A + i);
	}
	for (int i = 0, a = 1; i < N; i++,a++)
	{
		cout << "введите " << a << " элемент массива B\t";
		cin >> *(B + i);
	}
	for (int i = 0; i < N; i++)
	{
		if (*(A + i) < min)
			min = *(A + i);
	}
	for (int i = 0; i < N; i++)
	{
		if (*(B + i) == min)
		{
			y = true;
		}
	}
	if (y)
	{
		cout << "наименьший элемент массива А содержится в массиве B" << endl;
	}
	else
	{
		cout << "наименьший элемент массива А не содержится в массиве B" << endl;
	}
}
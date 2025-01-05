#include<iostream>
using namespace std;
void main()
{
	setlocale(LC_ALL,"rus");
	int const N = 10;
	int A[N], B[N],z,a=0,b=0;
	cout << "введите значение z" << endl;
	cin >> z;
	for (int i = 0,x=1; i < N;x++, i++)
	{
		cout << "введите "<<x<<" элемент 1 массива \t" ;
		cin >> *(A+i);
		if (*(A + i) < z)
			a++;
	}
	for (int i = 0, x=1; i < N; x++, i++)
	{
		cout << "введите " << x << " элемент 2 массива \t"  ;
		cin >> *(B + i);
		if (*(B + i) < z)
			b++;
	}
	if (a < b)
	{
		cout << "первый массив : ";
		for (int i = 0; i < N; i++)
		{
			cout << *(A + i) << "\t";
		}
		cout << endl;
		cout << "второй массив : ";
		for (int i = 0; i < N; i++)
		{
			cout << *(B + i) << "\t";
		}
	}
	else
	{
		cout << "первый массив : ";
		for (int i = 0; i < N; i++)
		{
			cout << *(B + i) << "\t";
		}
		cout << endl;
		cout << "второй массив : ";
		for (int i = 0; i < N; i++)
		{
			cout << *(A + i) << "\t";
		}
	}
}
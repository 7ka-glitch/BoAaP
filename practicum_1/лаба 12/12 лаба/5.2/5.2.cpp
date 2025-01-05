#include<iostream>
using namespace std;
void main()
{
	setlocale(LC_ALL, "rus");
	const int N = 10;
	int a=0, *pa=&a;
	int x[N]{1,2,3,4,5,6,7,8,9,10};
	int y[N]{1,3,2,4,6,5,7,1,9,2};
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j <N; j++)
		{
			if (*(x + i) == *(y + j))
					{
				a++; break;
					}
		}
	}
	cout << "количество одинаковых элементов массива = " << *pa << endl;
}
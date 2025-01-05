#include<iostream>
using namespace std;
void main()
{
	setlocale(LC_ALL, "rus");
	string N;
	int k ,*pk=&k,a=0,*pa=&a;
	cout << "введите N" << endl;
	cin >> N;
	cout << "введите k" << endl;
	cin >> k;
	int* arr = new int[N.size()];
	for (int i = 0, x, *px = &x; i < N.size(); i++)
	{
		*px = N[i] - 48;
		if (*px % *pk == 0 && *px!=0)
		{
			*(arr + *pa) = *px;
			(*pa)++;
		}
	}
	for (int i = 0,j=1; i < *pa; i++)
	{
		cout << j << " элемент массива :\t"<<*(arr+i) << endl;
		j++;
	}

	
}
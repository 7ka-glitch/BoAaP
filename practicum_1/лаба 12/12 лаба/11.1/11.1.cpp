#include<iostream>
using namespace std;
void main()
{
	setlocale(LC_ALL, "rus");
	int n;
	cout << "введите количество чисел последовательности (n)\t";
	cin >> n;
	cout << "введите последовательность : \t";
	int arr[100000];
	bool itog[100001]{ false };
	for (int i = 0; i < n; i++)
	{
		cin >> *(arr + i);
	}
	for (int i = 0; i < n; i++)
	{
		if(* (arr + i) <= n)
		{
			*(itog+(*(arr + i))) = true;
		}
	}
	for (int i = 1; i <= n; i++)
	{
		if (!(*(itog+i)))
		{
			cout << "Наименьшее отсутствующее число: " << i << endl; return;
		}
	}
	cout << "Наименьшее отсутствующее число: " << ++n << endl; return;
	
}
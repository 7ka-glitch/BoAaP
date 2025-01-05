#include<iostream>
using namespace std;
void main()
{
	setlocale(LC_ALL, "rus");
	srand(time(NULL));
	int n, max=0,w=1,a=1,sum=0;
	
	cout << "Введите количество дней, когда выподали осадки" << endl;
	cin >> n;
	int* A = new int[n];
	int* C = new int[n];
	for (int i = 0; i < n; i++)
	{
		C[i] = rand();
		cout << "за " << a << " день выпало осадков: " << C[i] << endl;
		a++;		
	}
	for (int i = 0; i < n; i++)
	{
		if (i % 7 != 0 )
		{
			sum = sum + C[i];
			A[i] = sum;
		}
		else
		{
			sum = C[i];
		}
	}
	for (int i = 0; i < n; i++)
	{
		if (A[i] > max)
		{
			max = A[i];
			if (i % 7 != 0)
			{
				w = (i / 7) + 1;
			}
			else
			{
				w = i / 7;
			}
		}
	}
	cout << "Больше всего осадков выпало в " << w <<" неделю"<< endl;
	 

}
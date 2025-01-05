#include<iostream>
using namespace std;
void main()
{
	srand(time(NULL));
	setlocale(LC_ALL, "rus");
	int n, m;
	bool y;
	cout << "Введите размер массива" << endl;
	cin >> n;
	int* C = new int[n];

	
	m = n-1;
	for (int i = 0; i < n; i++)
	{
		C[i] = rand() % 100;
		cout << C[i] << "; ";
		if (C[i] == C[m])
		{
			y = true;
		}
		else { y = false; }
		m--;
	}
	cout<<endl;
	if (y)
	{
		cout << "Массив симетричен" << endl;
	}
	else {
		cout << "Массив не симетричен" << endl;
	}
}
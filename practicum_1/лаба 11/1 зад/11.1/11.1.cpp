#include<iostream>
using namespace std;
void main()
{
	setlocale(LC_ALL, "rus");
	int A, n;
	char tm[33];
	cout << "Введите А" << endl;
	cin >> A;
	_itoa_s(A, tm, 2);
	cout << "число А: " << tm << endl;

	if ((A & 15)==0)
	{
		cout << "число кратно 16" << endl;
	}
	else
	{
		cout << "число не кратно 16" << endl;
	}
}
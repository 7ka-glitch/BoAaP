#include<iostream>
using namespace std;
void main()
{
	setlocale(LC_ALL, "rus");
	int A,one=0,zero=0;
	char tm[33];
	cout << "Введите А" << endl;
	cin >> A;
	_itoa_s(A, tm, 2);
	cout << "число А в 2сс: "<<  tm << endl;
	for (int i = 0; i < 33; i++)
	{
		if (tm[i] == '1')
		{
			one++;
		}
	}
	for (int i = 0; i < 33; i++)
	{
		if (tm[i] == '0')
		{
			zero++;
		}
	}
	cout << "на " << one - zero <<" в числе а больше битов равных 1 чем 0" << endl;

}

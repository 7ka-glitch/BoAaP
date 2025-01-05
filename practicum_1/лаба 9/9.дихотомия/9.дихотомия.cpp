#include<iostream>
using namespace std;
void main()
{
	setlocale(LC_ALL, "rus");
	float e = 0.0001, a, b, x;
	cout << "Введите а" << endl;
	cin >> a;
	cout << "Введите b" << endl;
	cin >> b;
	do
	{
		x = (a + b) / 2;
		if ((sin(x)+pow(x,3)) * (pow(a,3) + sin(a)) <= 0)
		{
			b = x;
		}
		else
		{
			a = x;
		}

	} while (abs(a - b) > 2 * e);

	cout << x << endl;
}
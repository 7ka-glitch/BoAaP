#include<iostream>
using namespace std;
void main()
{
	setlocale(LC_ALL, "rus");
	int A,n,p,maskA,clear;
	char tm[33];

	cout << "Введите А" << endl;
	cin >> A;

	cout << "Введите p" << endl;
	cin >> p;

	cout << "Введите n" << endl;
	cin >> n;

	_itoa_s(A, tm, 2);
	cout << "число А: " << tm << endl;

	maskA = ~(((1 << n) - 1) << (p - (n + 1)));
	clear = A & maskA;
	_itoa_s(clear, tm, 2);
	cout << "очищенное  А: " << tm << endl;
}